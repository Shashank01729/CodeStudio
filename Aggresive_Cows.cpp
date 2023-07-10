bool isPossible(vector<int> &stalls, int n, int k, int mid){
    int CowCount=1;
    int LastPos=stalls[0];
    
    for(int i=0;i<n;i++){
        if(stalls[i]-LastPos>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            LastPos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    // Write your code here.
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    if(n < k){
        return -1;
    }
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,stalls[i]);
    }
    int mini=1000;
    for(int i=0;i<n;i++){
        mini=min(mini,stalls[i]);
    }
    int s=0;
    int e=maxi-mini;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(isPossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        } 
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}