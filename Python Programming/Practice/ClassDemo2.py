class Demo:
    def __init__(self):
        print("Inside Constructor")

    def __del__(self):
        print("Inside Destructor")

#object creation of Demo class
obj1 = Demo()    
obj2 = Demo() 

print("End of Application")

# refer the o/p of this program to understand the sequence of which line is getting executed first 

# __init__  haa python cha constructor aahe, this name is fixed for it 

# toh (self)   haa this pointer of Python aahe 

# __del__  haa python cha destructor aahe, this name is fixed for it

