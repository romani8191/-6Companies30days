#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    cout << endl;

    switch(num){

        case 1:
        cout<<"First"<<endl;
            break;

        case 2:
        cout<<"Second"<<endl;
            break;


        case 3:
        cout<<"Third"<<endl;
            break;

        default:switch(5){
            case 5:
            cout<<"The value entered is : "<<5;
        }
        cout <<endl;
        cout <<" Behan , kya gazab input diya hai "<<endl;

    }

}