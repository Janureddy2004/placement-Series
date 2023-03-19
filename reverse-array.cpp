#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"\nEnter n : ";
	cin>>n;
	vector<int> v(n);
	cout<<"\nEnter elements : ";
	for(int i=0;i<n;i++)
	cin>>v[i];
	cout<<"\nBefore reverse ";
	for(int &i:v)
		cout<<i<<" ";
	reverse(v.begin(),v.end());
	cout<<"\nAfter reverse : ";
	for(int &i:v)
		cout<<i<<" ";	
	
}
