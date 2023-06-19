#to fidn factirial of number (1 t 10)
def fact(n):
    prod = 1
    while n>=2:
        prod*=n
        n=n-1
    return prod
for i in range(1,11):
     print("productof{} is {}".format(i,fact(i))) 