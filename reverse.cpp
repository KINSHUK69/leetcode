#include<iostream>
using namespace std;
int main()
{
 int num,rev,n,div;
 cout<<"enter a number :";
 cin>>num;
 while(num>=0)
 {
  div=num%10;
  rev+=div*10;
  num=num/10;
 }
 cout<<"reverse of the number="<<rev;
 return 0;
}
