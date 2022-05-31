import math

radius_str = input("Enter the radius of the circle: ")
radius_int = int(radius_str)

circumference = 2 * math.pi * radius_int
area = math.pi * (radius_int ** 2)

print("The circumference is:", round(circumference, 2), ", and the area is:", area)
