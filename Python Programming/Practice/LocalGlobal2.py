no = 11    #global variable

def Display():
    a = 21   # Local Variable
    print("From Display : ",no)
    print("From Display value of a is : ",a)

def Demo():
    print("From Demo value of a is : ",a)    # Error
    print("From Demo : ",no)

Display()
Demo()


# complier finds out only the syntactical errors only 
# for logical errors the execution stops at intepretation level