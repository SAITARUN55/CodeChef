#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void transpose(vector<vector<ll> > &C,vector<vector<ll> > &D, ll a)
{
    ll i,j;
    for(i=1;i<=a;i++){
        for(j=1;j<i;j++){
            if(D[i][j]==0){
                D[i][j]=1;
                D[j][i]=1;
                swap(C[i][j],C[j][i]);
            }
            else{
                D[i][j]=0;
                D[j][i]=0;
                swap(C[i][j],C[j][i]);
            }
        }
    }
}
int main() {
	
	
	ll t;
	cin>>t;
	while(t--){
	    ll n,i,j,count=0;
	    cin>>n;
	    vector<vector<ll> > C(n+1, vector<ll> (n+1, 0));
	    vector<vector<ll> > D(n+1, vector<ll> (n+1, 0));
	    
	    for(i=1;i<=n;i++)
	        for(j=1;j<=n;j++)
	            cin>>C[i][j];
	            
	    for(i=1;i<=n;i++){
	        for(j=1;j<=n;j++){
	            if(C[i][j]==(i-1)*n+j)
	                D[i][j]=1;
	            else
	                D[i][j]=0;
	        }
	    }
	    
	    for(i=n;i>0;i--){
	        for(j=n;j>0;j--){
	            if(D[i][j]==0){
	                ll a=i;
	                count++;
	                transpose(C,D,a);
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
