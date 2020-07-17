//Insertion Sort

#include <iostream>
using namespace std;
int main()
{
	
int n;
bool prima=1;

//input bilangan
cout<<"masukkan bilangan"<<endl;
cin>>n;

//proses pengecekan
for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prima=0;
		}
	}


//output hasil

if(prima==1)
	{
		cout<<"\nBilangan Prima";
	}
else
	{
		cout<<"\nBukan Bilangan Prima";
	}
}
