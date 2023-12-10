#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <math.h>

#define OFFENSIVE_FACTOR 1.15
#define SPECIAL_TEAMS_FACTOR 1.22
#define HOME_FIELD_ADVANTAGE 1.2
#define OVERALL_FACTOR 1.15
#define OFFENSIVE_WEIGHT 0.30
#define DEFENSIVE_WEIGHT 0.24
#define SPECIAL_WEIGHT 0.17
#define HOME_WEIGHT 0.11
#define OVERALL_WORTH 0.13

int getInput(FILE *file, char *homeTeam, int *HTO, int *HTD, int *HTS, int *HTH, int *HTC,
             char *visitingTeam, int *VTO, int *VTD, int *VTS, int *VTR);
void updateTotals(int *totalGames, int *homeWins, int *totalDifference, int currentPrediction);
double computeScoreDifference(int HTO, int HTD, int HTS, int HTH, int HTC,
                              int VTO, int VTD, int VTS, int VTR);
void outputResult(char *winner, char *loser, int pointDiff);
void computeSummary(int totalGames, int homeWins, int totalDifference,
                    double *homeWinPercentage, double *avgScoreDifference);
void outputSummary(double homeWinPercentage, double avgScoreDifference);

#endif // HEADER_H
