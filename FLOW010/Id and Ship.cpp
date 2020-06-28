#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char a;
	    cin>>a;
	    if(a=='B' || a=='b'){
	        cout<<"BattleShip"<<"\n";
	    }
	    else if(a=='C' || a=='c'){
	        cout<<"Cruiser"<<"\n";
	    }
	    else if(a=='D' || a=='d'){
	        cout<<"Destroyer"<<"\n";
	    }
	    else if(a=='F' || a=='f'){
	        cout<<"Frigate"<<"\n";
	    }
	}
	return 0;
}
