#wap to check wheater a number is strong number or not
import math
num = int(input("enter the number:"))
temp = num
sum1 = 0
while(num):
    rem = num%10
    sum1 = sum1 + math.factorial(rem)
    num = num//10 
if(sum1==temp):
    print("strong")
else:
    print("not a strong")