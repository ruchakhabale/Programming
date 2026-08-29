# 6 : 1 * 2 * 3 * 4 * 5 * 6
import time             # time naav cha module import kela (in - built module)

def Factorial(No):
    Fact = 1

    for i in range(1,No+1):
        Fact = Fact * i
    
    return Fact


def main():
    Value = int(input("Enter Number : "))

    start_time = time.time()

    Ret = Factorial(Value) 

    end_time = time.time()

    print(f"Factorial of {Value} is {Ret} ") 

    print(f"Time required is : {end_time - start_time} seconds")    # depends on speed of cpu

if __name__ == "__main__":
    main()
