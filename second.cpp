#include<iostream>
using namespace std;
int main()
{
    float d;
    cout<<"enter distence in km :";
    cin>>d;
    float m=d*1000;
    float cm=m*100;
    double inch= cm/2.54;
    float f=inch/12;
    cout<<"distence in meter is :"<<m<<" meter"<<endl;
    cout<<"distence in cm is :"<<cm<<" cm"<<endl;
    cout<<"distence in inch is :"<<inch<<" inch"<<endl;
    cout<<"distence in feet is :"<<f<<" feet"<<endl;
    return 0;
}
