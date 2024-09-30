/* 
 * File:   main.cpp
 * Author: <YOUR NAME HERE>
 * Created: <WHEN DID YOU MAKE THIS?>
 * Purpose: <WHY DID YOU MAKE THIS?>
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Science/Conversions only

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option,//Option to choose from menu
    unsigned char nOpts; //Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpts = '3';//In this case we have 3 options
    
	do{ 
        //Display user choice
        cout << "Choose from the options displayed"<<endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Question 3" << endl;
        cout << "etc....." << endl;
        cin  >> option;//Read in the option
		
        //Use a switch case to implement
        switch( option ){
            case '1':
				cout<<endl<<"Question 1 Here"<<endl<<endl;
				break;
            case '2':
				cout<<endl<<"Question 2 Here"<<endl<<endl;
				break;
            case '3':
				cout<<endl<<"Question 3 Here"<<endl<<endl;
				break;
             default:
				cout<<endl<<"Exit Program"<<endl<<endl;
        }
    } while( option <= nOpts );
    
    //Exit the Program
    return 0;
}