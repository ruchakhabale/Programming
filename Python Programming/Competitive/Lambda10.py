LargestNo = lambda No1, No2, No3 : No1 if No1 > No2 and No3 else No2 or No3

def main():
    Value1 = int(input("Enter first number :  "))
    Value2 = int(input("Enter second number : "))
    Value3 = int(input("Enter third number :  "))

    Ret = LargestNo(Value1,Value2,Value3)

    print(f"The Largest number is : {Ret}")

if __name__ == "__main__":
    main()
#not uploaded yet 