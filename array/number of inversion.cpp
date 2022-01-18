#include<bits/stdc++.h>
using namespace std;
int c = 0;
void merge(int arr[], int start ,int mid, int end){
	int tmp[end-start+1];
	int i = start, j = mid+1, k=0;
	while(i<=mid&&j<=end){
		if(arr[i]<=arr[j])
		{
			tmp[k++] = arr[i++];
		}
		else{
			tmp[k++] = arr[j++];
			c = c + (mid-i)+1;
			
		}
	}
	while(i<=mid){
		tmp[k++] = arr[i++];
	}
	while(j<=end){
		tmp[k++] = arr[j++];
	}
	for(i=start;i<=end;i++){
		arr[i] = tmp[i-start];
	}
}
void count_inversion(int arr[], int start, int end){
	int mid; 
	if(start<end){
		mid = (start+end)/2;
		count_inversion(arr, start, mid);
		count_inversion(arr, mid+1, end);
		merge(arr, start, mid, end);	
	}
}
int main(){
	int arr[] = {8, 4, 2, 1};
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
	count_inversion(arr, 0, 3);
	cout<<endl;
	cout<<c;
}
