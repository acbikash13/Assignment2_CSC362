
#define _CRT_SECURE_NO_WARNINGS
// inlcude statements
#include <stdio.h>
#include <math.h>


// Defining Constants
#define OFFENSIVE_FACTOR 1.15
#define SPECIAL_TEAMS_FACTOR 1.22
#define HOME_FIELD_ADVANTAGE 1.2
#define OVERALL_FACTOR 1.15
#define OFFENSIVE_WEIGHT 0.3
#define DEFENSIVE_WEIGHT 0.24
#define HOME_WEIGHT 0.11
#define OVERALL_WORTH 0.13


// prototypes
int getInput();
void computeStrengths();
int computeScoreDifference();
void outputResult();
void updateTotals();
void summary();
