def peakIndexInMountainArray(arr):
    st = 1
    end = len(arr)-2

    while (st<= end):
        mid = st + (end-st)//2
        if (arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1]):
            return mid
        elif(arr[mid-1] < arr[mid]):
            st = mid +1
        else:
            end = mid -1

print(peakIndexInMountainArray([0,10,5,2]))