import os 

def main():
    if(os.path.exists("Demo.txt")):
        print("File exists in current directory")

    else:
        print("File does not exists in current directory")

if __name__ =="__main__":
    main()