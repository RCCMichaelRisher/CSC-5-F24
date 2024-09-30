/* 
 * File:   main.cpp
 * Author: <YOUR NAME HERE>
 * Created: <WHEN DID YOU MAKE THIS?>
 * Purpose: <WHY DID YOU MAKE THIS?>
 */

// System libraries
#include <iostream>
#include <iomanip>

using namespace std;

// user libraries (if any)

// global constants
// used for science, math, conversion, dimensions. Things that never change

// function prototypes

//execution starts here at the main function
int main( int argc, char** argv ) {    
    // declare variables
    bool A;
    bool B;
    int w;
    // initialize variables
    w = 8; //width of spacing
    // process the inputs -> outputs (IO)
    
    // display inputs/outputs
    cout << setw( w ) << "A" << setw( w ) << "B" << setw( w ) << "!A" << setw( w ) 
            << "!B" << setw( w ) << "A&&B" << setw( w ) << "A||B" << setw( w ) 
            << "A^B" << setw( w ) << "A^B^B" << setw( w ) << "A^B^A" << setw( w ) 
            << "!(A&&B)" << setw( w ) << "!A||!B" << setw( w ) << "!(A||B)" 
            << setw( w ) << "!A&&!B" << endl;
    A = true;
    B = true;
    cout << setw( w ) << A << setw( w ) << B;
    cout << setw( w ) << !A;//YOUR CODE HERE
    cout << endl;
    
    
    A = false;
    B = false;
    cout << setw( w ) << A << setw( w ) << B;
    //YOUR CODE HERE
    cout << endl;
    
    
    A = false;
    B = true;
    cout << setw( w ) << A << setw( w ) << B;
    //YOUR CODE HERE
    cout << endl;
    
    A = false;
    B = false;
    cout << setw( w ) << A << setw( w ) << B;
    //YOUR CODE HERE
    cout << endl;
    
    // clean up memory and files
    
    // exit the Program
    return 0;
}