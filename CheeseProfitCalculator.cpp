/*
   CheeseProfitCalculator.cpp : A C++ program that calculates the production cost, profit, and containers needed to hold a given amount of kilograms of cheese.
   (A programming problem from my C++ course).

 **********************************************************************************************************************************************************************************************

A cheese container can hold 2.76 kg of cheese. Each evening, a fromager ships containers of cheese to a local grocery store. The cost of producing one container of cheese is $4.12,
and the profit of each container of cheese is $1.45.

 Write a program that does the following:

 1. Prompts the user to enter the total amount of cheese produced each evening.
 2. Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)
 3. Outputs the cost of producing the cheese.
 4. Outputs the profit for producing cheese.

***********************************************************************************************************************************************************************************************

*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;




// Declare constants to hold the production cost and profit for one container of cheese, as well as the kg of cheese one container can hold.
const float PRODUCTION_COST_PER_CONTAINER = 4.12;
const float PROFIT_PER_CONTAINER = 1.45;
const float KG_PER_CONTAINER = 2.76;


int main()
{

    // Display the heading in the console
    cout << "**************************************************************************" << endl;
    cout << "***************** Welcome to the Cheese Profit Calculator *****************" << endl;
    cout << "**************************************************************************" << endl;


    // Declare & initialize variables
    float userEntry = 0;            // Variable to hold the amount of cheese produced entered by the user
    int totalContainers = 0;        // Variable to hold the number of containers needed
    float totalCost = 0;            // Variable to hold the total production cost
    float totalProfit = 0;          // Variable to hold the total profit



    cout << "\nPlease enter the total kilograms of cheese produced:  ";                   // Prompt the user to enter a value for kg of cheese produced
    cin >> userEntry;                                                                     // Store the entered value in the userEntry variable 



    // Calculate the number of containers needed and cast the result to an int value 
    // Format the output display so that the totalContainers value is at the right of the console
    totalContainers = static_cast<int>(userEntry / KG_PER_CONTAINER);
    cout << "\nThe number of containers needed is: " << setw(37) << totalContainers << endl;

    // Calculate the total production cost
    // Format the output display so that the totalCost value is aligned at the right, set the totalCost output to two decimal places
    totalCost = totalContainers * PRODUCTION_COST_PER_CONTAINER;
    cout << "The cost of producing " + to_string(totalContainers) + " container(s) of cheese is: " << setw(15) << fixed << setprecision(2) << "$ " << totalCost << endl;

    // Calculate the total profit
    // Format the output display so that the totalProfit value is aligned at the right, set the totalProfit output to two decimal places
    totalProfit = totalContainers * PROFIT_PER_CONTAINER;
    cout << "The profit from " + to_string(totalContainers) + " container(s) of cheese is: " << setw(21) << fixed << setprecision(2) << "$ " << totalProfit << endl;




    system("pause");
    return 0;

}