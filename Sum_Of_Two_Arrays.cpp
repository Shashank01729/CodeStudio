#include <bits/stdc++.h> 
vector<int> reverse(vector<int> v){
	int s=0;
	int e=v.size()-1;
    while(s<e){
		swap(v[s++],v[e--]);
    }
	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){
	int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int> ans;

	while(i>=0 && j>=0){
		int val1=a[i];
		int val2=b[j];

		int sum=val1+val2+carry;
		carry=sum/10;
		sum%=10;

		ans.push_back(sum);

		i--;
		j--;
	}

	// Case 1, n>m
    while(i>=0){
		int sum=a[i]+carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
		i--;
	}

	// Case 2, m>n
	while(j>=0){
		int sum=b[j]+carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
		j--;
	}

	// Case 3, carry is left
	while(carry!=0){
		int sum=carry;
		carry=sum/10;
		sum%=10;
		ans.push_back(sum);
	}

	return reverse(ans);

}