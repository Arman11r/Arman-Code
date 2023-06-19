#wap to find sum of digits of a intiger number
num = int(input("enter the number:"))
sum1 = 0
nnum = num
while(nnum != 10):
    digit = nnum%10
    nnum = nnum//10 
    sum1 = sum1 + digit
    print("the sum = ",sum1)
    