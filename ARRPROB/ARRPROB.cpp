#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int s=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s += arr[i];
	    }
	    for(int i=0;i<n;i++)
	        cout<< s-arr[i]<<" ";
	        cout<<endl;
	}
	return 0;
}
