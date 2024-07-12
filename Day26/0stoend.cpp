#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a){
    //initialize the 2 nd pointer
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }

    //non zero elements
    if(j==-1)
    return a;

    //moving the pointer forward and swapping accordingly
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    vector<int> array[n];
    for(int i=0;i<n;i++){
        cin>>array[n];
    }
    vector<int> ans=moveZeros(n,array);
    for(auto &it : ans){
        cout<<it<<" ";
    }
    return 0;
}