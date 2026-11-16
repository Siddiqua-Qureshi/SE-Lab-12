#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    int temp;

    // Pointers declaration 
    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    cout << "Enter three numbers:\n";
    cout << "Enter A: "; cin >> *ptrA;
    cout << "Enter B: "; cin >> *ptrB;
    cout << "Enter C: "; cin >> *ptrC;

    cout << "\nBefore Swapping:" << endl;
    cout << "A = " << *ptrA << ", B = " << *ptrB << ", C = " << *ptrC << endl;

    // Swapping logic using pointers dereferencing
    temp = *ptrA;
    *ptrA = *ptrC;
    *ptrC = *ptrB;
    *ptrB = temp;

    cout << "\nAfter Swapping:" << endl;
    cout << "A = " << *ptrA << ", B = " << *ptrB << ", C = " << *ptrC << endl;
    return 0;}



