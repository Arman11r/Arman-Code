#wap to enter dictionary from keyboard and display its elements 
x = {}
print("how many elemetns?: ",end='')
n =  int(input())
for i in range(n):
    print("enter key: ",end='')
    k = input()
    print("enter its values: ",end='')
    v = int(input())
    x.update({k:v})
    print("the dictionary is : ",x)