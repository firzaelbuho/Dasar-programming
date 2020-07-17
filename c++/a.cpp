#include <bits/stdc++.h> 
using namespace std; 

//Program memaksimalkan voucher ongkir marketplace (knapsack problem)
//By Firza Nanda Rio Aditya
//Teknik Informatika - Universitas Negeri Semarang




//buat vektor
  
void makeCombiUtil(vector<vector<int> >& ans, 
    vector<int>& tmp, int n, int left, int k) 
{ 
    // Push vektor
    if (k == 0) { 
        ans.push_back(tmp); 
        return; 
    } 
  
    // loop   
    for (int i = left; i <= n; ++i) 
    { 
        tmp.push_back(i); 
        makeCombiUtil(ans, tmp, n, i + 1, k - 1); 
  
        // poop vektor       
        tmp.pop_back(); 
    } 
} 


  
// tulis semua kombinasi

vector<vector<int> > makeCombi(int n, int k) 
{ 
    vector<vector<int> > ans; 
    vector<int> tmp; 
    makeCombiUtil(ans, tmp, n, 1, k); 
    return ans; 
} 
  
// main kode
int main() 
{ 

	int min_harga,jml_brg;	
	int harga_min;
	int harga_max=0;
	int n,k;
	float batas_berat;
		

	cout<<"\n PROGRAM MEMAKSIMALKAN VOUCHER ONGKIR MARKETPLACE\n\n by Firza Nanda Rio Aditya / 4611418017\n_______________________________________________ \n"<<endl;

	
	cout<<" Masukkan batas berat maksimal   (kg) = " ;
	cin>>batas_berat;
	cout<<" Masukkan total harga minimum    (rp) = " ;
	cin>>harga_min;	
	cout<<" Masukkan jumlah barang               = " ;
	cin>>n;
	
	
	string nama_brg[n+1];
	int harga_brg[n+1];
	float berat_brg[n+1];
	int temp[n+1];
	int winner[n+1];
	
	//Mmengisi default winner dengan 0
	for (int i=1;i<=n;i++)
		{
			winner[i]=0;
		}
	
	
	cout<<"\n_________________________________"<<endl;
	for( int i=1;i<=n;i++)
	{
	
		cout<<" Masukkan nama  barang ke - "<<i<<"     = " ;
		cin>>nama_brg[i];
		cout<<" Masukkan harga barang ke - "<<i<<"(rp) = " ;
		cin>>harga_brg[i];
		cout<<" Masukkan berat barang ke - "<<i<<"(kg) = " ;
		cin>>berat_brg[i];
		
		cout<<"----------------------------"<<endl;
	}
	
	
	// Enumerasi semua solusi sesuai kombinasi yang ada (nCk)
	
   for (k=1;k<=n;k++)
   {
   
	    vector<vector<int> > ans = makeCombi(n, k); 
	    for (int i = 0; i < ans.size(); i++) { 
	        for (int j = 0; j < ans[i].size(); j++) {            
	            temp[j]=ans.at(i).at(j);           
	        } 
	        int total_harga=0;
			float total_berat=0;
			
			for (int i=0;i<k;i++)
				{
					total_harga+=harga_brg[temp[i]];
					total_berat+=berat_brg[temp[i]];
				}
			
			
			//cek apakah solusi memenuhi syarat
	        if (harga_max<total_harga && batas_berat>=total_berat &&
			harga_min<=total_harga)
	        {
	        	
	        	//jika iya, maka simpan sbg solusi terbaik (winner) sementara
	        	
	        	for(int i=1;i<=k;i++)
	        	{
					winner[i]=temp[i-1];
				}
		     	
			}
	    } 
	}


   
  //OUTPUT nya 
  
  //jika winner[0]=0, maka otomatis tdk ada satupun solusi yg memenuhi syarat
   
   if(winner[1]==0)
   	{
   		cout<<" tidak ada solusi yang ditemukan";
	}
   
   //jika tidak ,maka tulis solusi terbaik (winner) yang tersimpan terakhir
   
   else
   {
   		 cout<<"\n ______________________________\n\nSolusi terbaik adalah dengan membeli = \n"<<endl;
   
	   for(int i=1;i<=n;i++)
		{
			if(winner[i]>0)
			{
			
			cout<<" "<<i<<". "<<nama_brg[winner[i]]<<" | "<<berat_brg[winner[i]]<<" kg |  Rp. "<<harga_brg[winner[i]]<<endl;
			
			}
		}
	}
 
   
    return 0; 
    
} 
