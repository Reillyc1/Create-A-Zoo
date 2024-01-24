#include "Animal.h"
#pragma once

class Lion : public Animal
{
public:
   // constructors
   Lion();
   Lion(int newAge, double newCost, double newBaseFoodCost);
   virtual void feed() const;
};


