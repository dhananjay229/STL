#include<iostream>
#include<vector>
using namespace std;

int main(){
	
	vector<int> a;
	vector<int> b(5,10); // five int with value 10
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,10,14};
	
	// iterate over the vector
	
	for(int i=0; i<c.size(); i++){
		cout<<c[i]<<",";
	}
	cout<<endl;
	
	for(auto it=b.begin(); it!=b.end(); it++){
		cout<<(*it)<<",";
	}
	
	//for each loop
	for(int x:d){
		cout<<x<<",";
	}
	
	
	vector<int> n;
	int n;
	cin>>n;
	for(int i=0;i<n; i++){
		int no;
		cin>>no;
		v.push_back(no;)
	}
	
	
	
	
	return 0;
}
