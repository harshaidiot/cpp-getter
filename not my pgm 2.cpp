#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
        
    public:
        void getter(int a, int b){
            length = a;
            breadth = b;
        }
        
        int setter(){
            int area = length * breadth;
            return area;
        }
};

int main(){
    Rectangle s1;
    
    s1.getter(9,5);
    cout << "Area is : " << s1.setter();
}
