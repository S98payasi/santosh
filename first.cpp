#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"enter the basic salary  :";
    cin>>a;
    float al=a*0.4;
    float rant=a*0.2;
  float gs=al+rant+a;
    
    cout<<"total gross salary is :"<<gs;
    return 0;
}