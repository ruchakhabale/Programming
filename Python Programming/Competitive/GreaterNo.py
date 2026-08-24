def ChkGreater(No1,No2):
    
    if(No1 < No2):
        Ans = True
    return Ans
 
def main():
    print("Enter first number")
    Value1 = int(input())

    print("Enter second number")
    Value2 = int(input())
    
    Ret = ChkGreater(Value1, Value2)

    print("Greater number is :",Ret)


if __name__ == '__main__':
    main()

#9.2 incomplete