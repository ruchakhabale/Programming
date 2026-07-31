class Base:
    def __init__(self):
        print("inside base constructor")




class Derived(Base):
    def __init__(self):
        super().__init__()         # we are explicitly calling the magic method
        print("inside derived construtor")

dobj = Derived()