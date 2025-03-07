/*
#include<iostream>
using namespace std;
int main()
{
    int units;
    float amt;
    string name;
    cout<<"Enter name";
    getline(cin,name);
    cout<<"enter units";
    cin>>units;
    if (units<=100)
        amt=units*0.60;
    else if (units<=300 && units>100)
        amt=60+(units-100)*0.80;
    else
        amt=60+160+(units-300)*0.90;
    if (amt<50)
    {
        amt=50;
    } 
    if (amt>300)
    {
        amt=amt*1.15;
    }
    cout<<name<<"\n"<<amt;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    string str;
    char ch;
    cout<<"enter string";
    getline(cin,str);
    cout<<"enter character to be removed";
    cin>>ch;
    for(int i=0;str[i]!='\0';i++)
    {

        if (str[i]==ch)
        {
            str.erase(i,1);
            i--;
        }
    }
    cout<<str;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter string";
    getline(cin,str);
    for(char ch='a';ch<='z';ch++)
    {
        int c=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if (ch==str[i])
                c++;
        }
        if (c==1)
            cout<<" "<< ch;
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class OverLoadDemo 
{
public:
    void merge(string str1, string str2) 
    {
        string a= str1 + str2;
        string vowels = "";
        string consonants = "";        
        for (int i=0;a[i]!='\0';i++)
        {
            if (isalpha(a[i])) 
            {
                char b = tolower(a[i]);
                if (b== 'a' || b== 'e' || b== 'i' || b== 'o' || b== 'u')
                    vowels += a[i];
                else
                    consonants += a[i];
            }
        }
        cout << vowels << " " << consonants << endl;
    }

    // Method 2: Calculate the sum of digits in a string
    int merge(string str) 
    {
        int sum = 0;
        for (int i=0;str[i]!='\0';i++) 
        {
            if (isdigit(str[i])) {
                sum +=str[i]-'0'; // Convert character digit to integer
            }
        }
        return sum;
    }
};

int main() 
{
    OverLoadDemo demo;
    string str1,str2,str3;
    cout<<"Enter String 1 :";
    getline(cin,str1);
    cout<<"Enter String 2 :";
    getline(cin,str2);
    cout << "Output for merge(string):" << endl;
    demo.merge(str1,str2);
    cout<<"Enter string for calculating number of digits ";
    getline(cin,str3);
    cout << demo.merge(str3);
    cout << "\nOutput for merge(string),sum of digits:" << endl;
    cout <<"gra54phic37abc is :"<< demo.merge("gra54phic37abc") << endl; // Expected Output: 19
    cout << "graphicworld is :"<< demo.merge("graphicworld") << endl;  // Expected Output: 0   
    return 0;
}


#include<iostream>
using namespace std;
class Time
{
    public:
        int hours,minutes,seconds;
        void getdata()
        {
            cout<<"Enter hours,minutes,seconds :";
            cin>>hours>>minutes>>seconds;
        }
        void addtime(Time & t)
        {
            seconds=seconds+t.seconds;
            minutes=minutes+t.minutes+(seconds/60);
            hours=hours+t.hours+(minutes/60);
            seconds=seconds%60;
            minutes=minutes%60;
            display();
        }
        void display()
        {
            if(hours<10)
                cout<<"0"<<hours<<":";
            else
                cout<<hours<<":";
            if(minutes<10)
                cout<<"0"<<minutes<<":";
            else
                cout<<minutes<<":";
            if(seconds<10)
                cout<<"0"<<seconds;
            else
                cout<<seconds;
        }
};
int main()
{
    Time o1,o2;
    o1.getdata();
    o2.getdata();
    cout<<"Time 1 is ";
    o1.display();
    cout<<endl;
    cout<<"Time 1 is ";
    o2.display();
    cout<<endl;
    o1.addtime(o2);
    return 0;
}


#include<iostream>
using namespace std;
class Publication
{
    public:
        string title;
        Publication(string t) 
        {
            title=t;
        }
    virtual void showInfo()
    {
        cout<<"Title is :"<< title <<endl;
    }
};
class Book:public Publication
{
    public:
        int accession_number;
    Book(string t,int accession):Publication(t), accession_number(accession) {}
    void showInfo()
    {
        cout<<"title is :"<<title<<endl<<"Accession Number is :"<<accession_number<<endl;
    }
};
class Magazine:public Publication
{
    public:
        int volume_number;
    Magazine(string t,int volume):Publication(t), volume_number(volume) {}
    void showInfo()
    {
        cout<<"title is :"<<title<<endl<<"Volume Number is :"<<volume_number<<endl;
    }
};
class Journal:public Book,public Magazine
{
    public:
    Journal(string t, int accession,int volume):Book(t, accession), Magazine(t, volume) {}
    void showInfo()
    {
        cout<<"title is:"<<Book::title<<endl<<"accession number :"<<Book::accession_number<<endl<<"volume_number :"<<Magazine::volume_number<<endl;
    }
};
int main()
{
    Journal ob1("Research",250,600);
    ob1.showInfo();
    return 0;
}

#include<iostream>
using namespace std;
class A
{
    public:
    int func(int t)
    {
        return (t*2);
    }
};
class B
{
    public:
    int func(int t)
    {
        return (t*3);
    }
};
class C
{
    public:
    int func(int t)
    {
        return (t*5);
    }
};
class D
{
    public:
    int val;
    D()
    {
        val=1;
    }
    void update_val(int new_val)
    {
        A a;
        B b;
        C c;
        
        int countA = 0, countB = 0, countC = 0;
        
        // Factorize new_val to count how many times we need to multiply by 2, 3, and 5
        while (new_val % 2 == 0) {
            new_val /= 2;
            countA++;
        }
        
        while (new_val % 3 == 0) {
            new_val /= 3;
            countB++;
        }
        
        while (new_val % 5 == 0) {
            new_val /= 5;
            countC++;
        }
        
        // Now multiply val by the appropriate amount using A's, B's, and C's func
        for (int i = 0; i < countA; i++) {
            val = a.func(val);
        }
        
        for (int i = 0; i < countB; i++) {
            val = b.func(val);
        }
        
        for (int i = 0; i < countC; i++) {
            val = c.func(val);
        }
        
        // Output the number of times each function was called
        cout << "A's func called " << countA << " times" << endl;
        cout << "B's func called " << countB << " times" << endl;
        cout << "C's func called " << countC << " times" << endl;
    }
};
int main()
{
    D d;
    int new_val;
    cin>>new_val;
    d.update_val(new_val);
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
class CAL_VOLUME
{
    public:
    float h,r;
    CAL_VOLUME()
    {
        h=0;
        r=0;
    }
    void getdata()
    {
        cout<<"Enter Radius";
        cin>>r;
        cout<<"Enter height:";
        cin>>h;
    }
    virtual void display()=0;
};
class cone:public CAL_VOLUME
{
    public:
    void display()
    {
        float volume=(1.0/3.0)*M_PI*r*r*h;
        cout<<"Volume of cone:"<<volume<<endl;
    }
    void getdata()
    {
        cout<<"Enter Radius";
        cin>>r;
        cout<<"Enter height:";
        cin>>h;
    }
};
class hemisphere:public CAL_VOLUME
{
    public:
    void display()
    {
        float volume=(2.0/3.0)*M_PI*r*r*r;
        cout<<"Volume of hemisphere:"<<volume<<endl;
    }
    void getdata()
    {
        cout<<"Enter Radius";
        cin>>r;
    }
};
class cylinder:public CAL_VOLUME
{
    public:
    void display()
    {
        float volume=M_PI*r*r*h;
        cout<<"Volume of volume:"<<volume<<endl;
    }
    void getdata()
    {
        cout<<"Enter Radius";
        cin>>r;
        cout<<"Enter height:";
        cin>>h;
    }
};
int main()
{
    cone ob1;
    hemisphere ob2;
    cylinder ob3;
    cout<<"Enter data for cone ";
    ob1.getdata();
    ob1.display();
    cout<<"Enter data for hemisphere ";
    ob2.getdata();
    ob2.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
class A
{

    public:
    int x;
        A()
        {
            cout<<"enter value for x";
            cin>>x;
        }
        friend void operator-(A &ob1);
        friend void operator ++(A &o1);
        friend void operator ++(A &o1,int);
        friend void operator --(A &o1);
        friend void operator --(A &o1,int);
};
void operator-(A &ob1)
{
    ob1.x=-ob1.x;
    cout<<ob1.x<<endl;
}
void operator++(A &ob1)//pre increment
{
    ob1.x=++ob1.x;
    cout<<ob1.x<<endl;
}
void operator++(A &ob1,int)//post increment
{
    ob1.x=ob1.x++;
    cout<<ob1.x<<endl;
}
void operator--(A &ob1)//pre decrement
{
    ob1.x=--ob1.x;
    cout<<ob1.x<<endl;
}
void operator--(A &ob1,int)//post decrement
{
    ob1.x=ob1.x--;
    cout<<ob1.x<<endl;
}
int main()
{
    A ob1;
    ++ob1;
    ob1++;
    --ob1;
    ob1--;
    -ob1;
    return 0;
}