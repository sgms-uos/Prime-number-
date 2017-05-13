
#include<iostream>
int main()
{
  system("cls");
 int a,s,d;
 cout<<"Enter number=";
 cin>>a;
 s=1;d=0;
 while(s<=a/2)
 {
  s++;
  if(a%s==0)
  {
    d=1;
    s=a;
  }
  else
   d=0;
  }
  if(d==0)
  cout<<"\nnumber is prime";
  else
  cout<<"\nNot a prime number";
 system("pause");
}