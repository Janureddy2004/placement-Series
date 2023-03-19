#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <int> v={7,-6,3,8,-1,8,-11};
	int target = 0;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		if(i==0 || v[i]!=v[i-1]){
			int j=i+1,k=v.size()-1;
			int tar= target-v[i];
			while(j<k){
				if(v[j]+v[k]==tar){
					cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
					while(j<k && v[j]==v[j+1]) j++;
					while(j<k && v[k] == v[k-1]) k--;
					j++;
					k--;
				}
				else if(v[j]+v[k]<tar)
					j++;
				else k--;
			}
		}
	}
}
