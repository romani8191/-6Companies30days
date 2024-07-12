#include<bits/stdc++.h>
using namespace std;

int MultiAppear(vector<int> &array){
    //size of the array
    int n= array.size();

    //declare the hashmap
    map<int , int> MAP;
    for(int i=0;i<n;i++){
        MAP[array[i]]++;
    }

    //check for multiple interies
    for(auto it:MAP){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;

}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = MultiAppear(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}
