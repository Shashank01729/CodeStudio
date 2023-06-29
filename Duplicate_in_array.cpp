// We can do counting approach -----> But it is not good

int findDuplicate(vector<int> &arr) {
    int n=arr.size(),ans=0;
    for (int i=0;i<n;i++) {
        ans^=arr[i];
    }
    for (int i=1;i<n;i++) {
        ans=ans^i;
    }
    return ans;
}

/*
    1,2,3,.x.,(n-1),x -----> xor all these numbers
    1,2,3,...,n-1 -----> xor all the number and xor with the above series (we will get the duplicate element)
*/

