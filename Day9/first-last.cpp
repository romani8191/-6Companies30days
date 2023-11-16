#include<iostream>
using namespace std;

int FirstOccur(int arr[], int n, int key){
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }

        else if(arr[mid]<key){
            s=mid+1;
        }

        else{
            e=mid-1;
        }

        mid=s+ (e-s)/2;
    }

    return ans;
}

int LastOccur(int arr[], int n, int key){
    int s=0 , e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){
            ans= mid;
            s=mid+1;
        }

        else if(arr[mid]<key){
            s=mid+1;
        }

        else{ 
            e=mid-1;
        }

        mid=s+ (e-s)/2;
    }

    return ans;
}

int main(){
    
    int even[5]={2,4,6,8,4};

    cout<<"First occurance of 4 is "<<FirstOccur(even,5,4)<<endl;
    cout<<"Last occurance of 4 is "<<LastOccur(even,5,4)<<endl;


    return 0;
}