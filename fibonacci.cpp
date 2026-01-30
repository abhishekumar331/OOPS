#include<iostream>
using namespace std;

int main () {
    int a=0 , b=1 , n_term;
    int n;
    cout<<"enter any number :";
    cin >> n;
    cout << "Fibonacci series up to " << n << " terms is: " << endl;
    cout << a << endl;
    cout << b << endl;
    for (int i =2; i<=n; i++) {
        n_term = a + b;
        cout << n_term << endl;
        a = b;
        b = n_term;
    }
}