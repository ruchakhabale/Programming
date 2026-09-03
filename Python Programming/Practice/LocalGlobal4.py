no = 11    #global variable

def Display():
    global no    # this tells i dont want to create a new no, use the global wala no 
                #[here at this step, writing global keyword explicitly is lly to extern keyword of storage classes (PPA) ]
    no = 21                               
    print("From display : ",no)

print("Before : ",no)
Display()
print("After : ",no)

#open-to-all session , movie trailer - declaration
#private sessions , actual movie - definition
