#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n, x; cin>>n>>x;
		vector<int>vec;
		for(int i=0;i<2*n;i++){
			int x; cin>> x;
			vec.push_back(x);
		}
		int p=0,cunt=0;
		sort(vec.begin(),vec.end());
		for(int i=0;i<n;i++){
			if(vec[i]+x<=vec[n+p]){
				p++;
				cunt++;
			}
		}
		if(cunt==n) cout<<"YES\n";
		else cout<<"NO\n";
	}
}