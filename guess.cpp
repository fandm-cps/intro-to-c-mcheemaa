
#include <stdio.h> //These are C libraries

#include <stdlib.h>
#include <iostream>

using namespace std;

int main()

{

  int inNumber = 0;

  do{

    cout << "This is a number guessing game. Please enter any number from 0 to 100\n"<< endl;

    cin >> inNumber;

    cout << "\n";

    if (inNumber == 6){

      cout << "Hurray. You guessed the number right" << endl;

      break;
    }

    else{

      cout << "Please try again \n";
    }

  }

  while (inNumber != 6);


  cout << "Goodbye!" << endl;

  return 0;
}

 
