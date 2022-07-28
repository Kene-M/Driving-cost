/*

     This program will use a function to calculate the cost for driving a certain number of miles.

1. Ask the user to enter the miles traveled per gallon.
2. Ask the user to enter the cost per gallon.
3. Call the function that will calculate the cost for driving a number of miles 3 times,
    passing 10, 50, 400 miles and the inputs from the user as arguments.
4. Display the results from the function to the user.

*/


// This program will use a function to calculate the cost for driving a certain number of miles,
// using miles that can be traveled for each gallon, miles driven, and the cost for each gallon.

#include <iostream>
#include <iomanip>

using namespace std ;

double DrivingCost( double, double, double ) ;  // Prototype for driving cost function.

    // Main function.
int main()
{
        // Declare variables.
    double milesPerGallon ;  // To hold the number of miles traveled for each gallon.
    double dollarsPerGallon ;  // To hold the cost for each gallon.

        // Ask the user to enter the miles traveled per gallon.
    cin >> milesPerGallon ;

        // Ask the user to enter the cost per gallon.
    cin >> dollarsPerGallon ;

        // Set the desired output formatting for numbers.
    cout << fixed << setprecision(2) ;

    // Display the results to the user.

        // Call the function, passing 10, 50, 400 miles and the user's inputs as the arguments.
    cout << DrivingCost( milesPerGallon , dollarsPerGallon , 10 ) << " " ;
    cout << DrivingCost( milesPerGallon , dollarsPerGallon , 50 ) << " " ;
    cout << DrivingCost( milesPerGallon , dollarsPerGallon , 400 ) << endl ;

    return 0 ;
}

    // Function for calculating the cost for driving a number of miles.
double DrivingCost( double milesPerGallon, double dollarsPerGallon, double milesDriven )
{
        //  Return the cost to the user.
    return milesDriven / milesPerGallon * dollarsPerGallon ;
}

/*

    RUN 1:

    Input: milesPerGallon = 30
           dollarsPerGallon = 45
           Output for 10, 50, 400 miles consecutively.

30
45
15.00 75.00 600.00

    --------------------------------------

    RUN 2:

    Input: milesPerGallon = 33.987
           dollarsPerGallon = 40.899
           Output for 10, 50, 400 miles consecutively.

33.987
40.899
12.03 60.17 481.35

    -----------------------------------------

    RUN 3:

    Input: milesPerGallon = 39
           dollarsPerGallon = 49999.8
           Output for 10, 50, 400 miles consecutively.

39
49999.8
12820.46 64102.31 512818.46

    ------------------------------------------

    RUN 4:

    Input: milesPerGallon = 34566.98
           dollarsPerGallon = 346765.8
           Output for 10, 50, 400 miles consecutively.

34566.98
346765.8
100.32 501.59 4012.68

*/
