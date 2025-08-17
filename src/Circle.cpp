#include "../include/Circle.h"
#include <iostream>
const double Circle::M_PI = 3.14159265358979323846;
int main(){
    
    Circle c;
    std::cout << "Area of circle is: " << c.getArea(5) << std::endl;
    // c.getArea(5);
    return 0;
}