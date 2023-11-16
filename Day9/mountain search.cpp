#include<iostream>
using namespace std;

int PeakIndexMountainArray(int arr[], int n){
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            mid=mid+1;
        }

        else{
            e=mid;
        }
        int mid=s+(e-s)/2;

    }
    return s;

}

int main(){
    int array[10]={1,2,3,4,5,6,5,4,3,2};
    cout<<"The mountain element is "<<PeakIndexMountainArray(array, 10)<<endl;
}