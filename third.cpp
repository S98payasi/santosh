#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"enter the marks of 5 subjects out of 100 "<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<"total marks of all subjects is :"<<(a+b+c+d+e)<<endl;
    cout<<"percentage of the student is :"<<(a+b+c+d+e)/5;
    return 0;
}