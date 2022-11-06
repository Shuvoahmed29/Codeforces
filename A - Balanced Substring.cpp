#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p=0,l=0,q=0;
        cin>>n;
        string str;
        cin>>str;
        for(int i=0;i<n;i++){
            if(str[i]=='a' && str[i+1]=='b'){
                cout<<i+1<<" "<<i+2<<"\n";
                l=1;
                break;
            }
            else if(str[i]=='b' && str[i+1]=='a'){
                cout<<i+1<<" "<<i+2<<"\n";
                l=1;
                break;
            }
        }
        if(l==0){
            cout<<-1<<" "<<-1<<"\n";
        }
    }
    return 0;
}