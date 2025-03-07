#include <iostream>
#include<string>
using namespace std;
int main()
{
    int vowel= 0, upper= 0, lower= 0, digit= 0, ch= 0;
    int freq[256]={0};
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i=0;str[i]!='\0';i++)
    {
        freq[str[i]]++;
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z' ))
        {
            if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowel++;
            }
            if (str[i]>='a' && str[i]<='z')
            {
                lower++;
            }
            else
            {
                upper++;
            }
            c++;
        }
        
        else if (str[i]>='0' && str[i]<='9')
        {
            digit++;
            c++;
        }
        
    }
    cout << "Frequency of each character:" << "\n";
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout<< (char)i << ": " << freq[i] << "\n";
        }
    }
    cout<<"Total number of "<< "\n";
    cout<<"Characters: " << ch << "\n";
    cout<<"Vowels: " << vowel << "\n";
    cout<<"Uppercase letters: "<< upper<< "\n";
    cout<<"Lowercase letters: "<< lower<< "\n";
    cout<<"Digits: "<<digit<< "\n";   
    return 0;
}


