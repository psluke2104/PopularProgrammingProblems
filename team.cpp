#include<iostream>
using namespace std;

int main(){
	
	int t ,count=0,  x , y , z, i;
		cin>>t;
	while(t--){
		cin>>x>>y>>z;

	 i = x+y+z;
	
	if(i>=2)
	count++;
	
	}
	cout<<count;
	return 0;
}

