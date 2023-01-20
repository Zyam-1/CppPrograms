#include <iostream>
using namespace std;

int main(){
    int meters;
    float feet;
    cout << "Enter the value in meters" << endl;
    cin >> meters;
    feet = meters * 3.2808399;
    cout << "The length in feet is " << feet;
    return 0;
}