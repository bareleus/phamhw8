#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "derek_LED.h"

using namespace std;

int main(int argc, char* argv[]){
   if(argc!=4){
	cout << "Usage is myBlink <command>" << endl;
        cout << "   command is one of: on LED_number numbers_of_blinks , off, flash, blink LED number and n times, or status" << endl;
	cout << " e.g. myBlink on 1 0 (The last number can be any integer)" << endl;
	cout << " e.g. myBlink flash 1 2" << endl;
	cout << " e.g. myBlink.cpp blink 1 2" << endl;
	return 4;
   }
   cout << "Starting the myBlink program" << endl;
   string cmd(argv[1]);
   string cmd2(argv[2]);
   LED leds[4] = { LED(0), LED(1), LED(2), LED(3) };
   
   // Check statements
   if(cmd == "on"){leds[stoi(cmd2)].turnOn();}
   else if(cmd == "off"){leds[stoi(cmd2)].turnOff();}
   else if(cmd == "flash"){leds[stoi(cmd2)].flash("100");}
   else if(cmd == "blink"){leds[stoi(cmd2)].blink(stoi(argv[3]));}
   else if(cmd == "status"){leds[stoi(cmd2)].outputState();}
   else{cout << "Invalid command!" << endl;}

   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
