print("*****INPUT*****")
y=int(input("Enter year:"))
print("*****OUTPUT*****")
if (y%100==0 and y%400==0):
    print("Leap year")
elif (y%4==0 and y%100!=0):
    print("Leap year")
else:
    print("Not a leap year")
