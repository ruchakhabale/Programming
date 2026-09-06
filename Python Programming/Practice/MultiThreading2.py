import threading             # threading is a name of in built module

def Display():
    print("Inside Display : ",threading.get_ident())    # thread fakt create hoto, kaam karat nahi (child thread)

def main():
    print("Inside main : ",threading.get_ident())    # thread fakt create hoto, kaam karat nahi (parent thread)

    tobj = threading.Thread(target=Display)      # target=Display is keyword argument , threading naav cha module madhun Thread naav cha class cha obj banava tobj asa

    tobj.start()   # thread chya obj cha naav.start mhnje thread chalu hoto


if __name__ == "__main__":
    main()
