import threading             # threading is a name of in built module

def Display():
    print("Inside Display : ",threading.get_ident())   #this also gives Thread ID of main thread, as there is No other thread here, only one thread is there

def main():
    print("Inside main : ",threading.get_ident())      #gives Thread ID of main thread
    Display()

if __name__ == "__main__":
    main()