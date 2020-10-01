#include<iostream>
using namespace std;

int main(){
	
long long r,c,a,x,y;
cin>>r>>c>>a;

x = r/a;
y = c/a;
if (r%a != 0)
x++;

if (c%a != 0)
y++;
cout<< x*y<< endl;
	return 0;
}

