class Demo:
    # Class variables
    Value1 = 10
    Value2 = 20

    def __init__(self):
        # Instance variables
        self.No1 = 11
        self.No2 = 21

    # Instance method
    def fun(self):
        print("Inside Instance method named as fun")
        print(self.No1)
        print(self.No2)
        print(Demo.Value1)
        print(Demo.Value2)

# object creation
dobj = Demo()      
dobj.fun()      # fun is an Instance method only 

# to access Instance variable, there is only one way to access them, by using self. 