
#include <cstdlib>
#include <iostream>

//MUSIC! http://www.youtube.com/watch?v=nDyzVV_e7WM&list=LL5I3vUh2iNfQ3pCU3sodYRA&shuffle=167714



using namespace std;

struct interactObject
{
   std::string nameObject;     
   int objectType;     
   int objectAlignment; //what it is (hostile, friendly, neutral, etc)
   int numUse;  
   int specialType;//normally 0, different for other things
};

struct tile
{
   char tileSymbol;
   interactObject tileEntities;     
   int xCoord;
   int yCoord;     
};

#include "Container.h"
#include "Bases.h"
#include "keys.h"
#include "CursorOptions.h"
#include "Screens.h"
#include "FileIO.h"

#include "Painter.h"
#include "Encrypt.h"



// global variables
#define VERSION_NUM 1




//Keypress keyIO;
bool cursorVisibility = false;
bool cursorSmall = true;





int main(int argc, char *argv[])
{
    //char asdf=176;
    //char asdfg=177;
    //char asdfgh=178;
    //char qwe = 43;
    //cout<<asdfgh<<qwe<<asdfgh<<qwe<<endl;
    //cout<<asdfgh<<asdfgh<<qwe<<asdfgh<<qwe<<endl;
    //219 -> 178 -> 177 -> 176 -> 43
    
   float asdf = 24;
   void* temp;
   char buffer[8];
   buffer[0]='0';buffer[1]='1';buffer[2]='5';buffer[3]='h';//buffer[4]='c';buffer[5]='d';buffer[6]='q';buffer[7]='h';
   //cout<<sizeof(asdf)<<endl;
   *((float*)temp) = *((float*)((buffer)));
   cout<< *((float*)temp)<<endl;
   
   
   
   
   fstream myfile;
   //myfile.open("D:/Asdf.bin",  ios::out | ios::in | ios::binary);
   myfile.open("D:/Asdfg.bin",  ios::out | ios::binary);//creates the file if it doesn't exist yet
   //myfile.write(buffer, 2);
   myfile.close();
   
   
   Encryter Bromo;
   Bromo.keygen();
   MyContainer Aso;
   SelectScreens ScreenControl;
   // int asdf = 0;
    
   // for (int i =1; i<17;i++){
   // asdf=toggleColour(consoleHandle);
   // cout<<"hello"<<asdf<<endl;
   // Sleep(750);
   // }
    
   //ScreenControl.mainScreen(VERSION_NUM);
   //^Important for code n' stuff
    
   //I don't want to reach this, should I remove it?
   //system("PAUSE");
   
   return EXIT_SUCCESS;
}



