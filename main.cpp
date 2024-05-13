#include <stdio.h>
#include <stdbool.h>

bool AñoBisiesto(int año) { 
    return (año % 4 == 0 && año % 100 != 0) || año % 400 == 0; 
}
bool FechaCorrecta (int dia, int mes, int año) { 
    if (mes < 1 ; mes > 12) {
        return false;
    }
    if (mes == 2) {
        return dia >=1 && dia <=(AñoBisiesto(año) ? 29 : 28);
    } else if (mes == 4 || mes == 6 || mes == 9 || mes ==11){
        return dia >= 1 && dia <=30;
    } else {
        return dia >=1 && dia <= 31;
    }
    
}
/// @brief 
/// @return 
int main () {
    int dia, mes, año;

    printf ("Por favor. Ahora ingresa tu fecha de nacimiento");
    printf("\n Inicia por el dia: \n");
    scanf("%d", &dia);
    printf ("Ahora ingresa el Mes en que naciste (1 a 12: ");
    scanf("%d", &mes);
    printf ("Ahora ingresa el año: ");
    scanf ("%d", año);
    if (año <=0) {
    }

    if (FechaCorrecta (dia, mes, año)){
        printf("Ingresa una Fecha valida.\n");
        return 1;
    }
    
    if ((mes==3 && dia >=21) || (mes==4 && dia <=19)){
        printf ("\n Tu Caballero dorado es Aries. \n");
    } else if ((mes==4 && dia >=20) || (mes==5 && dia <=20)){
        printf ("\n Tu caballero dorado es Tauro. \n");
    } else if ((mes==5 && dia >=21) || (mes==6 && dia <=20)) {
        printf("\n Tu caballero Dorado es Géminis. \n");
    } else if ((mes==6 && dia >=21) || (mes==7 && dia <=22)) {
        printf("\nTu Caballero Dorado es Cancer. \n");
    } else if ((mes==7 && dia >=23) || (mes==8 && dia <=22)) {
        printf("\n Tu Caballero Dorado es Leo. \n ");
    } else if ((mes==8 && dia >=23) || (mes==9 && dia <=22)) { 
        printf("\n Tu Caballero Dorado es Virgo. \n");
    } else if ((mes==9 && dia >=23) || (mes==10 && dia <=22)) {
        printf("\n Tu Caballero Dorado es Libra. \n");
    } else if ((mes==10 && dia >=23) || (mes==11 && dia <=21)) {
        printf("\n Tu Caballero Dorado es Escorpio. \n");
    } else if ((mes==11 && dia >=22) || (mes==12 && dia <=21)) {
        printf(" \n Tu Caballero Dorado es Sagitario. \n");
    } else if ((mes==12 && dia >=22) || (mes==1 && dia <=19)) {
        printf("\n Tu Caballero Dorado es Capricornio. \n");
    } else if ((mes==1 && dia >=20) || (mes==2 && dia <=18)) {
        printf ("\n Tu Caballero Dorado es Acuario. \n");
    } else if ((mes==2 && dia >=19) || (mes==3 && dia <=20)) {
        printf("\n Tu Caballero Dorado es Piscis. \n");
    }

    return 0;
}