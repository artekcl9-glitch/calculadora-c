#include <stdio.h>

int main(){
    float x,y;
    int esc, i;
    char z;

    printf("Vienvenido a la calculadora en C:\n");
    printf("Si quieres salir preciona 1 caundo te den el resultado de la operacion\n");

    for (i = 1 ; i < 2 ; i++  ){

        printf("Operaciones\n");
        scanf("%f\n",&x);
        scanf("%c\n",&z);
        scanf("%f",&y);

        if (z=='-'){
            printf("El resultado es:%f\n",x-y);
            i--;
        }else if (z=='+'){
            printf("El resultado es:%f\n",x+y);
            i--;
        }else if (z=='*'){
            printf("El resultado es:%f\n",x*y);
            i--;
        }else if (z=='/'){
            printf("El resultado es:%f\n",x/y);
            i--;
        }else{
            printf("Escribe algo balido\n");
            i--;
        }

        scanf("%i",&esc);

        if(esc == 1){
            printf("Acabas de cerarrar la calculadora\n");
            i++;
        }
    }
    getchar();
    return 0;
}
