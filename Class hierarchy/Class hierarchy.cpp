#include <iostream>
#include <windows.h>

#include "Figure.h"
#include "Triangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Quadrilaterral.h"
#include "Rectangle_1.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombs.h"

using std::cout;
using std::cin;
using std::string;

void print_info1(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << "\n\n";

}

void print_info2(Figure* p) {

   cout << p->get_name() << "\n";
   cout << "Стороны: " << "a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c()
      << " d=" << p->get_d() << "\n";
   cout << "Углы: " << "A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C()
      << " D=" << p->get_D() << "\n\n";

}

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   Triangle first_triangle(10, 20, 30, 50, 60, 70);
   Right_Triangle second_triangle;
   Isosceles_Triangle third_triangle;
   Equilateral_Triangle forth_triangle;

   print_info1(&first_triangle);
   print_info1(&second_triangle);
   print_info1(&third_triangle);
   print_info1(&forth_triangle);


   Quadrilaterral first_q(10, 20, 30, 40, 50, 60, 70, 80);
   Rectangle_1 second_q;
   Square third_q;
   Parallelogram forth_q;
   Rhombs fith_q;

   print_info2(&first_q);
   print_info2(&second_q);
   print_info2(&third_q);
   print_info2(&forth_q);
   print_info2(&fith_q);

}