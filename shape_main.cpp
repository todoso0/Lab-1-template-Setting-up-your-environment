#include <iostream>
#include "triangle.hpp"

using namespace std;

int main() {

    char shape_choice = '0';

    while(shape_choice != 'e') {

        cout << "\nEnter your choice of shape: \n" << "\tr: rectangle\n" << "\tt: triangle\n" << "\te: exit the system\n";

        cin >> shape_choice;

        if (shape_choice == 'r') {

            double height, width;
            cout << "Enter the height of the rectangle: ";
            cin >> height;
            if (height < 0) {
                cout << "Height input must be non-negative";
                continue;
            }

            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (width < 0) {
                cout << "Width input must be non-negative";
                continue;
            }

            cout << "Rectangle area: " << height * width << "\n";

        } else if (shape_choice == 't') {

            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            if (base < 0) {
                cout << "Base input must be non-negative";
                continue;
            }

            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (height < 0) {
                cout << "Height input must be non-negative";
                continue;
            }

            Triangle triangle1;
            triangle1.set_base(base);
            triangle1.set_height(height);
            cout << "Triangle area: " << triangle1.area() << "\n";

        } else if (shape_choice == 'e') {
        
            cout << "Exiting the system.\n";
            break;

        } else {

            cout << "Invalid option: " << shape_choice << " !";

        }

    }

    return 0;

}