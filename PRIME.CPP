
#include<iostream>
int main()
{
  system("cls");
 int num,s,d;
 cout<<"Enter number=";
 cin>>num;
 s=1;d=0;
 while(s<=num/2)
 {
  s++;
  if(num%s==0)
  {
    d=1;
    s=num;
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
