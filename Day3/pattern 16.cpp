#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int space= n-row+1;

        while(space){
            cout<<"*";
            space--;
        }
        cout<<endl;
        row++;
    
    }
}