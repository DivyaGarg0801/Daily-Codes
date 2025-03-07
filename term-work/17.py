print("*****INPUT*****")
x=int(input("enter one number:"))
y=int(input("enter second number:"))
if (x>y):
    s=y
else:
    s=x
for i in range(1,s,1):
    if (x%i==0 and y%i==0):
        gcd=i
print("*****OUTPUT*****")
print("GCD is",gcd)
lcm=float((x*y)/gcd)
print("LCM is",lcm)