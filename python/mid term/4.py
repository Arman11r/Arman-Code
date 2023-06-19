#wap to accept 3 and print largest
a=int(input("enter the number:"))
b=int(input("enter the second no:"))
c=int(input("enter the third no:"))
if a>b and a>c:
    print("a is largest")
elif b>c and b>a:
    print("b is largest")
else:
     print("c is largest")