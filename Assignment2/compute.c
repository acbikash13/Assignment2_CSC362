#include "header.h"

void updateTotals(int *totalGames, int *homeWins, int *totalDifference, int currentPrediction) {
    (*totalGames)++;
    if (currentPrediction >= 0) {
        (*homeWins)++;
    }
    *totalDifference += currentPrediction;
}

double computeScoreDifference(int HTO, int HTD, int HTS, int HTH, int HTC,
                              int VTO, int VTD, int VTS, int VTR) {
    double homeScoringStrength = HTO * OFFENSIVE_FACTOR - VTD;
    double visitingScoringStrength = HTD + 2 - VTO * OFFENSIVE_FACTOR;
    double specialTeamsImpact = HTS * SPECIAL_TEAMS_FACTOR - VTS;
    double homeFieldAdvantage = HTH + HTC * HOME_FIELD_ADVANTAGE - VTS;
    double visitingRoadStrength = HTO * HTD * HTH * OVERALL_FACTOR - VTO * VTD * VTR;

    double difference = homeScoringStrength * OFFENSIVE_WEIGHT +
                        visitingScoringStrength * DEFENSIVE_WEIGHT +
                        specialTeamsImpact * SPECIAL_WEIGHT +
                        homeFieldAdvantage * HOME_WEIGHT +
                        visitingRoadStrength * OVERALL_WORTH;

    return difference;
}
