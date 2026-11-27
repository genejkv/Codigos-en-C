#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <cptype.h>

int main()
{
    setlocale(LC_ALL, "");
    char cadena1[100];
    //variables acumuladores
    int v=0, co=0, d=0, e=0, ce=0, p=0;

    printf("Estadistica de caracteres \n");

    printf("Ingrese una cadena de caracteres[0..100]: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    //recorrer la cadena de caracteres
    for(int x=0;cadena1[x]!='\0';x++)
    {
    char c=tolower((unsigned char)cadena1[x]);
    printf("%c",c);
    if(c=='\0')//si es final de caracter, salga del for
        continue;
        
    //Buscar un caracter(vocal)dentro de una cadena
    if(strchr("aeiou",c)!=NULL)
        v++;
        
    //Determinar si un caracter es consonante isalfha
    else if(isalpha(c))
        co++;
        
    //Determinar si un caracter es un digito isdigit
    else if(isdigit(c))
        d++;
        
    ///Determinar si es espacio en blanco
    else if(isspace(c))
        e++;
        
    // Determinar si es un caracter especial (puntuacion y simbolos ASCII)
    else if(ispunct(c))
        ce++;
        
    // Cualquier otro simbolo o digito especial extendido
    else
        p++;

    }

    printf("Numero de vocales: %d \n",v);
    printf("Numero de consonantes: %d \n",co);
    printf("Numero de digitos: %d \n", d);
    printf("Numero de espacios en blanco: %d \n", e);
    printf("Numero de caracter especial: %d \n", ce);
    printf("Numero de digitos especiales: %d \n", p);
    return 0;
}