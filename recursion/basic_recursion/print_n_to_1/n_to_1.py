def func(n):
    if(n==0):
        return
    print(n)
    func(n-1)

func(int(input("Enter the number from where you want to print: ")))