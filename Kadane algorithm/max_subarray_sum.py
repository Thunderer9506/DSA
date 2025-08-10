def maxSubArray(nums):
    maxSum = nums[0]
    arrSum = 0
    for i in range(0,len(nums)):
        arrSum += nums[i]
        maxSum = max(arrSum,maxSum)
        if arrSum < 0:
            arrSum = 0
    return maxSum

print(maxSubArray([-2,1,-3,4,-1,2,1,-5,4]))