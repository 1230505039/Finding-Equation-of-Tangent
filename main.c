#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int term_number = 3;
	
	float terms[term_number];
	
	int i;
	
	for(i = 0 ; i < term_number ; i++){
		printf("Enter the %d. term: ",i + 1);
		scanf("%f", &terms[i]);
	}
	
	float tangent_x_point;
	
	printf("Enter the x's point of tangent: ");
	scanf("%f", &tangent_x_point);
	
	int j;
	printf("Your equation: ");
	for(i = 0, j = term_number - 1 ; i < term_number, j >= 0 ; i++, j--){
		if(j == 0){
			printf("%.1f", terms[i], j);

		}
		else{
		
		printf(" %.1fx^%d + ", terms[i], j);
		}
	}
	
	float tangent_y_point = 0;
	
	for(i = 0, j = term_number - 1 ; i < term_number, j >= 0 ; i++, j--){
		tangent_y_point = tangent_y_point + terms[i]*pow(tangent_x_point, j);
	}
	
	printf("\n\n");
	
	float slope;
	
	for(i = 0, j = term_number - 2 ; i < term_number, j >= 0 ; i++, j--){
		terms[i] = terms[i] * (j + 1);
		slope = slope + terms[i] * pow(tangent_x_point, j);
	}
	
	float n;
	
	n = tangent_y_point - slope * tangent_x_point;
	
	if(n == 0){
		printf("%.1fx", slope); 
	}
	else if(slope == 0){
		printf("%.1f", n); 
	}
	else{
		printf("%.1fx + %.1f", slope, n); 
	}
	
	
	
	
	
	return 0;
}
