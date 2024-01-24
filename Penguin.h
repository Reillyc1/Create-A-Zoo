#include "Animal.h"
#pragma once

class Penguin : public Animal
{
public:
   // constructors
   Penguin();
   Penguin(int newAge, double newCost, double newBaseFoodCost);
   virtual void feed() const;
};