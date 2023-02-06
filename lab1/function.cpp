#include "math.h"

double getSquare(double width, double height) {
    return width * height;
}

double getPerimeter(double width, double height) {
    return 2.0 * (width + height);
}

double getDiagonalLength(double width, double height) {
    return sqrt(width * width + height * height);
}
