def NaturalSum(No):
    Sum = 0
    if(No > 0 and No <= No):
        
        for i in range(0,No):
            Sum = Sum + No
            No = Sum + No 
                 
    return Sum
    
        
    

def main():
    Value = int(input("Enter your number : "))
    Ret = NaturalSum(Value)
    print(Ret)
    


if __name__ =='__main__':
    main()