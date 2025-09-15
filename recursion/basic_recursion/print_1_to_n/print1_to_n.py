def digit(i,n):
    if(i>n):
        return
    print(i)
    digit(i+1,n)

n = int(input("Enter the number till you want to print: "))
digit(1,n)