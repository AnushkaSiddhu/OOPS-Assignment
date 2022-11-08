#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"The numbers that are divisible by 8 and 5 are:"<<endl;
    for(num=1000;num<=2000;num++)
    {
        if(num%5==0 && num%8==0)
        {
            cout<<num<<" ";
        }
    }
    return 0;

}