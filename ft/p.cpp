#include <iostream>

using namespace std;

// Declare the structure Complex with two data members: real and imaginary
struct Complex {
    int real;
    int imaginary;
    
    // Member function addComplex to add two complex numbers
    Complex addComplex(Complex &c2) {
        Complex result;
        result.real = real + c2.real;
        result.imaginary = imaginary + c2.imaginary;
        return result;
    }
};

int main() {
    // Create two Complex numbers
    Complex c1, c2;
    c1.real = 5;
    c1.imaginary = 3;
    c2.real = 4;
    c2.imaginary = 2;
    
    // Add the two complex numbers
    Complex sum = c1.addComplex(c2);
    
    // Output the sum
    cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;

    return 0;
}