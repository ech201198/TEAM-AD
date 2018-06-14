#include <iostream>
#include <cstdlib>
/*Fidel*/
using namespace std;

struct arbol
	{
	int dato;
	struct arbol *izq;
	struct arbol *der;
	}*raiz;

void inicializar( void );
struct arbol *insertar( struct arbol *raiz, struct arbol *hoja, int num );



void inicializar( void )
	{
	raiz= NULL;
	}
struct arbol *insertar( struct arbol *raiz, struct arbol *hoja, int num );


/*hola*/
/*Hola a todos :D
