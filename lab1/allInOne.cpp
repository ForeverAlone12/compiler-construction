#include "iostream"
#include "math.h"
#include "string"
#include "regex"

using namespace std;

double getSquare(double width, double height) {
    return width * height;
}

double getPerimeter(double width, double height) {
    return 2.0 * (width + height);
}

double getDiagonalLength(double width, double height) {
    return sqrt(width * width + height * height);
}

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

int main(int argc, char *argv[]) {

    cout << "Вычисление данных прямоугольника." << endl;
    cout << endl;

    double width = getUnsignedDoubleDigit("Введите длину прямоугольника [width] : ");
    double height = getUnsignedDoubleDigit("Введите ширину прямоугольника [height] : ");

    cout << endl;
    cout << "Площадь прямоугольника [width * height] = " << getSquare(width, height) << endl;
    cout << "Периметр прямоугольника [2 * (width + height)] = " << getPerimeter(width, height) << endl;
    cout << "Диагональ прямоугольника [sqrt(width * width + height * height)] = " << getDiagonalLength(width, height) << endl;

    return 0;
}