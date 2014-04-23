
#ifndef ENCRYPT_H
#define ENCRYPT_H 

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>        

using namespace std;

typedef struct rotor{
   int setNum;//Different rotors in different sets
   int numChars;//number of characters on the rotor
   std::string mapping;//gives the mapping rules. For example the map DBCA means ADCB -> DACB
   
   int currentNum;//Where the "Front" of the rotor should be.
};

class Encryter
{

public:

int keygen();
//Enigma machine like cipher, not really too secure...

//http://codereview.stackexchange.com/questions/44196/enigma-simulator-performance
//http://www.dreamincode.net/forums/topic/233977-enigma-machine-rotors/
//http://en.wikipedia.org/wiki/Typex

//Can I add more ciphers? Fewer?














};

#endif