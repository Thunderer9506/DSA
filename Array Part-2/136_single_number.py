def singleNumber(nums):
    temp = 0
    for val in nums:
        temp = temp ^ val
    return temp

print(singleNumber([4,1,2,1,2]))