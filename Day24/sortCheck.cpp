#include<bits/stdc++.h>
using namespace std;

bool sortCheck(int array[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){  
            if(array[i]>array[j])
                return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }

    bool result=sortCheck(array,n);
    // if (result) cout << "True" << endl;
    // else cout << "False" << endl;
    cout<<result;
    return 0;
}