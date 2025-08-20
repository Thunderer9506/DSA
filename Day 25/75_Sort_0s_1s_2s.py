def sortColors(arr):
    n = len(arr)
    low = 0
    mid = 0
    high = n-1
    while (mid <= high):
        if (arr[mid] == 0):
            arr[mid],arr[low] = arr[low],arr[mid]
            mid += 1
            low += 1
        elif (arr[mid] == 2):
            arr[mid], arr[high] = arr[high],arr[mid]
            high -= 1
        else:
            mid += 1

arr = [2,0,2,1,1,0]
sortColors(arr)
print(arr)