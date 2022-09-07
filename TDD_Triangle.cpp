#include <stdio.h>
#include <stdlib.h>

int getTipoTriangulo (int , int , int);
int testGetTipoTriangulo();

int main(){
	int resultadoDelTest;
	resultadoDelTest = testGetTipoTriangulo();
	
	printf ("Resultado del test: %d", resultadoDelTest); //0 si falla alguno de los , sino 1
	return 0;
}

//PRUEBA UNITARIA
int testGetTipoTriangulo(){
	if (getTipoTriangulo(5,5,5) !=1) //CP1
	{ return 0;
	}
	if (getTipoTriangulo(4,5,6) !=3) //CP2
	{ return 0;
	}
	if (getTipoTriangulo(4,7,7) !=2) //CP3
	{ return 0;
	}
	if (getTipoTriangulo(7,7,5) !=2) //CP4
	{ return 0;
	}
	if (getTipoTriangulo(1,1,2) !=0) //CP5
	{ return 0;
	}
	return 1;
}

//DEVUELVE EL TIPO DE TRIANGULO
int getTipoTriangulo(int a, int b, int c){
	if(a + b > c && b + c > a && a + c > b)	
	{	
		if(a == b && b == c && a ==c) //equilátero
		{ return 1;
		}	
		else if(a == b || b==c || a==c) //isósceles
		{ return 2;
		}
		else
		{ return 3; //escaleno
		}
	}
	else
	{ return 0; // no es triangulo
	}
}
