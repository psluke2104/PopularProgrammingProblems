#include <bits/stdc++.h>
using  namespace std;



int main() {
	int t = 0;
	cin >> t;
	
	while (t--) {
	
		int n , k;
		cin >> n >> k;
		int arr[n], count = 1 , sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		
		}
			  unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++;
		for (int i = 0; i < n; i++) {
			if (mp[arr[i]] > count) {
			   
				count = mp[arr[i]];
				sum+=mp[arr[i]];
				if(arr[i]!=arr[i+1]&&arr[i+1]==arr[i+2])
				count--;
			}
		}
		if(count*k<=sum+k)
		cout << count*k << "\n";
		else
			cout << sum+k << "\n";
		
	}
	return 0;
}

