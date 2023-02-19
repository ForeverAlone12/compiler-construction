#include "iostream"
#include "function.h"
#include "utils.h"

using namespace std;

int main() {

    cout << "Вычисление данных прямоугольника." << endl;
    cout << endl;

    double width = getUnsignedDoubleDigit("Введите длину прямоугольника: ");
    double height = getUnsignedDoubleDigit("Введите ширину прямоугольника: ");

    cout << endl;
    cout << "Площадь прямоугольника = " << getSquare(width, height) << endl;
    cout << "Периметр прямоугольника = " << getPerimeter(width, height) << endl;
    cout << "Диагональ прямоугольника = " << getDiagonalLength(width, height) << endl;

    return 0;
}