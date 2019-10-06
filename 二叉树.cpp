#include<iostream>
#include<cstring>
using namespace std;
string before;
string after;
int l;
void change(int bgin1,int end1,int bgin2,int end2){
	int m=after.find(before[bgin1]);
	if(m>bgin2) change(bgin1+1,bgin1+m-bgin2,bgin2,m-1);
	if(m<end2) change(bgin1+m-bgin2+1,end1,m+1,end2);
	cout<<before[bgin1];
}
int main(){
	cin>>before>>after;
	l=before.length();
	change(0,l-1,0,l-1);
	return 0;
}
