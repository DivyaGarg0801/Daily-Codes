#include<iostream>
#include<string>
using namespace std;
class palindrome
{
    public:
        string str,substrpal;
        int maxlength=0;
        void pallin(string str)
        {
            for(int i=0;i<str.length();i++)
            {
                for(int j=i;j<str.length();j++)
                {
                    string substring=str.substr(i,j-i+1);
                    string rev;
                    for(int k=substring.length()-1;k>=0;k--)
                    {             
                        rev += substring[k];
                    } 
                    if (substring.compare(rev)==0)
                    {
                        if (j-i+1>maxlength)
                        {
                            maxlength=j-i+1;
                            substrpal=substring;
                        }
                    }
                }
            }
            if(maxlength>1)
            {
                cout<<"longest palindrome is : "<<substrpal;
                cout<<"\nLength is : "<<maxlength;
            }
            else
                cout<<"no palindrome found "<<endl;
        }
};
int main()
{
    palindrome ob;
    cout<<"Enter a string : ";
    getline(cin,ob.str);
    ob.pallin(ob.str);
    return 0;
}