#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	cout<< " Compare "<<a<<" and "<<b<<endl;
	return a>b;
}

void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){
	
	for(int i=1; i<=n-1; i++){
		for(int j=0; j<=n-i-1; j++){
			if(compare(a[j], a[j+1])){
				swap(a[j],a[j+1]);
			}
		}
	}
}


int main(){

	int n, a[1000];
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];		
	}	
	
	bubble_sort(a, n, compare);
	for(int i=0; i<n; i++){
		cout << a[i] << ",";
	}
	return 0;
	
}













