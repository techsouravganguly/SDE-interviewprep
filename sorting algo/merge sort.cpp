#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int mid , int end){
	int tmp[end - start + 1];
	int i = start, j= mid+1, k=0;
	while(i <= mid && j <= end){
		if(arr[i] <= arr[j]){
			tmp[k] = arr[i];
			i++;
			k++;
		}
		else{
			tmp[k] = arr[j];
			j++,k++;
		}
	}
	while(i<=mid){
		tmp[k]=arr[i];
		k++,i++;
		
	}
	while(j<=end){
		tmp[k] = arr[j];
		j++,k++;
	}
	for(i = start;i<=end;i++){
		arr[i] = tmp[i-start];
	}
}
void merge_sort(int arr[], int start, int end){
	if(start<end){
		int mid = (start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,start, mid, end);
	}
}
int main(){
	int arr[] = {8, 4, 2, 1};
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	merge_sort(arr,0,4-1);
	for(int i=0;i<4;i++){
		cout<<arr[i]<<" ";
	}
}
