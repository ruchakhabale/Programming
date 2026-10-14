import numpy as np

input = np.array([2.0,3.0,4.0])
print("X : ",input)

weights = np.array([0.5,0.3,0.2])
print("W : ",weights)

bias = 1.0
print("b : ",bias)

Z = np.dot(input,weights) + bias
print("Z : ",Z)

def ReLU(x):
    return max(0,x)

Y = ReLU(Z)
print("Y : ",Y)

