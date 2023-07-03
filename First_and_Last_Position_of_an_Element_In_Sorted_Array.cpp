#include <bits/stdc++.h> 

int First_Occurance(vector<int>& arr,int n,int key){
    int low=0,high=n-1;
    int mid=low+((high-low)/2);
    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+((high-low)/2);
    }
    return ans;
    
}
int Second_Occurance(vector<int>& arr,int n,int key){
    int low=0,high=n-1;
    int mid=low+((high-low)/2);
    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+((high-low)/2);
    }
    return ans;
    
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first=First_Occurance(arr,n,k);
    p.second=Second_Occurance(arr,n,k);
    return p;
}