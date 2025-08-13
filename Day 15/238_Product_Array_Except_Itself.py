def productExceptSelf(nums):
    n = len(nums)
    ans = [1]*n
    suffix = 1
    ans[0] = 1
    for i in range(1,n):
        ans[i] = ans[i-1]*nums[i-1]
    
    for i in range(n-2,-1,-1):
        suffix *= nums[i+1]
        ans[i] *= suffix
    
    return ans

print(productExceptSelf([1,2,3,4]))