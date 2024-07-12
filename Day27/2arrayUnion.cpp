#include<bits/stdc++.h>
using namespace std;

vector <int> ArrayUnion(int n, int m, int arr1[], int arr2[]){
    int i=0, j=0;           //pointer
    vector <int> Union;     //vector declared
    while(i<n && j<m)
    {      //case 1 & 2
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0 || Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
            i++;
        }
        else{
            if(Union.size()==0 || Union.back()!=arr2[j])
            Union.push_back(arr2[j]);
            j++;
        }

    }

     //any left element in arr1
    while(i<n){
        if(Union.back()!=arr1[i])
         Union.push_back(arr1[i]);
        i++;
    }
    //any left element in arr1
    while(j<m){
    if(Union.back()!=arr2[j])
     Union.push_back(arr2[j]);
    j++;
    }

    return Union;
}


int main()

{
  int n = 10, m = 7;
  int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[] = {2, 3, 4, 4, 5, 11, 12}; 
  vector < int > Union = ArrayUnion(n, m, arr1, arr2 );
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}