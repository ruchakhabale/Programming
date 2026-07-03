def DivisibleNo(No):
    
    if No % 3 == 0 and No % 5 == 0:
        print("Number is divisible by 3 and 5")
    else:
        print("Number is Not divisible by 3 and 5")
        
    

def main():
    Value = int(input("Enter your number : "))
    DivisibleNo(Value)
    


if __name__ =='__main__':
    main()
