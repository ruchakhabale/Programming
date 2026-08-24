import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error, r2_score

def MarvellousRegression(DataPath):
    Border = "-"*50
    # Step 1 : Load the data

    print(Border)
    print("Step 1 : Load the data")
    print(Border)

    df = pd.read_csv(DataPath)

    print(df.head())

    # Step 2 : Remove unwanted column
    
    print(Border)
    print("Step 2 : Remove unwanted column")
    print(Border)

    if "Unnamed: 0" in df.columns:
        df = df.drop(columns=["Unnamed: 0"])

    print(df.head())

    # Step 3 : Check missing values

    print(Border)
    print("Step 3 : Check missing values")
    print(Border)

    print(Border)
    print("Total missing values : ")
    print(Border)
    print(df.isnull().sum())

    # Step 4 : Statistical Summary
    
    print(Border)
    print("Step 4 : Statistical Summary")
    print(Border)

    print(df.describe())

    # Step 5 : Correlation
        
    print(Border)
    print("Step 5 : Correlation")
    print(Border)

    print(df.corr())

    # Step 6 : Separate Independent and Dependent variables
            
    print(Border)
    print("Step 6 : Separate Independent and Dependent variables")
    print(Border)

    X = df[["TV", "radio","newspaper"]]
    Y = df["sales"]

    print("Independet variables : ")
    print(X.head())

    print("Dependet variables : ")
    print(Y.head())

    # Step 7 : Split the dataset
                
    print(Border)
    print("Step 7 : Split the dataset")
    print(Border)

    X_train, X_test, Y_train, Y_test = train_test_split(
        X,
        Y,
        test_size=0.2,
        random_state=42
    )

    print("Training Data : ",X_train.shape)
    print("Testing Data : ",X_test.shape)

    # Step 8 : Create and Train the model
                    
    print(Border)
    print("Step 8 : Create and Train the model")
    print(Border)

    model = LinearRegression()

    model = model.fit(X_train, Y_train)

    print("Model Trained Successfully...")

    # Step 9 : Test the model
                        
    print(Border)
    print("Step 9 : Test the model")
    print(Border)

    Y_pred = model.predict(X_test)

    print("Expected answers : ")
    print(Y_test[:3])                                      # Slicing of first 3 records

    print("Predicted answers : ")
    print(Y_pred[:3])  


def main():
    MarvellousRegression("Advertising.csv")


if __name__ == "__main__":
    main()

