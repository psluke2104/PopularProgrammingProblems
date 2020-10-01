#include<iostream>
#include<string>
using namespace std;


int main(){
	string str, str2;
	cin>> str;
	int x = str.length();
	for(int i = 0; i<x; i++ ){
		if (str.at(i)=='A'||str.at(i)=='E'||str.at(i)=='I'||str.at(i)=='O'||str.at(i)=='Y'||str.at(i)=='U'|str.at(i)=='a'||str.at(i)=='e'||str.at(i)=='i'||str.at(i)=='o'||str.at(i)=='u'||str.at(i)=='y')
		     continue;
		     else{
		     	
		     	str2+='.';
		     	str2+=towlower(str[i]);
			 }

	}
	cout<<str2;
  
	return 0;
}

