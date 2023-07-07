int GetPivot(vector<int>& arr, int n){
    int start=0,end=n-1;
    int mid=start+((end-start)/2);

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+((end-start)/2);
    }
    return start;
}

int BinarySearch(vector<int>& arr,int s, int e, int key){
    int low=s,high=e;
    int mid=low+((high-low)/2);
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=low+((high-low)/2);
    }
    return -1;
}

int search(vector<int>& arr, int n, int k){
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=GetPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return BinarySearch(arr,pivot,n-1,k);
    } 
    else {
        return BinarySearch(arr,0,pivot-1,k);
    }
}