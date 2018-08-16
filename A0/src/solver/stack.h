#pragma once


typedef struct stack Stack;

typedef struct node Node;


struct node
{
	/* Aqui agrega tu código */
	int valor;  // color
	Node *anterior;
};

struct stack
{
	/* Aqui agrega tu código */
	Node *arriba;
	Node *abajo;
	int largo;
};


Stack *stack_init();

void push(Stack* stack, int color);

int pop(Stack* stack);

void destroy(Stack *stack);
