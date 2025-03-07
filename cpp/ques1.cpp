#include<iostream>
using namespace std;
int main()
{
    char productType;
    float purchaseAmount, discount, netPayment;
    int age;
    cout << "Enter  product type F for Food type item, C for Cloth type item: ";
    cin >> productType;
    if (productType == 'F' || productType == 'f')
    {
        cout << "Enter purchase amount: ";
        cin >> purchaseAmount;

        if (purchaseAmount >= 5000)
        {
            discount = 0.50 * purchaseAmount;
        }
        else if (purchaseAmount >= 2000)
        {
            discount = 0.20 * purchaseAmount;
        }
        else if (purchaseAmount >= 500)
        {
            discount = 0.10 * purchaseAmount;
        }
        else
        {
            discount=0.0;
        }

    }
    else if (productType == 'C' || productType == 'c')
    {
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter purchase amount: ";
        cin >> purchaseAmount;

        if (age >= 40)
        {
            if (purchaseAmount >= 5000)
            {
                discount = 0.50 * purchaseAmount;
            }
            else if (purchaseAmount >= 2000)
            {
                discount = 0.20 * purchaseAmount;
            }
            else if (purchaseAmount >= 500)
            {
                discount = 0.10 * purchaseAmount;
            }
            else
            {
                discount=0.0;
            }
        }
        else if (age >= 20)
        {
            if (purchaseAmount >= 5000)
            {
                discount = 0.60 * purchaseAmount;
            }
            else if (purchaseAmount >= 2000)
            {
                discount = 0.30 * purchaseAmount;
            }
            else if (purchaseAmount >= 500)
            {
                discount = 0.15 * purchaseAmount;
            }
            else
            {
                discount=0.0;
            }
        }
        else
        {
            if (purchaseAmount >= 2500)
            {
                discount = 0.50 * purchaseAmount;
            }
            else
            {
                discount=0.0;
            }
        }
    }
    netPayment = purchaseAmount - discount;
    cout << "Product Type: " << productType << "\n";
    cout << "Purchase Amount: " << purchaseAmount << "\n";
    cout << "Discount: " << discount << "\n";
    cout << "Net Payment: " << netPayment ;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    string input;
    int vowelCount = 0, upperCaseCount = 0, lowerCaseCount = 0, digitCount = 0, charCount = 0;
    int occurrence[256] = {0};
    cout << "Enter a string: ";
    getline(cin, input);
    for (int i=0;input[i]!='\0';i++)
    {
        int ch=input[i];
        occurrence[ch]++;
        if (input[i]>='a' && input[i]<='z')
        {
            lowerCaseCount++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                    vowelCount++;
            }
        }
        else if(input[i]>='A' && input[i]<='Z')
        {
                upperCaseCount++;
                if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                {
                    vowelCount++;
                }
        }
        else if (input[i]>='0' && input[i]<='9')
        {
            digitCount++;
        }
        else
        {
            charCount++;
        }
    }
    cout << "Occurrences of each character:" << endl;
    for (int i = 0; i < 256; i++)
    {
        if (occurrence[i] > 0)
        {
            cout << (char)i << ": " << occurrence[i] << endl;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of uppercase letters: " << upperCaseCount << endl;
    cout << "Number of lowercase letters: " << lowerCaseCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Total number of characters: " << charCount << endl;
    return 0;
}*/

