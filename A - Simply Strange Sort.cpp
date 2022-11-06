#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    vector<int>v(n);
    int cunt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
  while(!is_sorted(v.begin(),v.end())){
        for(int i=cunt%2;i+1<n;i=i+2){
            if(v[i]>v[i+1])
                swap(v[i],v[i+1]);
        }
        cunt++;
        }
  cout<<cunt<<endl;
}
return 0;
}