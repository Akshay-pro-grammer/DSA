#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
  int n=arr.size();
  for(int i=0;i<n;i++){
    int minindex=i;
      for(int j=i+1;j<n;j++){
        if(arr[minindex]>arr[j]){
          minindex=j;
        }
      }
    if(i!=minindex){
      swap(arr[minindex],arr[i]);
    }
  }
}

