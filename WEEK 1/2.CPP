/*Write a C++ program that will display the calculator menu. The
program will prompt the user to choose the operation choice (from 1 to
5).*/
#include<iostream>
using namespace std;
int main()
{
    int choice,num1,num2,ans;
    cout<<"\nMENU 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus\n";
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    cout<<"Enter the two number:"<<endl;
    cin>>num1>>num2;
    switch(choice)
    {
        case 1:
        ans=num1+num2;
        break;

        case 2:
        ans=num1-num2;
        break;

        case 3:
        ans=num1*num2;
        break;

        case 4:
        ans=num1/num2;
        break;

        case 5:
        ans=num1%num2;
        break;
    }
    cout<<"Result is:"<<ans<<endl;
    return 0;
}