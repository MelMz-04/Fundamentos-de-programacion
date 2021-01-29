#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
char ao=162, aa=10, au=163;//caracteres de acentos

void espmorse()//función que contiene la transformación de texto normal a binario
{
	int i,j;
	//arreglo para guardar el abecedario español
	char l[37]={'a','b','c','d','e','f','g','h',
	'i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z','0','1','2','3',
	'4','5','6','7','8','9',' '};
	//arreglo para guardar el abecedario morse
	char m[37][6]={{".- "},{"-... "},{"-.-. "},{"-.. "},{". "},{"..-. "},
		{"--. "},{".... "},{".. "},{".--- "},{"-.- "},{".-.. "},{"-- "},
		{"-. "},{"--- "},{".--. "},{"--.- "},{".-. "},{"... "},{"- "},
		{"..- "},{"...- "},{".-- "},{"-..- "},{"-.-- "},{"--.. "},{".---- "},
		{"..--- "},{"...-- "},{"....- "},{"..... "},{"-.... "},{"--... "},
		{"---.. "},{"---. "},{"----- "},{"// "}};
	
	char sentencia[10000];
	printf("Escribe una oraci%cn en min%csculas, puedes incluir n%cmeros\n",ao,au,au);
	fflush(stdin);//limpiamos el sistema
	gets(sentencia);//introducción de la oración con espacios

	
	for(i=0; i<sentencia[i];i++){
		for(j=0;j<37;j++){
			if(sentencia[i]==l[j]){//Busca que el arreglo de la oración sea igual que los caracteres
				printf("%s",m[j]);//Imprime el texto convertido
			}
		}
	}
	printf("\n");
	getch();
}
void espbinario()//función que contiene la transformación de texto normal a binario 
{
	int i,j;
	//arreglo para guardar el abecedario español
	char l[27]={'a','b','c','d','e','f','g','h',
	'i','j','k','l','m','n','o','p','q','r','s',
	't','u','v','w','x','y','z',' '};
	//arreglo para guardar el abecedario en binario
	char m[27][10]={{"01100001 "},{"01100010 "},{"011000011 "},{"011000100 "},{"011000101 "},{"011000110 "},
		{"011000111 "},{"011001000 "},{"011001001 "},{"011001010 "},{"011001011 "},{"011001100 "},{"011001101 "},
		{"01101110 "},{"01101111 "},{"01110000 "},{"01110001 "},{"01110010 "},{"01110011 "},{"01110100 "},
		{"01110101 "},{"01110110 "},{"01110111 "},{"01111000 "},{"01111001 "},{"01111010 "},{"  "}};
	
	char sentencia[10000];
	printf("Escribe una oraci%cn en min%csculas\n",ao,au,au);
	fflush(stdin);//limpiamos el sistema
	gets(sentencia);//introducción de la oración con espacios

	
	for(i=0; i<sentencia[i];i++){
		for(j=0;j<37;j++){
			if(sentencia[i]==l[j]){//Busca que el arreglo de la oración sea igual que los caracteres
				printf("%s",m[j]);//Imprime el texto convertido
			}			
		}	
	}
	printf("\n");
	getch();
}

int main () // Función principal
{
	int op;
	printf("\n\t\tBienvenido a mi Decodificador\n");//Mensaje de bienvenida
	do {
		printf("\n\t1)Morse\n\t2)Binario\n\t3)Salir");//Mostrar menú de lenguajes a elegir
		printf("\n\n Elige la opci%cn deseada: ",ao);
		scanf("%d",&op);
		switch(op){
			case 1:
				espmorse();//mandamos a llamar a la función español a morse
			break;	
			case 2:
				espbinario();//mandamos a llamar a la función español a binario
			break;
			case 3:
				printf("\n\tGracias por utilizar el decodificador");
				printf("\n\tCreado por Melissa Maruuati Matias Zavala\n");
			break;
			default:
				printf("\nOpci%cn inv%clida",ao,aa);
			break;
		}
	} while (op != 3);
	return 0;
}