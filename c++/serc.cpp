#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
    string z[25]= {"012","002","014","001"};
    string nomor;
	int index[25],j;
    j=0;
    for (int i=0;i<25;i++)
    {
        cout<<z[i]<<",";
    }
    cout<<endl;
    cout<<"masukkan nomor surat yang dicari : ";cin>>nomor;
    
    for (int i=0;i<25;i++)
    	{
    		if (z[i]==nomor)
			{
				cout<"haha";
			}
		}
    
 cout<<"selesai";   
 return 0;   
      
}
