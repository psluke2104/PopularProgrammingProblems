#include <bits/stdc++.h> 
#include  <map>
using namespace std;

	

int main(){
	string str , pat ;
	
	cin>>str;
	cin>>pat;
	map <string , int>patMap;
	map <string , int>strMap;
	
	for (int i = 0; str[i]; i++) { 
   
        if (strMap.find(str[i]) == strMap.end()) { 
            strMap.insert(make_pair(str[i], 1)); 
        }}
        for (int i = 0; pat[i]; i++) { 
   
        if (patMap.find(pat[i]) == patMap.end()) { 
            patMap.insert(make_pair(pat[i], 1)); 
        }}
	
	for(auto p:patMap){
		strMap[p.first] -= p.second;
	}
	string res;
for(auto x:strMap){
   int x=x.second;
while(x--) res.pb(x.first);
}
	
 
    
		for(int i = 0 ;i<res.length(); i++){
			
			
			if(res.at(i)<pat.at(0)){
			cout<<pat;
			continue;
			}
			
			cout<<str.at(i);
			}

		
	cout<<endl;
	

	return 0;
}

