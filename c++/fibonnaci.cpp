#include <iostream>

using namespace std;

//Fungsi fibonacci

int fibo(int i)
	{
		if(i<=2)
		{
			return 1;
		}
		

		
		else if (i>2)
		{
		return fibo(i-1)+fibo(i-2);
		}
		
	}




int main() 
{
	
//deklarasi

int i;

//Input
cout<<"Masukkan deret ke : "; cin>>i;

//output
cout<<"Deret ke  "<<i<<" adalah : "<< fibo(i) ;

return 0;



}
