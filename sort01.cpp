#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
    }
    cout << endl;
}

void SortOne(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
        }
    }
}

int main(){
    int arr[10]={1,1,1,0,1,1,1,1,0,1};
    PrintArray(arr,10); 
    SortOne(arr,10);
    PrintArray(arr,10);
}
    
    
