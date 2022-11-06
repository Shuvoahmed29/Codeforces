#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    str[0]='A';
    int p=1;
    while(str[0]!='#'){
        cin>>str;
        if(str=="HELLO"){
            cout<<"Case "<<p<<": ENGLISH"<<endl;
            p++;
        }
        else if(str=="HOLA"){
            cout<<"Case "<<p<<": SPANISH"<<endl;
            p++;
        }
        else if(str=="HALLO"){
            cout<<"Case "<<p<<": GERMAN"<<endl;
            p++;
        }
        else if(str=="BONJOUR"){
            cout<<"Case "<<p<<": FRENCH"<<endl;
            p++;
        }
        else if(str=="CIAO"){
            cout<<"Case "<<p<<": ITALIAN"<<endl;
            p++;
        }
        else if(str=="ZDRAVSTVUJTE"){
            cout<<"Case "<<p<<": RUSSIAN"<<endl;
            p++;
        }
        else if(str!="#"){
            cout<<"Case "<<p<<": UNKNOWN"<<endl;
            p++;
        }
    }
    return 0;
}