#include <stdio.h>
#include <stdbool.h>
int main() {
	bool condition = true;
	int queensX[8];
	int queensY[8] = {1,2,3,4,5,6,7,8};
	printf("Please enter the x coordinates of the queens (starting from the top)> ");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &queensX[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int l = i+1; l < 7; l++) {
			if (((queensX[i] + queensX[l]) == (queensY[i] + queensY[l])) || 
				(queensX[i] == queensX[l]) || 
				(queensY[i] == queensY[l]) || 
				((queensX[i]- queensX[l]) == (queensY[i] - queensY[l]))) {
				condition = false;
				printf("(%d,%d) \t (%d,%d)\n", queensX[i], queensY[i], queensX[l + 1], queensY[l + 1]);
			}
			
		}
		i++;
	}
	if (condition == true) {
		printf("The grid is in a correct state.");
	}
	else {
		printf("The grid is in an incorrect state.");
	}
}
