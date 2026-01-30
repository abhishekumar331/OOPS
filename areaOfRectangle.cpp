#include <iostream>
using namespace std;

// area of rectangle and area of perpendicular

int areRectangle(int a, int b)
{
    int area = a * b;
    return area;
}
 
int areaperpendicular(int a, int b)
{
    int area = (a * b) / 2;
    return area;
}

int main () {
    int a;
    int b;
    cin >> a >> b;
    cout << "area = " << areRectangle(a,b) << endl;
    cout << "area = " << areaperpendicular(a,b) << endl;
}