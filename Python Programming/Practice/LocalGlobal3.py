no = 11    #global variable

def Display():
    no = 21          # this line creates a new no which stores 21 value NOT the global value of 11                              
    print("From display : ",no)

print("Before : ",no)
Display()
print("After : ",no)


# complier finds out only the syntactical errors only 
# for logical errors the execution stops at intepretation level