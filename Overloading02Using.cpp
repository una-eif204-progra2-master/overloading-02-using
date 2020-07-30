/*
 * =====================================================================================
 *
 *       Filename:  Overloading02Using.cpp
 *
 *    Description:  Basic example of overloading with using declaration
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mike@guzmanalan.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
  int num;
  Base(const int _num): num(_num){}
  void doSomething(int num) {
    std::cout << "INT - Base::doSomething(" << num << ")\n" << std::endl;
  }
};

struct Derived : Base {
  //Derived(const int _num) : Base(_num) {} // redundant
  using Base::Base;
  using Base::doSomething;
  void doSomething(double num) {
    std::cout << "DOUBLE - Base::doSomething(" << num << ")\n" << std::endl;
  }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
  std::cout << "Welcome to the UNA!" << std::endl;

  Derived derived(1);

  derived.doSomething(1);
  derived.doSomething(1.2);

  std::cout << "CONSTRUCTOR - (" << derived.num << ")\n" << std::endl;  
}  // end function main