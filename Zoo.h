#include "Lion.h"
#include "Penguin.h"
#include "Turtle.h"
#pragma once


class Zoo
{
public:
   // constructor
   Zoo();
   Zoo(double initialBalance);

   void addLion(Lion newLion);
   void addPenguin(Penguin newPenguin);
   void addTurtle(Turtle newTurtle);
   void setBalance(double newBalance);
   double getBalance();
   int getTotalAnimals();

private:
   // member variables and arrays
   Lion *lionsArr;
   Penguin *penguinsArr;
   Turtle *turtlesArr;
   int lionsCapacity;
   int penguinsCapacity;
   int turtlesCapacity;
   int lionsCount;
   int penguinsCount;
   int turtlesCount;  
   double balance;
};