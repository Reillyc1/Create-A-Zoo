#include "Animal.h"

using namespace std;

Animal::Animal()
{
   age = 0;
   cost = 0.0;
   baseFoodCost = 0.0; 
}

// Implementation of constructor
Animal::Animal(int newAge, double newCost, double newBaseFoodCost)
{
   age = newAge;
   cost = newCost;
   baseFoodCost = newBaseFoodCost;
}

// Implementation for the "getAge" function
int Animal::getAge()
{
   return age;
}

// Implementation for the "getCost" function
double Animal::getCost()
{
   return cost;
}

// Implementation for the "getBaseFoodCost" function
double Animal::getBaseFoodCost()
{
   return baseFoodCost;
}

// setAge function implementation
void Animal::setAge(int newAge)
{
   age = newAge;
}

// setCost function implementation
void Animal::setCost(double newCost)
{
   cost = newCost;
}

// setBaseFoodCost function implementation
void Animal::setBaseFoodCost(double newBaseFoodCost)
{
   baseFoodCost = newBaseFoodCost;
}
