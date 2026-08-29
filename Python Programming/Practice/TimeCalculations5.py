# 6 : 1 * 2 * 3 * 4 * 5 * 6
import time             # time naav cha module import kela (in - built module)

def Factorial(No):
    Fact = 1

    for i in range(1,No+1):
        Fact = Fact * i
    
    return Fact


def main():
    Value = int(input("Enter Number : "))

    start_time = time.perf_counter()  # perf_counter - performance counter 

    Ret = Factorial(Value) 

    end_time = time.perf_counter()

    print(f"Factorial of {Value} is {Ret} ") 

    print(f"Time required is : {end_time - start_time:.5f} seconds")    #  :.5f means decimal point nantr che fakt 5 digits display kar depends on speed of cpu

if __name__ == "__main__":
    main()


# prefer using  perf_counter  than  time.time() for Automation and ML, as this doesn't count waiting period  