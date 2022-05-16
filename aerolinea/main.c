#include <stdio.h>
#include <stdlib.h>
float aplicaAumento ();
char RemplazarCaracter();
int main()
{


printf("el descuento es %.2f\n",aplicaAumento());

RemplazarCaracter();

    return 0;
}
float aplicaAumento (){
    float precioDeUnProducto = 300;
    float descuento;
    descuento = precioDeUnProducto *1.05;

    return descuento;
}
char RemplazarCaracter(){
    char primerCaracter = 'n';
    char segundoCaracter = 'a';
    char tercerCaracter = 'b';
    printf("%c , %c, %c", primerCaracter, segundoCaracter, tercerCaracter);

}
