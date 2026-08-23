ChkNum = lambda No : (No % 2 == 0)

def main():
    Value = int(input("Enter your number : "))

    Ret = ChkNum(Value)

    if(Ret == True):
        print("Even Number")
    else:
        print("Odd Number")

    
if __name__ == "__main__":
    main()
    
