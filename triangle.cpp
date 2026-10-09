#include "triangle.hpp"

void Triangle::set_base(double b) {

    this->base = b;

}


void Triangle::set_height(double b) {

    this->base = b;

}

double Triangle::area() {

    return 0.5 * (this->base * this->height);

}
