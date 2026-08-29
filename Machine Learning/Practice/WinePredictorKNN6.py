import pandas as pd
import matplotlib.pyplot as plt

from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score, confusion_matrix
from sklearn.preprocessing import  StandardScaler

def MarvellousClassifier(Datapath):
    border = "-"*40
    

    # Step 1: Load the dataset from csv file
    print(border)
    print("Step 1: Load the dataset from csv file")
    print(border)

    df = pd.read_csv(Datapath)

    print(border)
    print("Some entries from dataset: ")
    print(df.head())
    print(border)


    # Step 2: Clean the dataset
    print(border)
    print("Step 2: Clean the dataset")
    print(border)

    df.dropna(inplace= True)  # missing value udun takto from dataframes

    print("Shape of dataset: ", df.shape)
    print("Total records: ", df.shape[0])
    print("Total columns: ", df.shape[1])

    print(border)

    # Step 3: Separate independentand dependent variable
    print(border)
    print("Step 3: Separate independentand dependent variable")
    print(border)

    X = df.drop(columns=["Class"])
    Y = df["Class"]

    print("Shape of X: ", X.shape)
    print("Shape of Y: ", Y.shape)

    print(border)
    print("Input columns: ", X.columns.tolist())
    print("Output column: Class")
    print(border)


    # Step 4: Split the dataset for training and testing
    print(border)
    print("Step 4: Split the dataset for training and testing")
    print(border)

    X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size= 0.5, random_state=42)

    print(border)
    print("details of training and testing data")
    print("Shape of X_train: ", X_train.shape)
    print("Shape of X_test: ", X_test.shape)
    print("Shape of Y_train: ", Y_train.shape)
    print("Shape of Y_test: ", Y_test.shape)

    # Step 5 : Feature Scaling

    print(border)
    print("Step 5 : Feature Scaling")
    print(border)

    scalar = StandardScaler() 
    X_train_scaled = scalar.fit_transform(X_train)
    X_test_scaled = scalar.fit_transform(X_test)

    print("Feature scaling done")

    print(border)

    # Step 6 : Build the Model

    print(border)
    print("Step 6 : Build the model")
    print(border)

    model = KNeighborsClassifier(n_neighbors=9)

    print("Classification model is created")

    # Step 7 : Train the Model
    
    print(border)
    print("Step 7 : Train the model")
    print(border)

    model = model.fit(X_train_scaled, Y_train)

    print("Model training completed")

    print(border)

    # Step 8 : Test the Model
        
    print(border)
    print("Step 8 : Test the model")
    print(border)

    Y_pred = model.predict(X_test_scaled)

    Accuracy = accuracy_score(Y_test, Y_pred)

    print("Model accuracy is : ",Accuracy*100)


def main():
    MarvellousClassifier("WinePredictor.csv")


if __name__ == "__main__":
    main()