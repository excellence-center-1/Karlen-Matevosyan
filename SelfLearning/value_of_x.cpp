#include <iostream>
#include <cmath>
using namespace std;

int findRootX(int a, int b, int c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        return (-b + sqrt(discriminant)) / (2 * a);
    } else 
        return -1;
}

int main () {
    int a, b, c;
    cout << "Hello, we are introducing you program that solve quadratic equation " << endl;
    cout << "Please enter a, b, c: " << endl;
    cin >> a, cin >> b, cin >> c;
    int result = findRootX(a,b,c);
    cout << "The root of x is: " << result << endl;
}
