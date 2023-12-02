#include <stdio.h>
#include <stdbool.h>
int main() {
	bool condition = true;
	int queensX[9];
	int queensY[9] = {1,2,3,4,5,6,7,8,9};
	printf("Please enter the x coordinates of the queens (starting from the top)> ");
	for (int i = 0; i < 9; i++) {
		scanf("%d", &queensX[i]);
	}
	for (int i = 0; i < 9; i++) {
		for (int l = i+1; l < 8; l++) {
			if (((queensX[i] + queensX[l]) == (queensY[i] + queensY[l])) || (queensX[i] == queensX[l])) {
				condition = false;
				printf("(%d,%d) \t (%d,%d)\n", queensX[i], queensY[i], queensX[l + 1], queensY[l + 1]);
			}
			
		}
		i++;
	}
	if (condition == true) {
		printf("The grid is in the correct condition.");
	}
	else {
		printf("The grid is in the incorrect position.");
	}
}
