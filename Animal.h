#include <iostream>
#include <string>
#pragma once

using namespace std;

class Animal
{
public:  
   Animal();
   Animal(int newAge, double newCost, double newBaseFoodCost);
   int getAge();
   double getCost();
   double getBaseFoodCost();
   void setAge(int newAge);
   void setCost(double newCost);
   void setBaseFoodCost(double newBaseFoodCost);
   virtual void feed() const = 0;
private:
   int age;
   double cost;
   double baseFoodCost;
};