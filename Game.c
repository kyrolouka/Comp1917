/*
 *  Game.h
 *  1917 v1.07
 *   edit log -
 *    1.07 badly-drawn map region and dice values comment
 *    1.06 expanded comments on newGame(), explain regionID
 *    1.05 expanded the comments explaining isLegalAction()
 *    1.04 expanded path description, starting direction
 *    1.03 edited comment for getmostpubs() 30-apr-14
 *    1.02 abstract ADT version of Game  
 *    1.00 concrete game type version         
 *  Do not alter this file
 *
 *  Created by Richard Buckland on 20/04/14.
 *  Licensed under Creative Commons SA-BY-NC 3.0.  
 *
 */

#include <stdlib.h>

#define NUM_UNIS 3

// player ID of each university
#define NO_ONE 0
#define UNI_A 1
#define UNI_B 2
#define UNI_C 3

// contents of an ARC
#define VACANT_ARC 0
#define ARC_A 1
#define ARC_B 2
#define ARC_C 3

// contents of a VERTEX
#define VACANT_VERTEX 0  
#define CAMPUS_A 1
#define CAMPUS_B 2
#define CAMPUS_C 3
#define GO8_A 4
#define GO8_B 5
#define GO8_C 6

// action codes
#define PASS 0
#define BUILD_CAMPUS 1
#define BUILD_GO8 2
#define OBTAIN_ARC 3
#define START_SPINOFF 4
#define OBTAIN_PUBLICATION 5
#define OBTAIN_IP_PATENT 6
#define RETRAIN_STUDENTS 7

// disciplines
#define STUDENT_THD 0
#define STUDENT_BPS 1
#define STUDENT_BQN 2
#define STUDENT_MJ  3
#define STUDENT_MTV 4
#define STUDENT_MMONEY 5

#define NUM_REGIONS 19
#define PATH_LIMIT 150

#define TRUE 1
#define FALSE 0

#include "Game.h"




Game newGame (int discipline[], int dice[]) {
   return NULL;
}

void disposeGame (Game g) {
}

void makeAction (Game g, action a) {
}

void throwDice (Game g, int diceScore) {
}

int getDiscipline (Game g, int regionID) {
   return 0;
}

int getDiceValue (Game g, int regionID) {
   return 0;
}

int getMostARCs (Game g) {
   return 0;
}

int getMostPublications (Game g) {
   return 0;
}

int getTurnNumber (Game g) {
   return 0;
}

int getWhoseTurn (Game g) {
   return 0;
}

int getCampus(Game g, path pathToVertex) {
   return 0;
}

int getARC(Game g, path pathToEdge) {
   return 0;
}

int isLegalAction (Game g, action a) {
   return 0;
}

int getKPIpoints (Game g, int player) {
   return 0;
}

int getARCs (Game g, int player) {
   return 0;
}

int getGO8s (Game g, int player) {
   return 0;
}

int getCampuses (Game g, int player) {
   return 0;
}

int getIPs (Game g, int player) {
   return 0;
}

int getPublications (Game g, int player) {
   return 0;
}

int getStudents (Game g, int player, int discipline) {
   return 0;
}

int getExchangeRate (Game g, int player,
                     int disciplineFrom, int disciplineTo) {
   return 0;
}
