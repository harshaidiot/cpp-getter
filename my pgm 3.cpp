#include<iostream>
using namespace std;
class Cars{
	private:
		int speed;
	public:
		void setspeed( int s){
			speed=s;
		}
		int getspeed(){
			return speed;
		}
};
int main(){
	Cars s1;
	s1.setspeed(400);
	 cout<<"speed of car is :"<<s1.getspeed()<<"km/ph";
}
