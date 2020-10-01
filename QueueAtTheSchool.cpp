#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n , t , i , j;
	string str;
	char temp;
	cin>>n>>t;
	cin>>str;
	
	
	
	
	for(int i = 0; i<t;++i){
		for(int j =0; j<n-1;++j){
			if(str[j]=='B' && str[j+1]=='G'){
					temp = str[j];
			str[j] = str[j+1];
			str[j+1] = temp;
			j++;
			}
		}
		}
	
	cout<<str;
	
	
	
	
	return 0;
}

