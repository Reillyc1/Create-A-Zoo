#include "Turtle.h"

Turtle::Turtle() : Animal()
{}

// parameterized constructor implementation
Turtle::Turtle(int newAge, double newCost, double newBaseFoodCost)
   : Animal(newAge, newCost, newBaseFoodCost)
{}
void Turtle::feed() const
{
  cout << "Worms, Crickets, Nightcrawlers" << endl;
}