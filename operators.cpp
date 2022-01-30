#include<iostream>
using namespace std;

int main()
{
  //arithmetic operators : +,-,*,/

  int a = 2/5;
  //ans: 0 because a type int so if divide int/int it gives 0
  //how to resolve(mean get ans in point then do "divide by double variable or do type casting in double")
  cout<<a<<endl;

  int b = 2+5;
  cout<<b<<endl;

  int c = 2-5;
  cout<<c<<endl;

  int d = 2*5;
  cout<<d<<endl;

  //relational operators : =,!=,>,<,>=,<=

  int no1 = 5;
  int no2 = 10;

  bool is_equal = (no1==no2);
  cout<<is_equal<<endl; 

  bool is_not_equal = (no1!=no2);
  cout<<is_not_equal<<endl; 

  bool is_gt = (no1>no2);
  cout<<is_gt<<endl;

  bool is_lt = (no1<no2);
  cout<<is_lt<<endl;

  bool is_gte = (no1>=no2);
  cout<<is_gte<<endl;

  bool is_lte = (no1<=no2);
  cout<<is_lte<<endl;

  //logical operator : &&(for check all condition full filled or not), ||(from check given condition any condition full filled or not) , !(do reverse ex: true converted false)

  int l_no = 0;
  cout<< "!(not) operator : "<<!l_no;

  
}