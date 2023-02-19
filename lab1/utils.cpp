#include "iostream"
#include "string"
#include "regex"

using namespace std;

double getUnsignedDoubleDigit(string text) {
    string inputDouble;
    double digit;
    bool error = true;
    regex regexUnsignedDouble("\\d*[.]?\\d*");

    do {
        cout << text;
        cin >> inputDouble;
        if (!regex_match(inputDouble, regexUnsignedDouble)) {
            cout << "Ошибка преобразования числа!" << endl;
        } else {
            digit = stod(inputDouble);
            error = false;
        }
    } while (error);

    return digit;
}