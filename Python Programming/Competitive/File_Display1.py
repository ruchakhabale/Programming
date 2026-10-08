def main():
    try:
        fobj = open("Demo.txt")

        Data = fobj.read()

        print("Contents of the file are :")
        print(Data)

    except FileNotFoundError as fobj:
        print("File is not present in current directory")

if __name__ == "__main__":
    main()
