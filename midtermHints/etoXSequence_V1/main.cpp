/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  e^x Sequence
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nTerms;//Number of terms in the sequence
    float etox=1;//First Term in the sequence
    float x=2;//x is the power of e^x
    
    //Input or initialize values Here
    nTerms=10;//Calculate the first 10 terms in the sequence
    for(int term=1;term<=nTerms;term++){
        int fact=1;
        for(int i=1;i<=term;i++){
            fact*=i;
        }
        etox+=(pow(x,term)/fact);
    }
    
    //Output the results
    cout<<"e^"<<x<<" = "<<exp(x)<<" ~= "<<etox<<endl;
 
    //Exit
    return 0;
}
