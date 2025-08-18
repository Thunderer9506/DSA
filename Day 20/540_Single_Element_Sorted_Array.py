def singleNonDuplicate(arr):
    n = len(arr)
    if (n == 1):
        return arr[0]
    st = 0
    end = n-1
    while (st <= end):
        mid = st + (end-st)//2
        if (mid == 0 and arr[0] != arr[1]):
            return arr[mid]
        if (mid == n-1 and arr[n-1] != arr[n-2]):
            return arr[mid]

        if (arr[mid-1] != arr[mid] and arr[mid] != arr[mid+1]):
            return arr[mid]
        
        if (mid%2 == 0):
            if (arr[mid-1] == arr[mid]):
                end = mid-1
            else:
                st = mid + 1
        else:
            if (arr[mid-1] == arr[mid]):
                st = mid + 1
            else:
                end = mid - 1
        
    
    return -1

print(singleNonDuplicate([1,1,2,3,3,4,4,8,8]))