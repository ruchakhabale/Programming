class Base:
    def __init__(self):
        print("inside base constructor")




class Derived(Base):
    def __init__(self):
        print("inside derived construtor")

bobj = Base()