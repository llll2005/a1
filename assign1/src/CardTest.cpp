/* Copyright (c) 1999 by The National Chengchi Univ. All Rights Reserved */

/***************************************************************************
   NAME
     CardTest.cc
   PURPOSE
     Testing card displaying
   NOTES

   AUTHOR
     Tsai-Yen Li (li@cs.nccu.edu.tw)
   HISTORY
     Tsai-Yen Li - Oct 7, 1999: Created.
***************************************************************************/
/* $Log:$ */

#include <cstdlib>
extern "C" {
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <assert.h>
#include <ctype.h>
}

#include <iostream>
#include "AnsiPrint.h"
#include "Cards.h"


using namespace std;

const int H = 0,  S = 1, D = 2, C = 3, J = 10, Q = 11, K = 12;

void PrintMyID(const char *studId) {
  char *str= new char[sizeof(studId)+5];
  // we put string in a buffer first 
  sprintf(str,"ID: %s",studId);
  // print the buffer out with color
  AnsiPrint(str,yellow,red, true, true);
  cout << endl << endl;
  delete [] str;
}

void PrintUsage(const char *progName) {
  assert(progName);
  cout << "Usage: " << progName << " NCards [Seed]" << endl;
}

int main(int argc, char **argv) {
  cout << "test" << endl ;
  for(int i=0; i<11; i++) cout << "\"" << card[0][1][i][0] << "\", " << endl; 
  cout << "test end" << endl;
  long seed;
  int numToPrint=0;  // number of cards to draw 
  if (argc==3) {
    seed=atoi(argv[2]); // the third argument is the seed
    numToPrint=atoi(argv[1]); // the second argument is the number of cards
  } else if (argc==2) {
    numToPrint=atoi(argv[1]);
  } else {
    PrintUsage(argv[0]);
    exit(-1);
  }

  int cardAlreadyPrint[kNSuit][kNPip];
  int list[numToPrint][2];
  for(int i = 0; i < kNSuit; i++){
    for(int j = 0; j < kNPip; j++){
      cardAlreadyPrint[i][j] = 0;
    }
  }

  int randomIcon = 0, randomCardNum = 0;
  for(int i = 0; i < numToPrint; i++){
    srand(seed);
    list[i][0] = rand()%kNSuit; //set icon
    list[i][1] = rand()%kNPip; //set card num
    if(cardAlreadyPrint[list[i][0]][list[i][1]] == 1) i--;
    seed++;
    cardAlreadyPrint[list[i][0]][list[i][1]] = 1;
  }
  int lines = numToPrint/5;
  if(numToPrint%5>0) lines++;
  int lineLength[lines];
  for(int i = 0; i < lines; i++) lineLength[i] = 5;
  if(numToPrint%5>0) lineLength[lines-1] = numToPrint%5;

  for(int line = 0; line < lines; line++){
    for(int cardHeight = 0; cardHeight < kCardHeight; cardHeight++){
      for(int picOfOneline = 0; picOfOneline < lineLength[line]; picOfOneline++){
        for(int col = 0; col < kCardWidth; col++){
          char * locale = &card[list[line*5+picOfOneline][1]][cardHeight][col][0];
          if(card[list[line*5+picOfOneline][1]][cardHeight][col][0] != 'x'){
            if(list[line*5+picOfOneline][0] == C || list[line*5+picOfOneline][0] == S) AnsiPrint(locale, black , white , 1 , 1);
            else AnsiPrint(locale, red , white , 1 , 1);
          }
          else{
            if(list[line*5+picOfOneline][0] == H){
              AnsiPrint("H", red , white , 1 , 1);
            }
            else if(list[line*5+picOfOneline][0] == S){
              AnsiPrint("S", black , white , 1 , 1);
            }
            else if(list[line*5+picOfOneline][0] == D){
              AnsiPrint("D", red , white , 1 , 1);
            }
            else if(list[line*5+picOfOneline][0] == C){
              AnsiPrint("C", black , white , 1 , 1);
            }
            else {
              cout << " list = " << list[line*5+picOfOneline][1] ;
              cout << ", line = " << line << ", pic = " << picOfOneline ;
            }
          }
        }
      }
      cout << endl;
    }
  }



        /*char * locale = &card[list[colCnt][1]][kCardHeight][kCardWidth+1]
        if(list[colCnt][0] == C || list[colCnt][0] == S) AnsiPrint(locale, black , white , 1 , 1);
        else AnsiPrint(locale, red , white , 1 , 1);*/


  /*  random test
  for(int i = 0; i < numToPrint; i++){
    cout << "icon: " << list[i][0] << ", num: " << list[i][1]+1 << endl;
  }*/
  PrintMyID("112703013");
  return 0;

}
