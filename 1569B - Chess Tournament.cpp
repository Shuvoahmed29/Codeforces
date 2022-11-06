#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char ans[n+3][n+3];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]='=';
                if(i==j)ans[i][j]='X';
            }
        }
        vector<int>vec;
        for(int i=0;i<n;i++){
            if(s[i]=='2')vec.push_back(i);
        }
        if(vec.size()==1 || vec.size()==2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<vec.size();i++){
                int v1,v2;
                v1=i;
                v2=i+1;
                if(v2==vec.size())v2=0;
                v1=vec[v1];
                v2=vec[v2];
                ans[v1][v2]='+';
                ans[v2][v1]='-';
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)cout<<ans[i][j];
                cout<<endl;
            }
        }
    }
    return 0;
}