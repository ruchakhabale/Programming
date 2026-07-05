MinNo = lambda No1,No2 : No1 if No1 < No2 else No2

def main():
    Value1 = int(input("Enter your first number : "))
    Value2 = int(input("Enter your second number : "))

    Ret = MinNo(Value1,Value2)

    print(f"Minimum Number is : {Ret}")


if __name__ == "__main__":
    main()