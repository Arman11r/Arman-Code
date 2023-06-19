#presume a ledder is put against a wall length and angle store the lenghth of ladder and the angleform with the ground as it leans against the wall.wap program to compute the height reached by the ladder on the wallif length of the ladder is 16 feet and angle is 75 degree
import math
len = float(input("enter the length;"))
angle = float(input("enter angle in degree"))
angrad = math.radians(angle)
height = len*math.sin(angle)
print("height reached",height)