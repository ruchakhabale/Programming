def Area(Radius, PI = 3.14):    # jar tu dusari point nahi pathvali tar mii by default 3.14 gheto 
    Ans = PI * Radius * Radius
    return Ans


def main():
    Ret = Area(10.5)     #ethe tyanchi default use keli 3.14 karan 2nd parameter is not given 
    print("Area of circle is : ",Ret)

    Ret = Area(10.5,7.12)     #ethe apan 7.12 dila aahe tee default chy 3.14 la khodun hee 7.12 use keli jaate
    print("Area of circle is : ",Ret)


if __name__ == '__main__':
    main()
