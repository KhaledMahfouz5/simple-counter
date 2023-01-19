#include<iostream>
using namespace std;
int main() {
char a;int i=0,b=0;
cout<<" Welcome To My Counter \n Enter + to Add One \n And - To Substract";
cout<<" \n Enter * To Reset Counter And / To Finish\n";
cout<<"\n Enter The Number Which You Want To Start From It \n";
cin>>b;
while(i>-1)
{
cin>>a;
if(a=='+')
{cout<<++b<<endl;}
else if(a=='-')
{if(b!=0)
{cout<<--b<<endl;}
else
{cout<<"Zero!!"<<endl;}}
else if(a=='/')
{cout<<b<<endl;return 0;}
else if(a=='*')
{b=0;cout<<b<<endl;}
if ((b%50==0)&&(b>0))
{cout<<"Nice ... Continue"<<endl;}
}return 0;
}
