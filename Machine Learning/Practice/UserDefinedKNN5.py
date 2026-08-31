import math
import numpy as np

def MarvellousEucDistance(P1, P2):
    Ans = math.sqrt((P1['X'] - P2['X']) **2 + (P1['Y'] - P2['Y']) ** 2)
    return Ans


def MarvellousKNNClassifier():
    border = "-"*40

    # List of dictionaries 
    Data = [
        {'point' : 'A', 'X' : 1, 'Y' : 2, 'label' : 'Red'},        # Data[0]
        {'point' : 'B', 'X' : 2, 'Y' : 3, 'label' : 'Red'},        # Data[1]
        {'point' : 'C', 'X' : 3, 'Y' : 1, 'label' : 'Blue'},       # Data[2]
        {'point' : 'D', 'X' : 5, 'Y' : 6, 'label' : 'Blue'}        # Data[3]
    ]

    print(border)
    print("Marvellous KNN Classifier")
    print(border)

    for i in Data:
        print(i)

    print(border)

    new_point = {'X' : 3, 'Y' : 3}

    print("Distances of all points : ")
    print(border)


    for d in Data:
       d['distance'] = (MarvellousEucDistance(d,new_point))

    for d in Data:
        print(d['distance'], d['label'])

    print(border)


def main():
    MarvellousKNNClassifier()

if __name__ == "__main__":
    main()