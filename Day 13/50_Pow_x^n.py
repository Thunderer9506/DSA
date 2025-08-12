def myPow(x, n):
    binForm = n
    ans = 1
    if(n<0):
        x = 1/x
        binForm = -binForm
    
    while(binForm>0):
        if (binForm%2 == 1):
            ans *= x
        
        x *= x
        binForm //= 2
    
    return ans