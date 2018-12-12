#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{ int a;
cout<<"Nhap vao nam :";
cin>>a;
if(a%4==0&&a%100!=0){cout<<"Nam:"<<a<<" la nam nhuan";}
else{ if (a%100==0 && a%400==0) { cout<<"Nam:"<<a<<" la nam nhuan";} 
else{ cout<<"Nam:"<<a<<" khong nhuan";}
}}
