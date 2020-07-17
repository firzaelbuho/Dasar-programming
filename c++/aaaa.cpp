#include <iostream>
#include <conio.h>
using namespace std;

int main() {
int j;
int data[6]={5, 2, 4, 6, 1, 3};
cout<<"Sebelum Sorting : ";
for(int i=0; i<6; i++) {
     cout<<data[i]<<",  ";
     cout<<endl <<endl;
      }
for(int i=1; i<6; i++){
     j=i-1;
     int v=data[i];
     while(v<data[j] && j>=0)
	 {
     	
        data[j+1]=data[j];
		 j--;
     }
     data[j+1]=v;
    }
cout<<"Setelah disorting: ";
for(int i=0; i<6; i++)
cout<<data[i] <<",  ";
getch();
}

