#include "Zoo.h"

Zoo::Zoo()
{
   lionsCapacity = 10;
   penguinsCapacity = 10;
   turtlesCapacity = 10;

   lionsArr = new Lion[lionsCapacity];
   penguinsArr = new Penguin[penguinsCapacity];
   turtlesArr = new Turtle[turtlesCapacity];

   balance = 1000000;
   lionsCount = 0;
   penguinsCount = 0;
   turtlesCount = 0;  
}

// parameterized constructor implementation
Zoo::Zoo(double initialBalance)
{
   lionsCapacity = 10;
   penguinsCapacity = 10;
   turtlesCapacity = 10;

   lionsArr = new Lion[lionsCapacity];
   penguinsArr = new Penguin[penguinsCapacity];
   turtlesArr = new Turtle[turtlesCapacity];

   balance = initialBalance;
   lionsCount = 0;
   penguinsCount = 0;
   turtlesCount = 0;  
}

// addLion function implementation
void Zoo::addLion(Lion newLion)
{
   if (lionsCount == lionsCapacity)
   {
       Lion* resizedArr = new Lion[2 * lionsCapacity];
       for (int i = 0; i < lionsCapacity; i++)
       {
           resizedArr[i] = lionsArr[i];
       }
       delete[] lionsArr;

       lionsCapacity = 2 * lionsCapacity;
       lionsArr = resizedArr;
   }

   lionsArr[lionsCount] = newLion;  
   lionsCount++;  
   balance = balance - newLion.getCost();
}

// addPenguin function implementation
void Zoo::addPenguin(Penguin newPenguin)
{
   if (penguinsCount == penguinsCapacity)
   {
       Penguin* resizedArr = new Penguin[2 * penguinsCapacity];
       for (int i = 0; i < penguinsCapacity; i++)
       {
           resizedArr[i] = penguinsArr[i];
       }
       delete[] penguinsArr;

       penguinsCapacity = 2 * penguinsCapacity;
       penguinsArr = resizedArr;
   }
  
   penguinsArr[penguinsCount] = newPenguin;  
   penguinsCount++;
   balance = balance - newPenguin.getCost();
}

// addTurtle function implementation
void Zoo::addTurtle(Turtle newTurtle)
{
   if (turtlesCount == turtlesCapacity)
   {
       Turtle* resizedArr = new Turtle[2 * turtlesCapacity];
       for (int i = 0; i < turtlesCapacity; i++)
       {
           resizedArr[i] = turtlesArr[i];
       }      
       delete[] turtlesArr;

       turtlesCapacity = 2 * turtlesCapacity;
       turtlesArr = resizedArr;
   }

   turtlesArr[turtlesCount] = newTurtle;  
   turtlesCount++;
   balance = balance - newTurtle.getCost();
}

// setBalance function implementation
void Zoo::setBalance(double newBalance)
{
   balance = newBalance;
}

// getBalance function implementation
double Zoo::getBalance()
{
   return balance;
}

int Zoo::getTotalAnimals()
{
  return lionsCount+penguinsCount+turtlesCount;
}