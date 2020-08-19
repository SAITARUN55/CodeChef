#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int hea,pow;
	    cin>>hea>>pow;
	    while(hea!=0 && pow!=0){
	        if(hea>pow)
	            hea-=pow;
	        else
	            hea=0;
	            pow/=2;
	    }
	        if(hea)
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	}
	return 0;
}
