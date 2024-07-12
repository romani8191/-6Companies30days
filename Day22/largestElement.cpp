#include<bits/stdc++.h>
using namespace std;

int largestnum(int array[], int n){
    int largest=array[0];
    for(int i=0;i<n;i++){
        if(largest<array[i]){
            largest=array[i];
        }
    }
    return largest;

}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int max=largestnum(array,n);
    cout<<"largest number in the array is : "<<max<<endl;


}