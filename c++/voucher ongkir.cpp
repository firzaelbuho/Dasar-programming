#include <bits/stdc++.h> 
using namespace std; 

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
	string nama_brg[11];
	int harga_brg[11];
	float batas_berat,berat_brg[11];
	int harga_min;
	int harga_max=0;
	int n,k;
	
	int temp[11];
	int winner[11]={0,0,0,0,0,0,0,0,0,0,0};
	
	cout<<"SELAMAT DATANG \n\n_________________________________ \n"<<endl;
	
	cout<<"Masukkan batas berat maksimal   (kg) = " ;
	cin>>batas_berat;
	cout<<"Masukkan total harga minimum    (rp) = " ;
	cin>>harga_min;	
	cout<<"Masukkan jumlah barang   (maks - 10) = " ;
	cin>>n;
	
	
	cout<<"\n_________________________________"<<endl;
	for( int i=1;i<=n;i++)
	{
	
		cout<<"Masukkan nama  barang ke - "<<i<<"     = " ;
		cin>>nama_brg[i];
		cout<<"Masukkan harga barang ke - "<<i<<"(rp) = " ;
		cin>>harga_brg[i];
		cout<<"Masukkan berat barang ke - "<<i<<"(kg) = " ;
		cin>>berat_brg[i];
		
		cout<<"----------------------------"<<endl;
	}
	
	
	 // Kombinasi 1 angka
   k=1;
    vector<vector<int> > ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) {            
            temp[j]=ans.at(i).at(j);           
        } 
        if (harga_max<harga_brg[temp[0]] && batas_berat>=berat_brg[temp[0]] &&
		harga_min<=harga_brg[temp[0]])
        {
        	winner[1]=temp[0];        	
		}
    } 

     // Kombinasi 2 angka
     
     k=2;
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]])
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}      
		}
    } 
	
	// Kombinasi 3 angka
	
	k=3;
   
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);     
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]])
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
        
		}
    } 
   
   
   	// Kombinasi 4 angka
   	
   k=4;
   
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]])
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
    	// Kombinasi 5 angka
    	
    k=5;
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
    // Kombinasi 6 angka
    	
    k=6;
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]]+berat_brg[temp[5]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
    // Kombinasi 7 angka
    	
    k=7;
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]]+berat_brg[temp[5]]+berat_brg[temp[6]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
    
    // Kombinasi 8 angka
    	
    k=8;   
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]]+berat_brg[temp[5]]+berat_brg[temp[6]]+berat_brg[temp[7]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
    
    //kombinasi 9 angka
    
    k=9;
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]]+harga_brg[temp[8]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]]+berat_brg[temp[5]]+berat_brg[temp[6]]+berat_brg[temp[7]]+berat_brg[temp[8]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]]+harga_brg[temp[8]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
        
    //kombinasi 10 angka
    
    k=10;   
    ans = makeCombi(n, k); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
            temp[j]=ans.at(i).at(j);          
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]]+harga_brg[temp[8]]+harga_brg[temp[9]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]]+berat_brg[temp[5]]+berat_brg[temp[6]]+berat_brg[temp[7]]+berat_brg[temp[8]]+berat_brg[temp[9]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]]+harga_brg[temp[5]]+harga_brg[temp[6]]+harga_brg[temp[7]]+harga_brg[temp[8]]+harga_brg[temp[9]] )
        {
        	for(int i=1;i<=k;i++)
        	{
				winner[i]=temp[i-1];
			}
		}
    } 
    
   
   
  //OUTPUT nya 
  
   
   if(winner[1]==0)
   	{
   		cout<<"tidak ada solusi yang ditemukan";
	}
   
   else
   {
   		 cout<<"\n_________________________\n\nsolusi terbaik adalah dengan membeli = \n"<<endl;
   
	   for(int i=1;i<=10;i++)
		{
			if(winner[i]>0)
			{
			
			cout<<i<<". "<<nama_brg[winner[i]]<<" | "<<berat_brg[winner[i]]<<" kg |  Rp. "<<harga_brg[winner[i]]<<endl;
			
			}
		}
	}
 
   
    return 0; 
    
} 
