#include "stack.h"
#include <stdlib.h>
#include <stdio.h>


Stack *stack_init()
{
	/* Aqui agrega tu código */
	Stack *pointer;
	pointer = (Stack*) malloc(sizeof(Stack));
	//pointer = &new_stack;
	pointer->abajo = NULL;
	pointer->arriba = NULL;
	pointer->largo = 0;
	return pointer;
}

void push(Stack* stack, int color)
{
	/* Aqui agrega tu código */
	if (stack->abajo == NULL) {
		Node *ptr_new_node;
		ptr_new_node = (Node*) malloc(sizeof(Node));
		ptr_new_node->anterior = NULL;
		ptr_new_node->valor = color;
		stack->abajo = ptr_new_node;
		stack->arriba = ptr_new_node;
		stack->largo++;
	}
	else {
		Node *ptr_new_node;
		ptr_new_node = (Node*) malloc(sizeof(Node));
		ptr_new_node->anterior = stack->arriba;
		ptr_new_node->valor = color;
		stack->arriba = ptr_new_node;
		stack->largo++;
	}
}

int pop(Stack* stack)
{
	/* Aqui agrega tu código */
	if (stack->abajo == NULL) {
		return -1;
	}
	else{
		Node *pop_node;
		int valor;
		pop_node = stack->arriba;
		valor = pop_node->valor;
		stack->arriba = pop_node->anterior;
		free(pop_node);
		stack->largo--;
		return valor;
	}
}

void destroy(Stack *stack)
{
	/* Aqui agrega tu código */
	while (stack->largo > 0) {  //se puede hacer con un for tambien
		Node *pop_node;
		pop_node = stack->arriba;
		stack->arriba = pop_node->anterior;
		free(pop_node);
		stack->largo--;
	}
	free(stack);
}


/* A continuación puedes crear cualquier función adicional que ayude en la
  implementación de tu programa */
