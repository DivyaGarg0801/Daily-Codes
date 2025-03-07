#include <iostream>
#include <string>
using namespace std;
class teacher
{
public:
    teacher()
    {
        cout << "constructor envoked";
    }
    string name;
    string dept;
    string subject;
    double salary;
    void changedept(string newDept)
    {
        dept = newDept;
    }
    
};
int main()
{
    teacher t1,t2;
    return 0;
}