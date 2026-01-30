#include<iostream>
using namespace std;

int main () {
    float pi = 3.14;
    float radius, area;
    cout<<"enter the radius of circle \n";
    cin>> radius;
    area = pi*(radius*radius);
    cout<<"the area of the circle is :"<< area;
    return 0;
}