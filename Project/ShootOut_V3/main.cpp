/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 28, 2020, 1:10 PM
 * Purpose:  ShootOut
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Function Library
#include <ctime>     //Time Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Need the power function
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float rndProb();//Random Number Between [0,1]
bool  isLess(float);
void  shootAt(bool &,float);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable Data Types and Constants
    bool aAlive,bAlive,cAlive;
    float aProb,bProb,cProb;
    int cntA,cntB,cntC,nShtOts;
    
    //Initialize the values
    aProb=1.0f/3.0f;
    bProb=1.0f/2.0f;
    cProb=1.0f;
    cntA=cntB=cntC=0;
    nShtOts=1000000;
    
    //Loop and play the game over and over
    for(int shtOut=1;shtOut<=nShtOts;shtOut++){
        aAlive=bAlive=cAlive=true;
        //Play the shoot out game till 1 left standing
        do{
            if(aAlive){
                if(cAlive)      shootAt(cAlive,aProb);
                else if(bAlive) shootAt(bAlive,aProb);
            }
            if(bAlive){
                if(cAlive)      shootAt(cAlive,bProb);
                else if(aAlive) shootAt(aAlive,bProb);
            }
            if(cAlive){
                if(bAlive)      shootAt(bAlive,cProb);
                else if(aAlive) shootAt(aAlive,cProb);
            }
        }while(aAlive+bAlive+cAlive>1);
        cntA+=aAlive;
        cntB+=bAlive;
        cntC+=cAlive;
    }
    
    //Output the Winner
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Aaron   lives "<<100.0f*cntA/nShtOts<<"%"<<endl;
    cout<<"Bob     lives "<<100.0f*cntB/nShtOts<<"%"<<endl;
    cout<<"Charlie lives "<<100.0f*cntC/nShtOts<<"%"<<endl;
    cout<<"Shootouts = "<<nShtOts<<" = "
            <<cntA+cntB+cntC<<endl;

    //Exit stage right!
    return 0;
}

void  shootAt(bool &alive,float prob){
    alive=!isLess(prob);
}

bool  isLess(float prob){
    if(prob>=rndProb())return true;
    return false;
}

float rndProb(){
    return 1.0f*rand()/(pow(2,15)-1);
}