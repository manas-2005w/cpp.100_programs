#include <iostream>
using namespace std;

int hcf(int n1, int n2);
int main() {
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "\nEnter seconfd number: ";
    cin >> n2;

    cout << "\nGCD of "<< n1 << " and " << n2 << " is: " << hcf(n1,n2);
    return 0;
}

int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}