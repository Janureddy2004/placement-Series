//min max element efficient jahnavi
#include<bits/stdc++.h>
using namespace std;
int main(){
 	int n;
	cout<<"Enter n : ";
	cin>>n;
	vector<int>v(n);
	cout<<"\nEnter the elements : ";
	for(int i=0;i<n;i++)
	 	cin>>v[i];	
    cout<<"Max and min element is : "<<*max_element(v.begin(),v.end())<<" "<<*min_element(v.begin(),v.end())<<endl;
}
