#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main() {
	printf("Hola mundo\n");
	Stack* primer_stack, *segundo_stack;
	int color, height, width;

	primer_stack = stack_init();

	push(primer_stack, 2);
	push(primer_stack, 3);

	color = pop(primer_stack);
	height = 2;
	width = 2;
	Stack*** matrix = malloc(sizeof(Stack**)*height);
	for (int i = 0; i < height; i++) {
		matrix[i] = malloc(sizeof(Stack*)*width);
		for (int j = 0; j < width; j++) {
			matrix[i][j] = stack_init();
		}
	}

	segundo_stack = matrix[0][1];
	push(segundo_stack, 5);
	color = pop(segundo_stack);

	//free memory
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			destroy(matrix[row][col]);
		}
		free(matrix[row]);
	}
	free(matrix);

	destroy(primer_stack);
	printf("Color %d\n", color);

	return 0;
}
