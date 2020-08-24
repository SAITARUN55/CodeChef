#include <iostream>
using namespace std;
void subsequence(int N){
    int temp[N];
    temp[0]=1;
    int l=1;
    while(l<N){
        temp[l] = (temp[l-1]*2)%1000000007;
        l++;
    }
    for(int ki=N-1;ki>=0;ki--){
        cout<<temp[ki]<<" ";
    }
    return;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int ni;
	    cin>>ni;
	    int a[ni];
	    int i=0;
	    while(i<ni){
	        cin>>a[i];
	        i++;
	    }
	    subsequence(ni);
	    cout<<"\n";
	}
	return 0;
}
