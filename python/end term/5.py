#write a program to show usage of loops to retrive elements of dictionary
colours = {'r':'red','g':'green','b':'blue'}
for k in colours:
    print(k)
for k in colours:
    print(colours[k])
for k,v in colours.items():
    print('keys = {} \t values = {}'.format(k,v))