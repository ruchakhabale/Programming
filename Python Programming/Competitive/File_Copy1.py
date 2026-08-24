def main():
    try:
        fobj = open("Demo.txt","r")

        Data = fobj.read()

        fobj = open("ABC.txt","w")

        fobj.open(Data, "w")

    except FileNotFoundError as fobj:
        print("File is not present in current directory ")

if __name__ =="__main__":
    main()