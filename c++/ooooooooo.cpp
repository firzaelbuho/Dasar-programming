#include <iostream>
using namespace std;

int main()
{

int i,j=0,k=0;
string x;
string A[25]={"001","002","003","004","005"};
string B[25]={"005","004","003","002","008"};

cout<<"input x =  "; cin>>x;

for(i=0;i<25;i++)
	{
		if(x==A[i])
			{
				j=i+1;
			}
	}

for(i=0;i<25;i++)
	{
		if(x==B[i])
			{
				k=i+1;
			}
	}


if(j>0)
	{
		cout<<"nomor ditemukan di kategori surat A pada indeks ke - "<<j<<endl;
	}
if(k>0)
	{
		cout<<"nomor ditemukan di kategori surat B pada indeks ke - "<<k<<endl;
	}

if(j==0&&k==0)
	{
		cout<<"tdk ditemukan";
	}

return 0;

}
