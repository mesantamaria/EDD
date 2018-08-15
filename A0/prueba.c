#include <stdio.h>

int main()
{
	int numero = 0x98fc3f4a;
	int *puntero_malo = &numero;

	printf("Número original: %#X\n", numero);
	printf("Número desde puntero: %#X\n", *puntero_malo);

	printf("Dirección número: %p\n", &numero);
	printf("Dirección número: %p\n", puntero_malo);

	printf("Tamaño de int %i\n", sizeof(int));

	char InputTest;
	printf("Ingresa una letra: \n");
	scanf("%c", &InputTest);
	printf("%c tiene num %#X\n", InputTest, InputTest);

	return 0;
}
