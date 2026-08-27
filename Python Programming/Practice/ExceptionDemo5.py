def main():
    Ans = 0
    try:
        print("Enter first number : ")
        No1 = int(input())

        print("Enter second number : ")
        No2 = int(input())

        Ans = No1 / No2        #ethe exception yenya che chances astat

        print("Division is successful")    #jar exception aala nahi tar ch hii line yeu shakte 

    # Generic except block
    except Exception as eobj:
        print("Exception occured : ",eobj)


    print("Result is : ",Ans)

if __name__ == "__main__":
    main()

