#include<iostream>
#include<cstring>
using namespace std;

int main(){
	
	char s[100] = "Remember me when you look at the moon!";
	
	char *ptr = strtok(s," ");
	cout<<ptr<<endl;
	
	while(ptr!=NULL){
		ptr = strtok(NULL," ");
		cout<<ptr<<endl;
	}
	return 0;
}
