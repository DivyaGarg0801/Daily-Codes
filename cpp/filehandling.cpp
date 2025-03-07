#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("input.txt");
    cout<<"enter data";
    string a;
    getline(cin,a);
    fout<<a;
    fout.close();
    
    ifstream fin;
    fin.open("input.txt");
    string line;
    getline(fin,line);
    fin.close();

    reverse(line.begin(),line.end());

    fstream fout_out;
    fout_out.open("output.txt");
    fout_out<<line;
 /*   string b;
    getline(cin,b);
    cout<<b;
  */  
 cout<<line;
 fout_out.close();

    return 0;

}