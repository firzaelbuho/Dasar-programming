#include <bits/stdc++.h> 
using namespace std; 
  
void makeCombiUtil(vector<vector<int> >& ans, 
    vector<int>& tmp, int n, int left, int k) 
{ 
    // Pushing this vector to a vector of vector 
    if (k == 0) { 
        ans.push_back(tmp); 
        return; 
    } 
  
    // i iterates from left to n. First time 
    // left will be 1 
    for (int i = left; i <= n; ++i) 
    { 
        tmp.push_back(i); 
        makeCombiUtil(ans, tmp, n, i + 1, k - 1); 
  
        // Popping out last inserted element 
        // from the vector 
        tmp.pop_back(); 
    } 
} 
  
// Prints all combinations of size k of numbers 
// from 1 to n. 
vector<vector<int> > makeCombi(int n, int k) 
{ 
    vector<vector<int> > ans; 
    vector<int> tmp; 
    makeCombiUtil(ans, tmp, n, 1, k); 
    return ans; 
} 
  
// Driver code 
int main() 
{ 

int min_harga,jml_brg;
	string nama_brg[100];
	int harga_brg[100],solusi[1000][3],solusi_filtered[1000],x[1000];
	float batas_berat,berat_brg[100];
	int harga_min;
	int harga_max=0;
	int n;
	
	int temp[5];
	int winner[5]={0,0,0,0,0};
	
	cout<<"SELAMAT DATANG \n\n_________________________________ \n"<<endl;
	
	cout<<"Masukkan batas berat maksimal(kg) = " ;
	cin>>batas_berat;
	cout<<"Masukkan total harga minimum (rp)) = " ;
	cin>>harga_min;
	
	cout<<"Masukkan jumlah barang = " ;
	cin>>n;
	
	
	cout<<"\n_________________________________"<<endl;
	for( int i=1;i<=n;i++)
	{
	
		cout<<"Masukkan nama barang ke - "<<i<<" = " ;
		cin>>nama_brg[i];
		cout<<"Masukkan harga barang ke - "<<i<<" = " ;
		cin>>harga_brg[i];
		cout<<"Masukkan berat barang ke - "<<i<<" (kg) = " ;
		cin>>berat_brg[i];
		
		cout<<"----------------------------"<<endl;
	}
	
	
	 // Kombinasi 1
   
    vector<vector<int> > ans = makeCombi(n, 1); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
           // cout << ans.at(i).at(j) << " "; 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]] && batas_berat>=berat_brg[temp[0]] &&
		harga_min<=harga_brg[temp[0]])
        {
        	winner[1]=temp[0];
        	winner[2]=0;
        	winner[3]=0;
        	winner[4]=0;
        	winner[5]=0;
		}
    } 

     // Kombinasi 2
    
    ans = makeCombi(n, 2); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
           // cout << ans.at(i).at(j) << " "; 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]])
        {
        	winner[1]=temp[0];
        	winner[2]=temp[1];
        	winner[3]=0;
        	winner[4]=0;
        	winner[5]=0;
		}
    } 
	
	// Kombinasi 3
   
    ans = makeCombi(n, 3); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
           // cout << ans.at(i).at(j) << " "; 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]])
        {
        	winner[1]=temp[0];
        	winner[2]=temp[1];
        	winner[3]=temp[2];
        	winner[4]=0;
        	winner[5]=0;
		}
    } 
   
   
   	// Kombinasi 4
   
    ans = makeCombi(n, 4); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
           // cout << ans.at(i).at(j) << " "; 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]] && batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]])
        {
        	winner[1]=temp[0];
        	winner[2]=temp[1];
        	winner[3]=temp[2];
        	winner[4]=temp[3];
        	winner[5]=0;
		}
    } 
    
    	// Kombinasi 5
   
    ans = makeCombi(n, 5); 
    for (int i = 0; i < ans.size(); i++) { 
        for (int j = 0; j < ans[i].size(); j++) { 
           // cout << ans.at(i).at(j) << " "; 
            temp[j]=ans.at(i).at(j);
            
        } 
        if (harga_max<harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]] &&
		batas_berat>=berat_brg[temp[0]]+berat_brg[temp[1]]+berat_brg[temp[2]]+berat_brg[temp[3]]+berat_brg[temp[4]] &&
		harga_min<=harga_brg[temp[0]]+harga_brg[temp[1]]+harga_brg[temp[2]]+harga_brg[temp[3]]+harga_brg[temp[4]] )
        {
        	winner[1]=temp[0];
        	winner[2]=temp[1];
        	winner[3]=temp[2];
        	winner[4]=temp[3];
        	winner[5]=temp[4];
		}
    } 
   
   
   
   cout<<"solusi terbaik adalah dengan membeli = \n"<<endl;
   
   if(winner[1]==0)
   	{
   		cout<<"tidak ada solusi";
	}
   
   else
   {
   
	   for(int i=1;i<6;i++)
		{
			if(winner[i]>0)
			{
			
			cout<<i<<". "<<nama_brg[winner[i]]<<" | "<<berat_brg[winner[i]]<<" kg | "<<harga_brg[winner[i]]<<endl;
			
			}
		}
	}
 
   
    return 0; 
    
} 
