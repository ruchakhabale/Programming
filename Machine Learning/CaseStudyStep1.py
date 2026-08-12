import pandas as pd

Border = "-"*40
##########################################################################
# Step 1 : Load the dataset
##########################################################################

print(Border)
print("Step 1 : Load the dataset")
print(Border)

DataPath = "iris.csv"              

df = pd.read_csv(DataPath)          

print("Dataset loaded successfully")
print("Initial Entries from dataset are : ")
print(df.head())