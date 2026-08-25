MaxNo = lambda No1, No2 : No1 if No1 > No2 else No2

def main():
    Value1 = int(input("Enter your first number : "))
    Value2 = int(input("Enter your second number : "))
    
    Ret = MaxNo(Value1, Value2)

    print(f"The Maximum number is : {Ret}")
    
if __name__ == "__main__":
    main()