#include<bits/stdc++.h>
using namespace std;
int FindfirstOccur(int arr[],int size,int target){
     int start=0;
     int end=size-1;
     int ans=-1;
     while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
               
               start= mid+1;
               ans=mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return -1;
}
int main(){
 int size;
 cin>>size;
 int arr[size];
 cin>>arr[size];
 //cin>>arr;
 
 //cin>>target;
 for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
 }
 int target;
 cin>>target;

int findfirstOccur=FindfirstOccur(arr,size,target);
  cout<<FindfirstOccur<<endl;

    return 0;
}