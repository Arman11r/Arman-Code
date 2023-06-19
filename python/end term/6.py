#write a python program to multiply all elements in a list using functions
def multiply(numbers):
   total = 1
   for x in numbers:
    total = total * x
   return total
print(multiply([1,2,3,4]))