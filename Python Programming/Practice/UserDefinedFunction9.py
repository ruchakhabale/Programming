#how to define inner function / nested function
def BigBazar():
    print("Inside BigBazar")

    def Amul():
        print("Inside Amul Icecream parlor")

    Amul()


def main(): 
    BigBazar()       #Allowed
    


if __name__ == "__main__":   
    main() 




# R.L.ex. : if you have to call marvellous, first need to call GBB (inner function outer function)
# lly here, first we need to call BigBazar then we can call Amul
# from BigBazar we can Amul, but cant call Amul directly 