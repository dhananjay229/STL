#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int arr[] = {1,10,11,9,100};
	int n = sizeof(arr)/sizeof(int);
	
	int key = 11;
	auto a = find(arr,arr+n,key);
	int index = a - arr;
	
	if(index==n){
		cout<<key<<" is not present";
	}
	else{
		cout<<"Present at index : "<<index;
	}
	
	return 0;
}
