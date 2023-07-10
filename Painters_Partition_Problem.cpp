bool isPossible(vector<int> &boards,int n,int k,int mid){
    int PainterCount=1;
    int BoardPainted=0;

    for(int i = 0; i < n; i++){
        if(BoardPainted + boards[i] <= mid){
            BoardPainted+=boards[i];
        } 
        else{
            PainterCount++;
            if(PainterCount > k || boards[i]>mid){
                return false;
            }
            BoardPainted=boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int n=boards.size();
    if(n<k){
        return -1;
    }

    int s=0,sum=0;
    for(int i=0;i<=n;i++){
        sum+=boards[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
      if (isPossible(boards, n, k, mid)){
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