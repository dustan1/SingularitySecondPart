
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

typedef struct tester
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
#include "FileIO.h"

#include "Painter.h"
#include "Encrypt.h"



// global variables
#define VERSION_NUM 1




//Keypress keyIO;
bool cursorVisibility = false;
bool cursorSmall = true;

int poi(int size, ...)
{
   va_list ap;
   int j=0;
   char* asdf;
   va_start(ap, size); //Requires the last fixed parameter (to get the address)
   asdf=va_arg(ap, char*); //Requires the type to cast to. Increments ap to the next argument.
   va_end(ap);
   cout<<sizeof(asdf)<<"asdfasdf"<<endl;
   int counter=0;
   
   for (int i=0;i<(size/4)-1;i++){
      cout<<(int)((unsigned char)(*(asdf+i*4)))<<"."<<endl; 
      counter=i;
   }
   cout<<(char)((unsigned char)(*(asdf+counter*(4+1)+1)))<<"."<<endl; 
   cout<<(char)((unsigned char)(*(asdf+counter*(4+1)+2)))<<"."<<endl;
   //Yey! I can read/write structures!
   
   //for (int i=3;i>=0;i--){
//      cout<<(int)((unsigned char)(*(asdf+i)))<<"."<<endl; 
//      j = (j*256) + (int)((unsigned char)(*(asdf+i)));
//   }
   
//   
   
   cout<<j<<"qqq"<<endl;
}

std::string createTestCases(int testCaseSize)
{
   std::string output;
   for (int i=0; i<testCaseSize;i++){
      output+= rand() % 255 + 1;
   }
   
   return output;
}

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
   poi(4, &poiu);

   float asdf = 24;
   int asdfs = 564;
   void* temp;
   char buffer[16];
   buffer[0]='0';buffer[1]='1';buffer[2]='5';buffer[3]='h';//buffer[4]='c';buffer[5]='d';buffer[6]='q';buffer[7]='h';
   buffer[8]='Q';buffer[9]=0;
   //cout<<sizeof(asdf)<<endl;
   //*((float*)(buffer)) = asdf;
//   *((int*)(buffer+sizeof(float))) = asdfs;
//   cout<< *((float*)buffer)<<endl;
//   cout<< *((int*)(buffer+sizeof(float)))<<endl;
   
   
//   char buffer2[5];
//   buffer2[4]=0;
//   void* test;
//   test = (char*)asdfs;
//   
//   unsigned char bytes[4];
//unsigned long n = 175;
//
//
//for (int i=0;i<sizeof(int);i++){
//   bytes[0] = (n >> 24) & 0xFF;
//   bytes[1] = (n >> 16) & 0xFF;
//   bytes[2] = (n >> 8) & 0xFF;
//   bytes[3] = n & 0xFF;
//}
//   cout<<buffer2<<endl;
   
//   std::string empty;
//   std::string ijn = "zxcv";
//   cout<<empty<<endl;
//   empty+="asdf";
//   cout<<empty<<" "<<empty.length()<<endl;
//   empty+="qwer";
//   cout<<empty<<" "<<empty.length()<<endl;
//   empty+=ijn;
//   cout<<empty<<" "<<empty.length()<<endl;
   
   //fstream myfile;
   //myfile.open("D:/Asdf.bin",  ios::out | ios::in | ios::binary);
   //myfile.open("Data/Asdfg.bin",  ios::out | ios::binary);//creates the file if it doesn't exist yet
   //myfile.write(buffer, 2);
   //myfile.close();
   
   FileIO myFile;//FileIO has been tested, and appears to work...
   
   myFile.textOpenFile("Data/PasswordTest.txt", false);
   
   
   Encryter Bromo;
   system("PAUSE");
   std::string password = "TESING STUFF";
   std::string newPass;
   std::vector<std::string> testCases ;
   //std::getline (std::cin, password);//Unlimited size of passwords
   //std::cin.getline(password, 64);//Passwords are up to 64 chars in size
   //Bromo.passwordToInt(password);
   
   int k=0;
   
   for (int testCaseSize=5; testCaseSize<10; testCaseSize++){
      while(true){
         testCases.push_back(createTestCases(testCaseSize)); 
         if (k>5){
         k=0; break;   
         k++;
         }   
      }
   }
   for (int i=0; i<testCases.size(); i++){
      cout<<i<<endl;
      newPass.clear();
      newPass = testCases[i];
      if (newPass.empty()) break;
      cout<<newPass<<endl;
      cout<<Bromo.passwordToHashInt(newPass)<<" Hash things!"<<endl;
      
   }
   //srand ((unsigned int)key);
   
   //Bromo.keygenChars();
//   char qwer[16]="asd";
//   char* keyName=qwer;
//   std::string fileName = "Data/";
//   fileName += keyName;
//   cout<<fileName<<endl;;
   
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
   
   
   system("PAUSE");
   
   return EXIT_SUCCESS;
}



