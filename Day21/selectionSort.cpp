#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int array[],int n){
    for (int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && array[j]<array[j-1]){
            int temp=array[j-1];
            array[j-1]=array[j];
            array[j]=temp;//swap
            j--;
            cout<<"run"<<"\n";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    SelectionSort(array,n);
    
    for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
        
    }
    return 0;

}
