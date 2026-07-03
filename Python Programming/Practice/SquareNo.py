def SquareNo(No):
    Ans = No * No
    return Ans

def main():
    Value = int(input("Enter your number : "))
    Ret = SquareNo(Value)
    print("Its Square number is : ",Ret)


if __name__ =='__main__':
    main()