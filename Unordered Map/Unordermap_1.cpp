#include<iostream>
#include<unordered_map>
#include<cstring>

using namespace std;

int main(){
	
	unordered_map<string, int> m;
	
	//insert 1
	m.insert(make_pair("Mango",100));
	
	//insert 2
	pair<string,int> p;
	p.first = "Apple";
	p.second = 120;
	m.insert(p);
	
	// search
	string fruit;
	cin>>fruit;
	
	auto it = m.find(fruit);
	if(it!=m.end()){
		cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
	}
	else{
		cout<<"fruit is not present "<<endl;
	}
	
	//it store unique keys only once
	if(m.count(fruit)){
		cout<<"Price is "<<endl;
	}
	
	//Erase
	m.erase(fruit);
	
	//update the price
	m[fruit] += 20;
	
	m["litchi"] = 60;
	m["pineapple"] = 80;
	
	//iterate over all the key value pair
	for(auto it=m.begin(); it!=m.end(); it++){
		cout << it->first<<" and "<<it->second<<endl;
	}
	
	
	//for each loop
	for(auto p:m){
		cout<<p.first<< ":"<<p.second<<endl;
	}
	
	
	
	
	
	return 0;	
}








