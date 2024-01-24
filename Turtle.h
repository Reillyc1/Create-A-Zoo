#include "Animal.h"
#pragma once


class Turtle : public Animal
{
public:
   // constructors
   Turtle();
   Turtle(int newAge, double newCost, double newBaseFoodCost);
   virtual void feed() const;
};