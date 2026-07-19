def main():
    try:
        fobj = open("Demo.txt")

        print("Reading line by line from line")

        Data = fobj.readlines() 
        print(Data)

    except FileNotFoundError as fobj:
        print("File is not present in Current Directory")

if __name__ =="__main__":
    main()