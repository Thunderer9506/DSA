
# I Made this approach tried myself
# def water(height):
#     area = 0
#     maxHeight = 0
#     for i in range(len(height)):
#         width = i-maxHeight
#         area = max(area,min(height[i],height[maxHeight])*width)
#         if height[i] > height[maxHeight]:
#             maxHeight = i
#     return area

def water(height):
    right = len(height)-1
    left = 0
    res = 0
    while left < right:
        width = right-left
        res = max(res,min(height[right],height[left])*width)
        if height[left] < height[right]:
            left += 1
        else:
            right -= 1
    return res

# [8,7,2,1]
# [1,8,6,2,5,4,8,3,7]
# [1,2,1]
# [1,2,4,3]
print(water([1,2,4,3]))