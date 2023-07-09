bool isPossible(vector<int>& arr,int n,int m,int mid){
    int StuCount=1;
    int PageSum=0;

    for(int i = 0; i < n; i++){
        if(PageSum + arr[i] <= mid){
            PageSum+=arr[i];
        } 
        else{
            StuCount++;
            if(StuCount > m || arr[i]>mid){
                return false;
            }
            PageSum=arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m){
    // Write your code here.
    if(n < m){
        return -1;
    }

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
      if(isPossible(arr,n,m,mid)){
        ans=mid;
        e=mid-1;
      } 
      else{
          s=mid+1;
      }
      mid=s+(e-s)/2;
    }
    return ans;
}