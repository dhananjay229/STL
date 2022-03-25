#include<iostream>
using namespace std;

//search
template<class T>
int search(T arr[], int n, T key){
	for(int i =0; i<n; i++){
		if(arr[i] == key){
			return i;
		}
	}
	return n;
}


int main(){
	int arr[] = {2,3,5,6,10,4,20,15};
	int n = sizeof(arr)/sizeof(int);
	int k = 10;
	
	cout<<search(arr,n,k)<<endl;
	
	float a[] = {1.0,1.2,1.3,1.9,2.4,1.8};
	float z = sizeof(a)/sizeof(float);
	float x = 2.4;
	
	cout<<search(a,z,x)<<endl;
	
	return 0;
	
}
