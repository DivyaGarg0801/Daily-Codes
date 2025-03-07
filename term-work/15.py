print("*****INPUT*****")
x=int(input("Enter x coordinate:"))
y=int(input("Enter y coordinate:"))
print("*****OUTPUT*****")
if (x>0 and y>0):
    print("The coordinate point",(x,y), "lies in the First quadrant.")
elif (x<0 and y>0):
    print("The coordinate point",(x,y), "lies in the Second quadrant.")
elif (x<0 and y<0):
    print("The coordinate point",(x,y) ,"lies in the Third quadrant.")
else:
    print("The coordinate point",(x,y), "lies in the Fourth quadrant.")