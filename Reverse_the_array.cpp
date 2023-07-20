#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m){
	if(arr.size()==1){
		return ;
	}
	int s=m+1;
	int e=arr.size()-1;
	int mid=s+(e-s)/2;
	int iter=0;
    while(s<=mid){
		// int temp=arr[s];
		// arr[s]=arr[e-iter];
		// arr[e-iter]=temp;
		swap(arr[s],arr[e-iter]);
		s++;
		iter++;
    }
}
