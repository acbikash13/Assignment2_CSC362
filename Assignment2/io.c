#include "header.h"

int getInput(FILE *file, char *homeTeam, int *HTO, int *HTD, int *HTS, int *HTH, int *HTC,
             char *visitingTeam, int *VTO, int *VTD, int *VTS, int *VTR) {
    return fscanf(file, "%s %d %d %d %d %d %s %d %d %d %d",
                  homeTeam, HTO, HTD, HTS, HTH, HTC, visitingTeam, VTO, VTD, VTS, VTR);
}

void outputResult(char *winner, char *loser, int pointDiff) {
    if (pointDiff == 0) {
        printf("%s beats %s by 1\n", winner, loser);
    } else {
        printf("%s beats %s by %d\n", winner, loser, abs(pointDiff));
    }
}

void computeSummary(int totalGames, int homeWins, int totalDifference,
                    double *homeWinPercentage, double *avgScoreDifference) {
    *homeWinPercentage = (double)homeWins / totalGames * 100;
    *avgScoreDifference = (double)totalDifference / totalGames;
}

void outputSummary(double homeWinPercentage, double avgScoreDifference) {
    printf("Percentage of home team wins is predicted as %.2f%%\n", homeWinPercentage);
    printf("Average difference in scores is predicted as %.1f\n", avgScoreDifference);
}
