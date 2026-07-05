Multiplication = lambda No1, No2 : No1 * No2

def main():
    Value1 = int(input("Enter your first number : "))
    Value2 = int(input("Enter your second number : "))

    Ret = Multiplication(Value1,Value2)

    print("Multiplication is : ",Ret)

if __name__ == "__main__":
    main()