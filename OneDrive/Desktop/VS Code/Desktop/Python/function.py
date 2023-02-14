def sum(a,b):
    return a+b
def sub(a,b):
    return a-b
def mult(a,b):
    return a*b
def div(a,b):
    return a/b

while(True):
    print("\n\nEnter two numbers : ")
    a = int(input()) 
    b = int(input())
    print("\nEnter what you want to do? -> ")
    print("\nClick 1 for sum")
    print("\nClick 2 for sub")
    print("\nClick 3 for multi")
    print("\nClick 4 for div")
    print("\nClick 5 for Exit")
    choice = int(input("enter your choice :"))
    if (choice == 1):
        print(a,"+",b,"=",sum(a,b))
    elif (choice == 2):
        print(a,"-",b,"=",sub(a,b))
    elif (choice == 3):
        print(a,"*",b,"=",mult(a,b))
    elif (choice == 4):
        print(a,"/",b,"=",div(a,b))
    elif (choice == 5):
        break
    
