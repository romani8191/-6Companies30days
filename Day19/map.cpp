#include<bits/stdc++.h>
using namespace std;

int main(){

    //creating an array
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    //mapping function
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    //quary creation
    int q;
    cin>>q;
    while(q!=0){
        int num;
        cin>>num;

        //fetch
        cout<<m[num]<<endl;
    }

    return 0;
}