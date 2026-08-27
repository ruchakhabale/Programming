def main():
    Ans = 0
    try:
        print("Enter first number : ")
        No1 = int(input())

        print("Enter second number : ")
        No2 = int(input())

        Ans = No1 / No2        #ethe exception yenya che chances astat

        print("Division is successful")    #jar exception aala nahi tar ch hii line yeu shakte 


    except ZeroDivisionError as zobj:             # as word is used alias
        print("Exception occured due to second operand is zero : ",zobj)   #jar exception aala directly Ans chya line nantr hii line yete

    except ValueError as vobj:
        print("Exception occured due to Invalid datatype : ",vobj)

    print("Result is : ",Ans)

if __name__ == "__main__":
    main()

#zobj is the object of the ZeroDivisionError class, it was that kagad ka ball from our example of pvm throwing that paper
# just like that ValueError chya kagada cha naav vobj dila aahe apan