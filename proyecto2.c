#include <stdio.h>
#include <stdlib.h>  
//En este si  deja editar XDDDDDDDDDD

int main() {
    char seleccion;

    while (1) {
        system("clear");
        printf("----- Menú Principal -----\nBienvenido usuario: /ID DEL USER/\nPróximo user: /ID DEL USER/\nSELECCIONE UNA ACCIÓN:\nA. Registro de un adoptante\nB. Atender un adoptante\nC. Cerrar sistema\nD. Registro de mascotas\nOpción: "
        );

        scanf(" %c", &seleccion);

        switch (seleccion) {
            case 'A':
                printf("Ha seleccionado:\nREGISTRO DEL ADOPTANTE\n");
                break;
            case 'B':
                printf("Ha seleccionado:\nATENDER UN ADOPTANTE\n");
                break;
            case 'C':
                printf("Ha seleccionado:\nCERRAR SISTEMA\n");
                exit(0); 
            case 'D':
                printf("Ha seleccionado:\nREGISTRO DE MASCOTAS\n");
                break;
            default:                                                   
                printf("Opción inválida. Intente de nuevo.\n");
        }
    }

    return 0;
}