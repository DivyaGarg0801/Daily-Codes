#include <iostream>
using namespace std;
int main()
{
    int num, sum, prod, result;
    cout << "Enter a two-digit number: ";
    cin >> num;
    if(num>9 && num<100)
    {
        int first= num / 10;
        int second= num % 10;
        sum = first + second;
        prod = first * second;
        result = sum + prod;
        if (result == num)
        {
            cout << num << " is a Special 2-digit number" ;
        }
        else
        {
            cout << num << " is Not a Special 2-digit number";
        }
    }
    else
    {
        cout << "Not a two-digit number";
    }
    return 0;
}
