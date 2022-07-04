#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(double moneda2){

        switch((int)(moneda2*100)){
                case 1:
                        printf("Si es igual\n");
                        return 1;
                        //break;
                case 5:
                        printf("Si es igual \n");
                        return 1;
                        //break;
                case 10:
                        printf("Si es igual\n");
                        return 1;
                case 25:
                        printf("Si es igual\n");
                        return 1;
                case 50:
                        printf("Si es igual\n");
                        return 1;
                case 100:
                        printf("Si es igual\n");
                        return 1;
                default:
                        printf("No es igual\n");
                        return 0;
                }
        //return 1;
}

float ingresar_monedas(){
        double monedaconv=0;
        double moneda;

        int condicion;

        printf("Ingrese moneda $");
        scanf("%lf",&moneda);

        condicion = verificar(moneda);

        while(condicion){
                monedaconv+=moneda;
                printf("Ingrese moneda $");
                scanf("%lf",&moneda);
                //moneda2=atof(moneda);

                condicion = verificar(moneda);
        }

        return monedaconv;
}


int main(){
        printf("Bienvenido a la cabina telefónica!\n");

        float total;
        total = ingresar_monedas();
        printf("El total ingresado es: $%.2f\n", total);
        return 0;
}
