
#include <iostream>
using namespace std;

// ---------------- Q1 ----------------
// Decimal to Binary (Bitwise Method)
void decimalToBinaryBitwise() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while (n != 0) {
        int bit = n & 1;
        ans = ans + (bit * place);

        place = place * 10;
        n = n >> 1;
    }

    cout << "Binary = " << ans << endl;
}

// ---------------- Q2 ----------------
// Decimal to Binary (Array Method)
void decimalToBinaryArray() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;

    int binary[32];
    int index = 0;

    while (n > 0) {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    cout << "Binary = ";

    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << endl;
}

// ---------------- Q3 ----------------
// Binary to Decimal
void binaryToDecimal() {
    int n;
    cout << "Enter Binary Number: ";
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n != 0) {
        int digit = n % 10;

        if (digit == 1) {
            ans = ans + (1 << i);
        }

        n = n / 10;
        i++;
    }

    cout << "Decimal = " << ans << endl;
}

// ---------------- Q4 ----------------
// Decimal to Binary (%2 and /2 Method)
void decimalToBinaryDivision() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;

    int binary = 0;
    int place = 1;

    while (n != 0) {
        int bit = n % 2;
        binary = binary + (bit * place);

        place = place * 10;
        n = n / 2;
    }

    cout << "Binary = " << binary << endl;
}

// ---------------- MAIN FUNCTION ----------------
int main() {

    cout << "===== Decimal & Binary Program =====" << endl;
    cout << "1. Decimal to Binary (Bitwise)" << endl;
    cout << "2. Decimal to Binary (Array)" << endl;
    cout << "3. Binary to Decimal" << endl;
    cout << "4. Decimal to Binary (Division Method)" << endl;

    int choice;
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            decimalToBinaryBitwise();
            break;

        case 2:
            decimalToBinaryArray();
            break;

        case 3:
            binaryToDecimal();
            break;

        case 4:
            decimalToBinaryDivision();
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}