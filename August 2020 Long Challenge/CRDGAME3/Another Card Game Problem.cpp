#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll tc;
	cin>>tc;
	while(tc--)
   {
   	ll cpc,rpr;
   	cin>>cpc>>rpr;
   	ll resC=ceil((double)cpc/9.0);
   	ll resR=ceil((double)rpr/9.0);
   	if(resR<=resC)
   	cout<<"1 "<<resR<<"\n";
   	else
   	cout<<"0 "<<resC<<"\n";
   }
}
