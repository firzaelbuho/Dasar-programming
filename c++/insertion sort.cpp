#include <iostream>
#include <cmath>
using namespace std;
int main()
{

float a,b,c;
float x1,x2,D;



//input koefisien a,b,c
cout<<"Masukkan nilai a : ";
cin>>a;
cout<<"Masukkan nilai b : ";
cin>>b;
cout<<"Masukkan nilai c : ";
cin>>c;


//menghoitung determinan

D=(b*b)-(4*a*c);

//cek akar

if(D<0)
	{
		cout<<"akar-akarnya imajiner";
	}
//hitung akar
else
	{
		x1= (-b+(sqrt(D)))/2*a;
		x2= (-b-(sqrt(D)))/2*a;
//output		
		cout<<"X1 = "<<x1<<endl;
		cout<<"X2 = "<<x2<<endl;
		
		
	}





return 0;
}
