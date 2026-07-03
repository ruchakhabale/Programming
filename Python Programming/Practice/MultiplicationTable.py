def MultiplicationTable(No):
    i = 0
    for i in range (1,11,1):
        Ans = No * i
        print(Ans)
    return i
    

def main():
    Value = int(input("Enter your number : "))
    MultiplicationTable(Value)
    
    
if __name__ =='__main__':
    main()