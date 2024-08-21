#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;  // Add the last digit to the sum
        n /= 10;        // Remove the last digit from the number
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Please enter a positive integer.";
    else
        cout << "Sum of digits of " << n << " = " << sumOfDigits(n);
    
    return 0;
}
