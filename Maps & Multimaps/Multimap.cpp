#include<iostream>
#include<map>

using namespace std;

int main(){
	multimap<char,string> m;
	int n; 
	cin>>n;
	
	for(int i=0; i<n; i++){
		char ch;
		string s;
		cin>>ch>>s;
		m.insert(make_pair(ch,s));
	}
	
	
	auto it = m.begin();
	m.erase(it);
	
	auto it2 = m.lower_bound('b');
	auto it3 = m.upper_bound('d');
	for(auto it4=it2; it4!=it3;it4++){
		cout<<it4->second<<","<<endl;
	}
	
	//print
	for(auto p:n){
		cout<<p.first" -> "<<p.second<<endl;
	}
	
	//search
	auto f = m.find('c');
	if(f->second == "cat"){
		m.erase(f);
	}
	
	
	
	
	
	return 0;
}
