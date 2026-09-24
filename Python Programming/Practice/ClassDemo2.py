class Demo:
    def __init__(self):
        print("Inside Constructor")

    def __del__(self):
        print("Inside Destructor")

#object creation of Demo class
obj1 = Demo()    
obj2 = Demo() 

print("End of Application")
