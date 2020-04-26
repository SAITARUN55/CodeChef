#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,lastdigit,firstdigit,sum=0;
	    cin>>n;
	    lastdigit=n%10;
	    firstdigit=n;
	    while(n>=10){
	        n=n/10;
	    }
	    firstdigit=n;
	    sum=firstdigit+lastdigit;
	    cout<<sum<<"\n";
	}
	return 0;
}
