// Demo of scope resolution operator :: ver1

#include<iostream>
using namespace std;
int num = 100;

int main()
{
    int num = 30;
    cout<<"Local num = "<<num<<"\t";
    cout<<"Global num = "<<::num<<endl;
    {
        int num =40;
        cout<<"In block1\n";
        cout<<"Local num = "<<num<<"\t";
        cout<<"Global num = "<<::num<<endl;
    }
    {
    int num =50;
    cout<<"In block2\n";
    cout<<"Local num = "<<num<<"\t";
    cout<<"Global num = "<<::num<<endl;
    }
}
