
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <sstream>

//MUSIC! http://www.youtube.com/watch?v=nDyzVV_e7WM&list=LL5I3vUh2iNfQ3pCU3sodYRA&shuffle=167714



//using namespace std;

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

struct tester
{
int a;
int b;
int c;
int d;
char e;
char f;
};

#include "Container.h"
#include "Bases.h"
#include "keys.h"
#include "CursorOptions.h"
#include "Screens.h"
#include "WindowsIntegration.h"
#include "stringFunctions.h"

#include "treeType.h"



#include "Painter.h"
#include "Encrypt.h"
#include "FileIO.h"


// global variables
#define VERSION_NUM 1




//Keypress keyIO;
bool cursorVisibility = false;
bool cursorSmall = true;





void swap(int*a, int*b)
{
int temp = *a;
*a=*b;
*b = temp;
}


int main(int argc, char *argv[])
{
    srand (time(NULL));
    //cout<<asdfgh<<qwe<<asdfgh<<qwe<<endl;
    //cout<<asdfgh<<asdfgh<<qwe<<asdfgh<<qwe<<endl;
    //219 -> 178 -> 177 -> 176 -> 43
   int poiu = 4321;
//   poi(4, &poiu);

   float asdf = 24;
   int asdfs = 564;
   void* temp;
   char buffer[16];
   buffer[0]='0';buffer[1]='1';buffer[2]='5';buffer[3]='h';//buffer[4]='c';buffer[5]='d';buffer[6]='q';buffer[7]='h';
   buffer[8]='Q';buffer[9]=0;

   FileIO myFile;//FileIO has been tested, and appears to work...
   //However, there is more testing to be done!

//   myFile.textOpenFile("Data/Maps/Thing.txt", false);
//   std::string them;
//   myFile.readLine(&them);
//   cout<<them<<endl;

   Keypress KeyIn;
   short a = 0;

      if(KeyIn.get_code(4)){
         cout<<"One!"<<" ";
      }
      //Nothing is 0, true is -127/65408, and toggled is 1, (toggled and down is 65409/-128)

   /*
   COptions Ebeko;
   Ebeko.changeCurrentWindowText("Rahfsdkhf");
   system("PAUSE");
   SetConsoleTitle("Adventure Game");
   */
   //Both work, but the first will only work if the front window is this one.
   //The second one always works.


//while (true){
//   a = KeyIn.get_current_code(12);
//   if (a != 0&&a != -127&&a!=1){
//      cout<<a<<"<<"<<endl;
//      break;
//   }
//}

   winCnrl Dempo;
   Encrypter Bromo;
   bool cipherType[5];
   //Bromo.keygenBytes(6, "");
//   Bromo.keygenInts(cipherType, 4, std::string("MyFirstCipher"));
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\A", 26);
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\B", 26);
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\C", 26);
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\D", 26);
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\E", 26);
//   Bromo.createAllCiphers(cipherType, 6, NULL, "Data\\F", 26);
   std::string tempst = "ABCDEFAAA";
   //intRotor intsStuff[50];
   //cout<<Bromo.readCiphersFromFiles(tempst, intsStuff, "")<<"!!!"<<endl;
   //cout<<(char)248<<endl;

//   intRotor rotorArray[16]; bool sdfg[5];
//   FileIO newFile; newFile.textOpenFile("Data\\A\\FirstCipher0.acp", false);
//   int ciphersTaken = Bromo.getCiphersFromFile(rotorArray, sdfg, &newFile, 16);

//   for (int i=0; i<ciphersTaken; i++){
//      for (int j=0; j<(rotorArray[i].rotorLength);j++){
//          cout<<rotorArray[i].mapping[j]<<" ";
//      }
//      cout<<endl;
//   }

std::string folderStuff = "Stuff\\";
std::string folderStuffs = "asdfasdf";

std::string tempNameFolder = "asdfasdf";
//Dempo.directoryPath = "D:\\Test\\";
//Dempo.deleteFolder("asdfasdf", NULL);
//cout<<Dempo.deleteFolder(&folderStuff, &tempNameFolder)<<endl;


//std::string something = "D:/Test/Stuff/";
//std::string something2 = "D:/Test/";
//std::string something3 = "Stuff/";
//wchar_t stuffs[512];


//int lengthWString = Dempo.charPToWCharP(something.c_str(), stuffs, 512);
//stuffs

//Returns one is true, else 0;
//cout<<RemoveDirectory(something.c_str())<<endl;

//std::vector<WIN32_FIND_DATA> uaehr;


//cout<<Dempo.findAllFilesInFolder(something.c_str(), NULL, &uaehr)<<" asdf"<<endl;
//^ Yey! It works now!
//cout<<Dempo.deleteFolder(NULL, &something3)<<endl;
//cout<<RemoveDirectory("D:\\Test\\Stuff\\qwer\\qwerqwer")<<" aukshfiuh "<<"D:\\Test\\Stuff\\qwer\\qwerqwer"<<endl;
//uaehr.clear();



//cout<<Dempo.findAllFilesInFolder(something.c_str(), NULL, &uaehr)<<" asdf"<<endl;

//cout<<Dempo.getExecutablePath()<<endl;

//std::string ijn = "Testing stuff";



//Dempo.charPToWCharP(ijn.c_str(), stuffs, 512);

int counters = 0;


   linkedList <int> Aso();
   SelectScreens ScreenControl;
   //cout<<Dempo.deleteFile(Dempo.getExecutablePath(), false)<<endl;

   Aso.

   //ScreenControl.mainScreen(VERSION_NUM);
   //^Important for code n' stuff


//
//
//   treeType <int> aephoro("asdf");
//
//   aephoro.addNode("node1");
//   aephoro.addNode("node2");
//
//   treeType <int> * treePointer;
//   treePointer = aephoro.getNodeAtIndex(1);
//   if (treePointer){
//      cout<<treePointer -> getName()<<endl;
//      treePointer -> addNode("node3");
//   }
//   treePointer = treePointer -> getNodeAtIndex(0);
//
//   cout<<treePointer -> listNodePath()<<endl;//It works!
//
//   std::string nodePath = treePointer -> listNodePath();
//
//   stringFunc asdfa;
//
//   std::vector <std::string> tokenVector = asdfa.parseAllTokens(nodePath, ". ");
//
//   for (int i=0; i<tokenVector.size(); i++){
//      cout<<tokenVector[i]<<" -> ";
//   }
//   cout<<endl;
//




   cout<<"I'm done!"<<endl;
   system("PAUSE");



   return EXIT_SUCCESS;
}















