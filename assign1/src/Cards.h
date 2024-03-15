/* Copyright (c) 1999 by The National Chengchi Univ. All Rights Reserved */

/***************************************************************************
   NAME
     Cards.h
   PURPOSE
     Bitmaps for the poker cards
   NOTES
     Sample solution
   AUTHOR
     Tsai-Yen Li (li@cs.nccu.edu.tw)
   HISTORY
     Tsai-Yen Li - Oct 7, 1999: Created.
***************************************************************************/

/* $Log:$ */

const int kNPip=13;
const int kNSuit=4;
const int kNCards=52;
const int kCardWidth=11;
const int kCardHeight=11;

/* 'x's are special characters that will be replaced in printing */
static char card[kNPip][11][11][11]={{
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","1","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","1","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","2","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","2","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","3","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","3","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","4","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","4","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","5","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","5","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","6","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," ","x"," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," ","x"," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","6","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","7","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," ","x"," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," ","x"," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","7","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","8","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","8","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","9","x"," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," ","9","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","1","0","x"," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," "," "," "," "," "," ","1","0","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","J","x"," "," "," "," "," "," "," ","*",
  "*"," "," ","x","x","x","x","x"," "," ","*",
  "*"," "," "," "," "," ","x"," "," "," ","*",
  "*"," "," "," "," "," ","x"," "," "," ","*",
  "*"," "," "," "," "," ","x"," "," "," ","*",
  "*"," "," "," "," "," ","x"," "," "," ","*",
  "*"," "," ","x"," "," ","x"," "," "," ","*",
  "*"," "," "," ","x","x","x"," "," "," ","*",
  "*"," "," "," "," "," "," "," "," ","J","*",
  "*","*","*","*","*","*","*","*","*","*","*"
},    {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","Q","x"," "," "," "," "," "," "," ","*",
  "*"," "," "," ","x","x","x"," "," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," ","x"," "," "," ","x"," "," ","*",
  "*"," "," ","x"," "," ","x","x"," "," ","*",
  "*"," "," "," ","x","x","x","x"," "," ","*",
  "*"," "," "," "," "," "," "," ","x"," ","*",
  "*"," "," "," "," "," "," "," "," ","Q","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}, {
  "*","*","*","*","*","*","*","*","*","*","*",
  "*","K","x"," "," "," "," "," "," "," ","*",
  "*"," "," ","x"," "," "," ","x","x"," ","*",
  "*"," "," ","x"," "," ","x"," "," "," ","*",
  "*"," "," ","x"," ","x"," "," "," "," ","*",
  "*"," "," ","x","x"," "," "," "," "," ","*",
  "*"," "," ","x"," ","x"," "," "," "," ","*",
  "*"," "," ","x"," "," ","x"," "," "," ","*",
  "*"," "," ","x"," "," "," ","x","x"," ","*",
  "*"," "," "," "," "," "," "," "," ","K","*",
  "*","*","*","*","*","*","*","*","*","*","*"
}};