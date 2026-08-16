import pandas as pd
def main():
    data = {
        "Name" : ['Amit', 'Sagar', 'Pooja'],
        "Math" : [85, 90, 78],
        "Science" : [92, 88, 80],
        "English" : [75, 85, 82]
    }

    dobj = pd.DataFrame(data)

    dobj["Total"] = dobj.sum(axis=1, numeric_only=True)

    print(dobj.describe)

if __name__ == "__main__":
    main()