#include<bits/stdc++.h>
using namespace std;

int main(){

    //creting the array
    string n;
    cin>>n;

    //hashing the array
    int hash[26]={0};
    for(int i=0;i<n.size();i++){
        hash[s[i]-'a']++;
    }


    //quary is created
    int q;
    cin>>q;
    while(q--){
        char alpha;
        cin>>alpha;
            //fetch
        cout<<hash[alpha-'a']<<endl;
    }


    return 0;
}