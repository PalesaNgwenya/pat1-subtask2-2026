# pat1-subtask2-2026
#include <iostream>
#include <ctime>
using namespace std;

waitForFiveMinutes( ) {
    constant int minutes = 5;
    constant time_t wait_time = minutes * 60 *  time;
    
    time_t start_time = time( ) ;
    while ((time( ) - start_time ) < wait_time);
    
}
int main 
     int temperature1, temperature2, temperature3;
     
     cout<<" Enter the first temperature reading: ";
     cin>> temperature1;
     waitForFiveMinutes( );
     
     cout<< " Enter the second temperature reading:";
     cin>>temperature2;
     
     if (temperature2 -temperature1 > 50){
        cout<< " reduce fryer heat before taking the third reading./n";"
        }
        else if ( temperature2  - temperature1 < 10 )
        cout<< " increase the fryer heat before taking the third reading./n";
        waitForFiveMinutes( );
        
        cout<< "Enter the third temperature reading:"
        cin>> temperature3;
        
        if ( temperature3 >= 150 &&  temperature3 <= 190 ) {
          cout<< " You may start frying your Magwinyas./n ";
          }
          else {
            cout<< " stove is not ready for frying./n" ;
            }
            return 0;
}            
