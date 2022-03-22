#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the diamentions of :"<<endl;
    cin>>x>>y;
    cout<<"diamention of page 1 "<<x<<" "<<y<<endl;
    cout<<"diamention of page 2 "<<y<<" "<<x/2<<endl;
    cout<<"diamention of page 3 "<<y/2<<" "<<<<endl;
    cout<<"diamention of page 4 "<<y/4<<" "<<y/8<<endl;
    cout<<"diamention of page 5 "<<y/8<<" "<<y/16<<endl;
    cout<<"diamention of page 6 "<<y/16<<" "<<y/32<<endl;
    cout<<"diamention of page 7 "<<y/32<<" "<<y/64<<endl;
    cout<<"diamention of page 8 "<<y/64<<" "<<y/128<<endl;
   
   return 0;

}