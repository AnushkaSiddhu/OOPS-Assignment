/*Write a C++ program to find those numbers which are divisible by
8 and multiple of 5, between 1000 and 2000 (both included)*/
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
