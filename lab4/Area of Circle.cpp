#define PI 3.14159
#include<iostream>
#define SQUARE(x) ((x) * (x));

using namespace std;

int main(){
    int area,radius;
    cout<<"Welcome to Area of a Circle Calculator"<<endl;
    cout<<"Please Enter Radius to Calculater Area"<<endl;
    cin>>radius;
    area= PI * SQUARE(radius);
    cout<<"The Area of The Circle whose Radius is "<<radius<<" is "<< area<<endl;
    return 0;
    
}