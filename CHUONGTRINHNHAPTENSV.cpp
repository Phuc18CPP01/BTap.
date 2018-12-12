#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{ float m,a,b,c;
 string TSV;
 cout<<"Nhap ten sv"<<endl;
 cin>>TSV;
 cout<<"Nhap diem cac mon Toan ,Ly , Hoa lan luot:\n";
 cin>>a>>b>>c;
 
 if(a>10||a<0|| b>10||c>10||b<0||c<0){cout<<"Nhap diem khong dung vui long nhap lai diem";}else{
 
 m=(float)(a+b+c)/3;
 cout<<" Diem trung binh 3 mon:"<<m<<endl;
 if(m>=8){ cout<<TSV<<":"<<"Xep loai xuat sac";}else{
 	if (m>=7 && m<8){ cout<<TSV<<":"<<" xep loai gioi";}else{
 		if (m>=6 && m<7){ cout<<TSV<<":"<<"Loai kha";}else
 		{ if (m>=5 && m<6){ cout<<TSV<<":"<<"Loai Tb";}else{cout<<TSV<<":"<<"Xep Loai Yeu";}
	 }}}}}



