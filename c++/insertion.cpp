#include <iostream>
using namespace std;

int data[10], data2[10];
int n;

void insertion_sort()
{
 int temp, i, j;
 for(i=1;i<=n;i++)
 {
  temp = data[i];
  j = i -1;
	  while(data[j]>temp && j>=0)
	  {
	   data[j+1] = data[j];
	   j--;
	  }
  
  data[j+1] = temp;
 }
}

main()
{
 cout << "Masukkan jumlah data: ";
 cin >> n;
 cout << endl;
 for(int i=1; i<=n; i++)
 {
  cout << "Masukkan data ke-" << i << ": ";
  cin >> data[i];
  data2[i] = data[i];
 }

 insertion_sort();
 
 cout << "\nData Setelah diurutkan" << endl;
 cout << "------------------------" << endl;
 for(int i=1; i<=n; i++)
 {
  cout << data[i] << " ";
 }
 cout << endl;
 system("pause");
}
