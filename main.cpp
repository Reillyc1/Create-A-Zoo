// main.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <limits>
#include "Animal.h"
#include "Lion.h"
#include "Penguin.h"
#include "Turtle.h"
#include "Zoo.h"

using namespace std;

// constant for base food cost
const double BASE_FOOD_COST = 1000;

int main()
{
  // defining the base cost for each of the animals
   const double LION_COST = 10000;
   const double PENGUIN_COST = 1000;
   const double TURTLE_COST = 100;

  // defining all the necessary parameters
   Zoo z(25000);
   int input;
   int n = 0;  
   int year = 0;
   int purchase;
   int animalType;
   int again;
   bool play = false;
   bool exit = false;

   cout << "Welcome to Create-A-Zoo!" << endl << endl;

   // setprecision is used to display the balance in an easy to read form
   // rather than with scientific notation
   
   cout << fixed << setprecision(2);

   do
   {
     // the user is prompted to enter either a 1 or a 2, corresponding to either play or exit the game
       cout << "Please select an option:" << endl << endl;
       cout << "1. Play" << endl;
       cout << "2. Exit" << endl;
       cin >> input;

      // the following while loop is used to handle invalid inputs, only allowing either a 1 or 2 to be entered
       while(1)
       {
        if(cin.fail())
          {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Invalid Input! Please enter either a 1 or 2: "<<endl;
            cin>>input;
          }
        if(!cin.fail())
        break;
       }

// the following if statements are used to determine the methods used based on how many animals the user wants to add
// the program will add that specific amount of animals, as well as outputting the age, the cost per year to feed
// and also the type of food that the animal will eat based on the virtual feed() method.

       if (input == 1)
       {          
           cout << "You are starting the game with the bank balance $" << z.getBalance() << endl;

           cout << "Enter a number of lions to buy (between 1-5:) " << endl;
           cin >> n;

// the while loop below is used to handle invalid inputs, only allowing numbers between 1 and 5 to be entered

           while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter a number between 1 and 5: "<<endl;
             cin>>input;
           }
           if(!cin.fail())
           break;
           }

           if (n == 1)
           {
               Lion lion1(1, LION_COST, 5 * BASE_FOOD_COST);
               z.addLion(lion1);
               cout << "You have added "<< n << " juvenile lion(s) of age " << lion1.getAge() << " that costs $" << 5 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion1.feed();
               cout << endl;
           }
           if (n == 2)
           {
               Lion lion1(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion2(1, LION_COST, 5 * BASE_FOOD_COST);
               z.addLion(lion1);
               z.addLion(lion2);
               cout << "You have added "<< n << " juvenile lion(s) of age " << lion1.getAge() << " that costs $" << 10 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion1.feed();
               cout << endl;
           }
           if (n == 3)
           {
               Lion lion1(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion2(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion3(1, LION_COST, 5 * BASE_FOOD_COST);
               z.addLion(lion1);
               z.addLion(lion2);
               z.addLion(lion3);
               cout << "You have added "<< n << " juvenile lion(s) of age " << lion1.getAge() << " that costs $" << 15 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion1.feed();
               cout << endl;
           }
           if (n == 4)
           {
               Lion lion1(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion2(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion3(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion4(1, LION_COST, 5 * BASE_FOOD_COST);
               z.addLion(lion1);
               z.addLion(lion2);
               z.addLion(lion3);
               z.addLion(lion4);
               cout << "You have added "<< n << " juvenile lion(s) of age " << lion1.getAge() << " that costs $" << 20 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion1.feed();
               cout << endl;
           }
           if (n == 5)
           {
               Lion lion1(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion2(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion3(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion4(1, LION_COST, 5 * BASE_FOOD_COST);
               Lion lion5(1, LION_COST, 5 * BASE_FOOD_COST);
               z.addLion(lion1);
               z.addLion(lion2);
               z.addLion(lion3);
               z.addLion(lion4);
               z.addLion(lion5);
               cout << "You have added "<< n << " juvenile lion(s) of age " << lion1.getAge() << " that costs $" << 25 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion1.feed();
               cout << endl;
           }

// Once the user has added lions to the zoo, the program will then prompt the user to add between 1-5 penguins

           cout << "Enter a number of penguins to buy (between 1-5): " << endl;
           cin >> n;

           while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter a number between 1 and 5: "<<endl;
             cin>>input;
           }
           if(!cin.fail())
           break;
           }

           if (n == 1)
           {
               Penguin penguin1(1, PENGUIN_COST, BASE_FOOD_COST);
               z.addPenguin(penguin1);
               cout << "You have added "<< n << " juvenile penguin(s) of age " << penguin1.getAge() << " that costs $" << BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin1.feed();
               cout << endl << endl;
           }
           if (n == 2)
           {
               Penguin penguin1(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin2(1, PENGUIN_COST, BASE_FOOD_COST);
               z.addPenguin(penguin1);
               z.addPenguin(penguin2);
               cout << "You have added "<< n << " juvenile penguin(s) of age " << penguin1.getAge() << " that costs $" << 2 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin1.feed();
               cout << endl << endl;
           }
           if (n == 3)
           {
               Penguin penguin1(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin2(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin3(1, PENGUIN_COST, BASE_FOOD_COST);
               z.addPenguin(penguin1);
               z.addPenguin(penguin2);
               z.addPenguin(penguin3);
               cout << "You have added "<< n << " juvenile penguin(s) of age " << penguin1.getAge() << " that costs $" << 3 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin1.feed();
               cout << endl << endl;
           }
           if (n == 4)
           {
               Penguin penguin1(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin2(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin3(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin4(1, PENGUIN_COST, BASE_FOOD_COST);
               z.addPenguin(penguin1);
               z.addPenguin(penguin2);
               z.addPenguin(penguin3);
               z.addPenguin(penguin4);
               cout << "You have added "<< n << " juvenile penguin(s) of age " << penguin1.getAge() << " that costs $" << 4 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin1.feed();
               cout << endl << endl;
           }
           if (n == 5)
           {
               Penguin penguin1(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin2(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin3(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin4(1, PENGUIN_COST, BASE_FOOD_COST);
               Penguin penguin5(1, PENGUIN_COST, BASE_FOOD_COST);
               z.addPenguin(penguin1);
               z.addPenguin(penguin2);
               z.addPenguin(penguin3);
               z.addPenguin(penguin4);
               z.addPenguin(penguin5);
               cout << "You have added "<< n << " juvenile penguin(s) of age " << penguin1.getAge() << " that costs $" << 5 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin1.feed();
               cout << endl << endl;
           }

           cout << "Enter a number of turtles to buy (between 1-5): " << endl;
           cin >> n;

// the same process is repeated for adding turtles, once again handling invalid inputs with the following while loop.

           while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter a number between 1 and 5: "<<endl;
             cin>>input;
           }

           if(!cin.fail())
           break;
           }

           if (n == 1)
           {
               Turtle turtle1(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               z.addTurtle(turtle1);
               cout << "You have added "<< n << " juvenile turtle(s) of age " << turtle1.getAge() << " that costs $" << 0.5 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle1.feed();
               cout << endl;
           }
           if (n == 2)
           {
               Turtle turtle1(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle2(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               z.addTurtle(turtle1);
               z.addTurtle(turtle2);
               cout << "You have added "<< n << " juvenile turtle(s) of age " << turtle1.getAge() << " that costs $" << 1 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle1.feed();
               cout << endl;
           }
           if (n == 3)
           {
               Turtle turtle1(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle2(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle3(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               z.addTurtle(turtle1);
               z.addTurtle(turtle2);
               z.addTurtle(turtle3);
               cout << "You have added "<< n << " juvenile turtle(s) of age " << turtle1.getAge() << " that costs $" << 1.5 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle1.feed();
               cout << endl;
           }
           if (n == 4)
           {
               Turtle turtle1(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle2(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle3(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle4(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               z.addTurtle(turtle1);
               z.addTurtle(turtle2);
               z.addTurtle(turtle3);
               z.addTurtle(turtle4);
               cout << "You have added "<< n << " juvenile turtle(s) of age " << turtle1.getAge() << " that costs $" << 2 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle1.feed();
               cout << endl;
           }
           if (n==5)
           {
               Turtle turtle1(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle2(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle3(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle4(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               Turtle turtle5(1, TURTLE_COST, 0.5 * BASE_FOOD_COST);
               z.addTurtle(turtle1);
               z.addTurtle(turtle2);
               z.addTurtle(turtle3);
               z.addTurtle(turtle4);
               z.addTurtle(turtle5);
               cout << "You have added "<< n << " juvenile turtle(s) of age " << turtle1.getAge() << " that costs $" << 2.5 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle1.feed();
               cout << endl;
           }

           play = true;
           exit = true;

       }
       else if (input == 2)
       {          
           cout << "Exiting from the game..." << endl << endl;
           exit = true;
       }
       else
       {
           cout << "Invalid Input! Please enter either a 1 or 2: " << endl;
       }

   } while (!exit);

// if the user decides to continue playing, the year will increment, the current balance will be displayed, the amount
// of animals currently in the zoo will be displayed, and the user will be notified that they can now buy adult animals
// which are of age 3 years or older, and cost twice as much per year to feed.
   
   while (play)
   {  
       cout << endl << endl << endl << endl;
       cout << "/////////////////////////////////////////////" << endl << endl;
       cout << endl;
       cout << "Year #" << ++year << endl << endl;
       cout << "Current balance: $" << z.getBalance() << endl << endl;

       cout << "You currently have " << z.getTotalAnimals() << " animals in the zoo: " << endl << endl;
       
       cout << "You have the ability to buy adult animals" << endl << endl;

       cout << "Adult animals are 3 years or older" << endl << endl;
       cout << "The food cost for the adult animals is twice that of the juvenile animals: " << endl << endl;
       cout << "Enter 1 if you like to add an adult animal, Enter 2 to exit the game: " << endl << endl;
       cin >> purchase;

// once the input from the user is taken, the while loop is used to handle invalid inputs, only allowing a 
// 1 or 2 to be entered.

       while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter either a 1 or 2"<<endl;
             cin>>purchase;
           }

           if(!cin.fail())
           break;
           }
      
       if (purchase == 1)
       {
           cout << "Please select the type of animal you would like:" << endl;
           cout << "1. Lion" << endl;
           cout << "2. Penguin" << endl;
           cout << "3. Turtle" << endl;          
           cin >> animalType;

// The user will then be prompted to enter either a 1, 2 or 3 corresponding to their desired
// choice of animal.

           while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter either a 1, 2 or 3 "<<endl;
             cin>>animalType;
           }

           if(!cin.fail())
           break;
           }

           if (animalType == 1)
           {
               Lion lion10(3, LION_COST, 10 * BASE_FOOD_COST);
               z.addLion(lion10);
               cout << "You have added an adult lion that costs $" << 10 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The lion will feed on ";
               lion10.feed();
               cout << endl << endl;
           }
           else if (animalType == 2)
           {
               Penguin penguin10(3, PENGUIN_COST, 2 * BASE_FOOD_COST);
               z.addPenguin(penguin10);
               cout << "You have added an adult penguin that costs $" << 2 * BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The penguin will feed on ";
               penguin10.feed();
               cout << endl << endl;
           }
           else if (animalType == 3)
           {
               Turtle turtle10(3, TURTLE_COST, BASE_FOOD_COST);
               z.addTurtle(turtle10);
               cout << "You have added an adult turtle that costs $" << BASE_FOOD_COST << " per year to feed" << endl << endl;
               cout << "The turtle will feed on ";
               turtle10.feed();
               cout << endl << endl;
           }
           else
           {
               cout << "Invalid animal type!" << endl;
           }
       }

// after the first round of adult animals have been added, the user will be prompted 
// to choose to either continue playing or to exit the game. 

       cout << "Enter 1 if you like to keep playing, Enter 2 to confirm exit: ";
       cin >> again;

// the while loop ensures that only a 1 or a 2 can be entered

       while(1)
           {
              if(cin.fail())
           {
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(),'\n');
             cout<<"Invalid Input! Please enter either a 1 or 2 "<<endl;
             cin>>again;
           }

           if(!cin.fail())
           break;
           }
      
// the following if statement is used to determine that if a 1 was not entered, then the game will end
// the final balance will be displayed, as well as the total number of animals in the zoo. 

       if (again != 1)
       {
           cout << "You finished with a balance of: $" << z.getBalance() << endl;
           cout << "You finished with " << z.getTotalAnimals() << " animals in the zoo" <<endl;
           play = false;
       }

// if the game ends due to the balance being 0 or below, the program will notify the user that 
// they do not have enough money to continute playing. 

       else if(z.getBalance() <= 0)
       {
           cout << "You do not have enough money to continue playing the game!" << endl;
           play = false;
       }
   }
   return 0;
}