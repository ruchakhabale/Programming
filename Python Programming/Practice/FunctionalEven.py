# this is a Hybrid approach = Functional + Procedural 

# this line is Functional
CheckEven = lambda No : (No % 2 == 0)   

# the below part is Procedural due to def keyword
def main():
    Value = int(input("Enter Number : "))  

    Ret = CheckEven(Value)   # Ret = (Value % 2 == 0) 

    if(Ret == True):
        print("Its Even Number")
    else:
        print("Its Odd Number")



if __name__ == "__main__":
    main()