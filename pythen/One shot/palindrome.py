def check_palindrome(str):
    clear_str=  (str.replace(" ","")).lower()
    reversed_str =clear_str[::-1]
    return clear_str==reversed_str
str = input("Enter string : ")
print(check_palindrome(str))