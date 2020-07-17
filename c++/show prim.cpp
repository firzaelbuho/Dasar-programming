#include <iostream>
using namespace std;
int main()
{
   
int n;


//input batas bilangan
cout<<"Tampilkan Bilangan Prima antara 1 hingga : ";
cin>>n;

cout<<"Bilangan Prima antara 1 hingga "<<n<<" adalah : 2 , 3 , 5 , 7 , ";

//proses pengecekan dan output
for(int i=3;i<=n;i++)   
    {
   
    if(i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0)
        {
            cout<<" "<<i<<" ,";
        }   
    }



return 0;
}
