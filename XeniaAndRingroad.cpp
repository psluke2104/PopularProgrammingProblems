#include<iostream>
using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	int arr[m+1];
	arr[0] = 1;
	for(int i=1 ; i<m+1 ; i++){
		cin>>arr[i];
		
	}
	int count= 0;
	for(int j=0;j<m;j++){
		if(arr[j]<arr[j+1]){
			count += arr[j+1]-arr[j];
		}
		else if(arr[j]>arr[j+1]){
			count += n - arr[j]+arr[j+1];
		}
		else if(arr[j]==arr[j+1])
		continue;
	}
	cout<<count;
	return 0;
}

