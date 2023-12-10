#include "header.h"

int main() {
    FILE *file = fopen("football1.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int totalGames = 0, homeWins = 0, totalDifference = 0;
    double homeWinPercentage, avgScoreDifference;

    char homeTeam[21], visitingTeam[21];
    int HTO, HTD, HTS, HTH, HTC, VTO, VTD, VTS, VTR;

    while (getInput(file, homeTeam, &HTO, &HTD, &HTS, &HTH, &HTC,
                    visitingTeam, &VTO, &VTD, &VTS, &VTR) != EOF) {
        // Call the necessary functions for computations
        // ...

        // Update running totals
        updateTotals(&totalGames, &homeWins, &totalDifference, computeScoreDifference());

        // Output the result of each game
        outputResult(homeTeam, visitingTeam, computeScoreDifference());
    }

    fclose(file);

    // Output summary
    computeSummary(totalGames, homeWins, totalDifference, &homeWinPercentage, &avgScoreDifference);
    outputSummary(homeWinPercentage, avgScoreDifference);

    return 0;
}
