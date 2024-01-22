#pragma once

#include <iostream>

using std::string;

class Figure {
protected:

   string name = "Фигура";
   short a, b, c, d, A, B, C, D;
public:

   string get_name();
   short get_a();
   short get_b();
   short get_c();
   short get_A();
   short get_B();
   short get_C();
   short get_d();
   short get_D();

   Figure();

};