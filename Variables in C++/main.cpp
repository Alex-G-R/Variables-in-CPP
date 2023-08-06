#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;
    // Tekstowe
    string text = "My text here";
    cout << "string: " << text << ", size "<< sizeof(string) << " bajts" << endl << endl;

    // char , znakowe
    char znak = 127;
    cout << "char: " << (int)znak << " size " << sizeof(char) << " bajts" << endl << endl;

    // Całkowite
    short zmiennaShort = 32767;
    cout << "short: " << zmiennaShort << ", size " << sizeof(short) << " bajts" << endl;

    int zmiennaInt = 2147483647;
    cout << "int: " << zmiennaInt << ", size " << sizeof(int) << " bajts" << endl;

    long zmiennaLong = 2147483647;
    cout << "long: " << zmiennaLong << ", size " << sizeof(long) << " bajts" << endl;

    long long zmiennaLongLong = 9223372036854775807;
    cout << "long long: " << zmiennaLongLong << ", size " << sizeof(long long) << " bajts" << endl << endl;

    // Zmiennio przecinkowe
    float zmiennaFloat = 3.141592;
    cout << "float: "<< setprecision(7) << zmiennaFloat << ", size " << sizeof(float) << " bajts" << endl;

    double zmiennaDouble = 3.141592653589;
    cout << "double: " << setprecision(14) << zmiennaDouble << ", size " << sizeof(double) << " bajts" << endl << endl;

    // logiczne
    bool logicznaFalse = false;
    cout << "bool (false):" << logicznaFalse << ", size " << sizeof(bool) << " bajts" << endl;

    bool logicznaTrue = true;
    cout << "bool (true):" << logicznaTrue << ", size " << sizeof(bool) << " bajts" << endl << endl;

    cin.get ();
    return 0;
}