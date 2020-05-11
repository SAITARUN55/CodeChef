#include<iostream>
#include<algorithm>
using namespace std;
bool comp1(int a,int b){
	return a<b;
}
bool comp2(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		int a[t],result;
		for(int j=0;j<t;j++){
			cin>>a[j];
		}
		int values[t][2];
		for(int x=0;x<t;x++){
			if(x == t-1){
				values[x][0] = a[x];
				values[x][1] = 0;
			}
			else {
				values[x][0] = a[x];
				values[x][1] = a[x+1]-a[x];
			}
		}
		if(t == 1){
			cout<<'1'<<" 1"<<"\n";
		}
		else{
			int k=0,maxcount[1000],count = 0;
			for(int x1=0;x1<t;x1++){
				count++;
				if(values[x1][1]>=3){
					maxcount[k] = count;
					count = 0;
					k++;
				}
				else{
					
					if(x1 == t-1){
						maxcount[k] = count;
						k++;
					}
				}
			}
			
			int min = 100000;
				for(int j1 = 0;j1<k;j1++){
					if(maxcount[j1]<min){
						min = maxcount[j1];
					}
				}
				int max = 0;
				for(int j1 = 0;j1<k;j1++){
					if(maxcount[j1]>max){
						max = maxcount[j1];
					}
				}
				cout<<min<<" "<<max<<"\n";
		}
	}
}
