#include <iostream>
using namespace std;

int main(){
    int totalSale;
    float ST, CT, TotalTax;
    totalSale = 95;
    ST = ((4*totalSale)/100);
    CT = (2*totalSale)/100;
    cout << "The total tax is " << ST + CT;
    return 0;
}
