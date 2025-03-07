'''
def count_alphabets_digits(str,alpha,digit):
    for i  in str:
        if (i.isalpha()):
            alpha+=1
        elif(i.isdigit()):
            digit+=1
    print("alphabets are",alpha)
    print("digits are",digit)
alpha=0
digit=0
str=input("enter a string")
count_alphabets_digits(str,alpha,digit)
print(10*20*30)
a=("hello".upper())
print(a)

s1={1,2,3,4}
s2={2,3,5,6}
print(s1.intersection(s2))
print(s1&s2)

s1={1,2,3,4}
s2={2,3,5,6}
print(s1.symmetric_difference(s2))
print(s1^s2)

alpha = ["a", "b", "c"]
print(alpha)

alpha = ["a", "b", "c","d","e","f","g"]
alpha[1:4] = ["BB","CC"]
print(alpha)

List1 = [10,20,30,40,50]
List2= [x+10 for x in List1]
print(List2)

'''
'''
laptop={'Name': 'HP', 'year':2020, 'processor':'i5'}
print(laptop["Name"])
print(laptop["year"])
print(laptop.get('Name'))
print(laptop.keys())
print(laptop.values())
print(laptop.items())
print(laptop.pop('Name'))
print(laptop.items())
'''
'''
sum=0
for i in range(11):
    if (i%2==0 or i%3==0 or i%5==0):
        continue
    sum=sum+i
    print(sum)
print(sum)

a = ('a', 'b', 1)          # Step 1: Create a tuple
b = list(a)                # Step 2: Convert tuple to list
c = b[::-1]                # Step 3: Reverse the list
c.append("c")              # Step 4: Append 'c' to the list
c.extend(["q", "f", "J"])  # Step 4: Extend the list with more elements
a = tuple(c)               # Step 5: Convert back to tuple
print(a)                   # Output the final tuple

Employee=dict()
Employee={"Name":"John","Age":29,"salary":25000,"Company":"GOOGLE"}
for x in Employee:
    print(x)
'''
'''
laptop={'test1':{'Name': 2021, 'year':2020},'test2':{'name':2019,'name2':2022}}
max=0
for key1 in laptop.values():
    for key2 in key1.values():
        if(key2>max):
            max=key2
print(max)


f=open("test.txt","w+")
f.write("hello \nsome sample tezt\nto test read,write ,,,,     operations\nfunctions")
f.seek(0)
print(f.read())
ind=int(input("ener position "))
f.seek(ind)
f.write("TEXT ENTERED WHILE DOING EXAM PREVIOUS YEAR")
f.seek(0)
a=f.read()
print(a)

import pandas as pd
df=pd.DataFrame({
    'name':['abc','def'],
    'age':[10,20],
    'city':["delhi","dehradun"]
}
)
print(df)
print(df['age'])
print(df.iloc[1])
print(df[df['age']>10])
'''
import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

# Data
overs = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
Ind_score = [20, 34, 46, 76, 88, 103, 126, 142, 155, 163]
SA_score = [22, 36, 48, 85, 99, 112, 118, 126, 136, 148]

# Create a DataFrame
data = pd.DataFrame({
    "Overs": overs * 2,
    "Runs": Ind_score + SA_score,
    "Team": ["IND"] * len(overs) + ["SA"] * len(overs)
})

# Plot using Seaborn
sns.lineplot(data=data, x="Overs", y="Runs", hue="Team", style="Team", markers=True)
plt.title("IND vs SA Scores")
plt.xlabel("Overs")
plt.ylabel("Runs")
plt.show()