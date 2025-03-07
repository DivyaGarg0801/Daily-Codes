/*#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
        void set(int x)
        {
            a=x;
        }
    friend void fclass(A,B);
};
class B
{
    int b;
    public:
        void set(int y)
        {
            b=y;
        }
    friend void fclass(A,B);
};
void fclass(A a,B b)
{
    if (a.a>b.b)
    {
        cout<<a.a;
    }
    else
    {
        cout<<b.b;
    }
}
int main()
{
    A a,c;
    a.set(10);
    c.set(30);
    B b,d;
    b.set(20);
    d.set(40);
    fclass(a,d);
    return 0;
}


/*operator overloading
#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
        A()
        {
            cout<<"enter value for x";
            cin>>x;
            cin>>y;
        }
        friend void operator-(A &ob1);
};
void operator-(A &ob1)
{
    ob1.x=-ob1.x;
    cout<<ob1.x;
    cout<<ob1.y;
}
int main()
{
    A ob1;
    -ob1;
    return 0;
}


//binary addition
#include<iostream>
using namespace std;
class A
{

    public:
        int x,y;
        A()
        {
            cout<<"enter value of x";
            cin>>x;
            cout<<"enter value of y";
            cin>>y;
        }

        A(int a,int b)
        {
            x=a;
            y=b;
        }
        friend A operator++(A &o1,int) ;


};
A operator++(A &o,int) {
        A temp=o;
        o.x++; // Increment x
        o.y++; // Increment y
        return temp; // Return the current object
    }
A operator++( A &o1)
        {

            return A(++o1.x,++o1.y);
        }

int main()
{
    A ob1,ob2;
    ob2++;
    cout<<"sum is "<<ob1.x<<"&"<<ob1.y;
    cout<<"sum is "<<ob2.x<<"&"<<ob2.y;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Student
{
    string name;
    int roll;

public:
    void getinfo()
    {
        cout << "enter name";
        cin >> name;
        cout << "enter rollno";
        cin >> roll;
    }
    void showinfo()
    {
        cout << "name is " << name << endl;
        cout << "roll no is" << roll << endl;
    }
};
class Marks : private Student
{
protected:
    int m[5];
    void getmarks()
    {
        getinfo();
        showinfo();
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }
};
class Result : protected Marks
{
public:
    int sports, total=0/;
    void getTotal()
    {
        cout << "enter sports marks";
        cin >> sports;
        total += sports;
        getmarks();
        for (int i = 0; i < 5; i++)
        {
            total += m[i];
        }
    }
    void showAll()
    {
        cout << "sports marks are" << sports << endl;
        cout << "total marks are" << total << endl;
    }
};
int main()
{
    Result ob;
    ob.getTotal();
    ob.showAll();
    return 0;
}


#include <iostream>
using namespace std;
class Academic
{
    string name;
    int roll;

public:
    void getinfo()
    {
        cout << "enter name";
        cin >> name;
        cout << "enter roll number";
        cin >> roll;
    }
    void showinfo()
    {
        cout << "name is " << name << endl;
        cout << "roll no is " << roll << endl;
    }
};
class ExtraCurricular
{
public:
    int sportsmarks, gpmarks, m[3];
    void getMarks()
    {
        cout << "enter sports marks";
        cin >> sportsmarks;
        cout << "enter gpmarks";
        cin >> gpmarks;
        cout << "enter marks in 3 subjects";
        for (int i = 0; i < 3; i++)
        {
            cin >> m[i];
        }
    }
};
class Result : private Academic, protected ExtraCurricular
{
    int total = 0;
public:
    void getTotal()
    {
        getinfo();
        showinfo();
        getMarks();
        total = total + sportsmarks + gpmarks + m[0] + m[1] + m[2];
        cout << total;
    }
};
int main()
{
    Result ob;
    ob.getTotal();
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter string";
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&& str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {

        }
        else
        {
            str.replace(i,1,"");
            i--;
        }
    }
    cout<<str;
    return 0;
}


#include<iostream>
using namespace std;
class A
{
    int x,y;
    public :
    void getdata()
    {
        cout<<"enter x and y";
        cin>>x;
        cin>>y;
    }
    friend A operator+(A&o1,A&o2);
    void disp()
    {
        cout<<x<<"   "<<y;
    }
};
friend A operator+(A&o1,A &o2)
    {
        A temp;
        temp.x=o1.x+o2.x;
        temp.y=o1.y+o2.y;
        return temp;
    }
int main()
{
    A ob1,ob2,ob3;
    ob1.getdata();
    ob2.getdata();
    ob3=ob1+ob2;
    ob3.disp();
    return 0;
}

*/
/*
#include <iostream>
using namespace std;

class Example {
public:
    int x;

    // Constructor to initialize x
    Example(int val) : x(val) {
        cout << "Constructor called, x = " << x << endl;
    }

    // Destructor to indicate when object is destroyed
    ~Example() {
        cout << "Destructor called for x = " << x << endl;
    }

    // A simple member function to display the value of x
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Creating a dynamic object using the 'new' keyword
    Example* obj = new Example(10); // Dynamically allocated object

    // Accessing object methods using pointer
    obj->display();

    // Deleting the dynamic object using the 'delete' keyword
    delete obj; // Freeing memory
    obj = nullptr; // Setting pointer to nullptr to avoid dangling pointer

    return 0;
}

*/

#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    A(int val)
    {
        x=val;
        cout<<"constructor invoked  "<<x;
    }
    void display()
    {
        cout<<"value of x is "<<x;
    }
    ~A()
    {
        cout<<"destructor invoked "<<x;
    }
};
int main()
{
    A * ob;
    ob=new A(10);
    ob->display();
    delete ob;
    ob=nullptr;
    return 0;
}