#include<bits/stdc++.h>
using namespace std;
// constraint arr[i]<n && arr.length>=n
int solve1(int arr[], int n){
	int i=0, j=1, mini=INT_MAX;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			mini = min(j,mini);
		}
	}
	if(mini == INT_MAX)
	return 0;
	else
	return mini;
}
/*int solve2(int a[], int n){
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		if(m.find(a[i])==m.end())
		m[a[i]] = 1;
		else
		return i;
	}
	return 0;
}*/
int solve3(int a[], int n){
	for(int i =0;i<n;i++)
	{
		if(a[abs(a[i])]<0)
		return i;
		else
		a[abs(a[i])] *= -1;
	}
	return 0;
}
int main(){
	int arr[] = {0, 1, 2, 3, 4 ,5, 6};
	int n = 7;
	cout<<solve3(arr, 7);
}
