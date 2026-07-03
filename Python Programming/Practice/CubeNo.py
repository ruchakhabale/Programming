def CubeNo(No):
    Ans = No * No * No
    return Ans

def main():
    Value = int(input("Enter your number : "))
    Ret = CubeNo(Value)
    print("Its Square number is : ",Ret)


if __name__ =='__main__':
    main()

