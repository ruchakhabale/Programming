import threading             # threading is a name of in built module

def Display(No1, No2, No3):      
    print(f"Inside Display {No1}, {No2}, {No3} : ",threading.get_ident())    

def main():
    print("Inside main : ",threading.get_ident())    

    #passing parameters to thread function so we need to give iterable so (11,) says tuple
    tobj = threading.Thread(target=Display, args = (11,21,51,))      # threading naav cha module madhun Thread naav cha class cha obj banava tobj asa

    tobj.start()   # thread chya obj cha naav.start mhnje thread chalu hoto


if __name__ == "__main__":
    main()

# refer DatatypeX.py for meaning of args = (11,)
