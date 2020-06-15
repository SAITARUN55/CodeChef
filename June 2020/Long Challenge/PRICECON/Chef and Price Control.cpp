#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,sum=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(k<a[i]){
	            sum=a[i]-k+sum;
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
