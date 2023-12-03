#include "header.h"


int main() {
	char homeTeamName[20], visitingTeamName[20];

	// O =  Offensive Strength,D = Defensive Strength, S = Special Teams Strength/ home strength for home team S
	// R = Road Strength for Visiting Team, C = Home field advantage for Crow Noise
	int HTO, HTD, HTS, HTH, HTC, VTO, VTD, VTS, VTR;


	FILE* fp = fopen("football1.txt", "r");
	if (fp == NULL) {
		printf("File Reading error!");

	}
	return 0;
}