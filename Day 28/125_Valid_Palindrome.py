s = "amanaplanacanalpanama"
str = "A man, a plan, a canal: Panama"
str = str.lower()
palindrome = ""

for i in range(len(str)):
    if str[i].isalnum():
        palindrome += str[i]
rev = palindrome[::-1]
print(rev==palindrome)