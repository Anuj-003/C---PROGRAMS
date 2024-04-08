// C++ program to check whether the no is prime or not

#include<iostream>
using namespace std;

int main()
{
    int num,flag=0,c=2;
    cout<<"Enter the number : ";
    cin>>num;
    while(c<num/2)
    {
        if(num%c == 0)
        {
            flag=1;
            break;
        }
        c++;
    }
    if(!flag)
        cout<<num<<" Number is prime\n";
    else
        cout<<num<<" Number is not prime\n";
    return 0;
}
