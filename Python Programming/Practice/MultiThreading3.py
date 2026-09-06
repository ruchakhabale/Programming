import threading             # threading is a name of in built module

def Display(No):
    print(f"Inside Display {No} : ",threading.get_ident())    

def main():
    print("Inside main : ",threading.get_ident())    

    tobj = threading.Thread(target=Display, args = (11,))      # threading naav cha module madhun Thread naav cha class cha obj banava tobj asa

    tobj.start()   # thread chya obj cha naav.start mhnje thread chalu hoto


if __name__ == "__main__":
    main()

# refer DatatypeX.py for meaning of args = (11,)
