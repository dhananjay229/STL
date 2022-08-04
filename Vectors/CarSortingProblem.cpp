#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

class car{
	public:
		string car_name;
		int x,y;
		Car(){
			
		}
		Car(string n, int x, int y){
			car_name = n;
			this->x = x;
			this->y = y;
		}
		
		int dist(){
			return x*x + y*y;
		}
		
};

bool compare(car A, car B){
	
	int da = A.dist();
	int db = B.dist();
	
	if(da=db){
		return A.car_name.length() < B.car_name.length();
	}
	return da<db;
}

int main(){
	
	int n;
	cin>>n;
	vector<Car> v;
	
	for(int i=0; i<n; i++){
		
		int x,y;
		string name;
		cin>name>>x>>y;
		Car temp(name,x)
		v.puxh_back(temp);
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(auto p:v){
		cout<<"Car "<< c.car_name<< " Dist "<<c.dist()<<"Location "<<c.x<<" "<<c.y<<endl;
	}
	
	
	return 0;
}
