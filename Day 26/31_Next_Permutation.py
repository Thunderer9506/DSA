def nextPermutation(A):
    pivot = -1
    n = len(A)
    for i in range(n-2,-1,-1):
        if (A[i] < A[i+1]):
            pivot = i
            break
        
    

    if (pivot == -1):
        A.reverse()
        return
    
    for i in range(n-1,pivot,-1):
        if(A[i] > A[pivot]):
            A[i],A[pivot] = A[pivot],A[i]
            break

    i = pivot+1
    j= n-1
    while (i<=j):
        A[i],A[j] = A[j],A[i]
        i += 1
        j -= 1
    
A = [1,2,3]
nextPermutation(A)
print(A)
    