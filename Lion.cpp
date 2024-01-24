#include "Lion.h"

Lion::Lion() : Animal()
{}

// constructors
Lion::Lion(int newAge, double newCost, double newBaseFoodCost)
   : Animal(newAge, newCost, newBaseFoodCost)
{}
void Lion::feed() const
{
  cout << "Beef, Chicken and Rabbit" << endl;
}