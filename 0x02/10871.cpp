#include <bits/stdc++.h>
using namespace std;

void func10871(int arr[], int n, int x);

int main(){
	
	int n;
	int x;
	
	cin >> n;
	cin >> x;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	func10871(arr, n, x);
	
	return 0;
}

void func10871(int arr[], int n, int x) {
	for(int i=0; i<n; i++){
		if(arr[i]<x){
			cout << arr[i] << " ";
		}
	}
}
