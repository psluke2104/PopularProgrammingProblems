#include<iostream>
#include<string>
using namespace std;

int main(){
	string a , b = "hello";
	int j = 0, k = 0;
	cin>>a;
	for(int i = 0;i < a.size(); i++){
		if(a[i] == b[j]){
			j++;
			k++;
			
			if(k==5)
			break;
		}
	}
	if(k == 5){
		cout<<"YES";
		
	}
	else{
		cout<<"NO";
	}
	return 0;
}

