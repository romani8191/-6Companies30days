#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char count='A';
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<char (count+row-1) <<" ";
            col++;

        }
        cout<<endl;
        row++;
    }
}