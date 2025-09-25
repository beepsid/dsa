def reversed(arr, start, end):
    if(start >= end):
        return arr
    else:
        arr[start], arr[end] = arr[end], arr[start]
        return reversed(arr, start+1, end-1)

n=int(input("Enter the number of numbers in array: "))
arr = []
i = 0
while i<n:
    arr.append(int(input("Enter the number: ")))
    i+=1

print("The reversed array is: ", reversed(arr, 0, n-1))