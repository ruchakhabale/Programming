from sklearn.datasets import load_iris

def main():
    print("-"*50)
    print("Iris Classification Case study")
    print("-"*50)

    Dataset = load_iris()              # load_iris is a function

    print(Dataset)

if __name__ == "__main__":
    main()