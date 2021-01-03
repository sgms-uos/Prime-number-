
#include<iostream>
#include<cmath> // Added for implementation of sqrt()

int main()
{
  system("cls");
 int a,s,d;
 cout<<"Enter number=";
 cin>>a;
 s=1;d=0;
 while(s<=sqrt(a)) // changed to sqrt(a); More efficient according to Sieve Theorem
 {
  s++;
  if(a%s==0)
  {
    d=1;
    break; // Works Same; But Using break is More Professional 
  }
    // Removed else statement; Result will Remain Same
  }
  if(d==0)
  cout<<"\nnumber is prime";
  else
  cout<<"\nNot a prime number";
 system("pause");
}
