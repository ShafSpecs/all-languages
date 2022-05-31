#include <iostream>
using namespace std;
  
#define PI 3.141
  
int main(){
    float radius, area, circumference;
    cout << "Enter radius of circle\n";
    cin >> radius;
    // Area of Circle = PI x Radius X Radius
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    cout << "The ciircumference of circle is: " << circumference;
    cout << "and the area is: " << area;
    
    return 0;
}
