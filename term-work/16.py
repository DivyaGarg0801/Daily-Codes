print("*****INPUT*****")
x=int(input("Enter x :"))
y=int(input("Enter y :"))
z=int(input("Enter z :"))
sum=x+y+z
print("*****OUTPUT*****")
if (x==y and x==z):
    sum=3*sum
    print("Since all values are same ")
    print("sum is :",sum)
else:
    print("sum is :",sum)
    