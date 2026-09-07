def CheckEven(No):
    return(No % 2 == 0)

def main():
    Data = [13,12,8,10,11,20]
    
    print("Input data is : ",Data)

    FData = list(filter(CheckEven,Data))  # list madhe aanun dee tyat sathi list(Filter(data,chckeve)) lihil aahe, passing CheckEven as a parameter to this 

    print("Data after filter : ",FData)

if __name__ == "__main__":
    main()

# eka function la dusara function as a parameter pass karto tevha tee functional programming hota 