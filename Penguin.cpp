#include "Penguin.h"

Penguin::Penguin() : Animal()
{}

// parameterized constructor implementation
Penguin::Penguin(int newAge, double newCost, double newBaseFoodCost)
   : Animal(newAge, newCost, newBaseFoodCost)
{}
void Penguin::feed() const
{
  cout << "Pilchards, Mullet, Anchovies" << endl;
}