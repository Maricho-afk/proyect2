#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h> 

//base de datos cola de usuarios (cola) 
struct nodo{
char nombreAdoptante [50];
char direccion [50];
char correo[50];
char telefono[11];
char contrasenia[50];
char idAdoptante[50];
struct nodo* aptSigNodo;
}:

struct cola{
struct nodo aptFrente; 
struct nodo aptAtras; 
int tamaniaActual;
}

//funciones para base de datos de cola// 
int estavacia (struct cola adoptantes); 
void inicializar (struct cola adoptantes); 
void encolar (struct cola adoptantes); 
void desencolar (struct cola adoptantes);

//Inicializacion de funciones
void regisAdopt(struct cola adoptantes);
void atenderAdopt();
void cerrarSystem();
void regisMascota();

//FUNCION PRINCIPAL
int main() {
    char seleccion;
    int numadaptante=01;

    while (1) {
        system("clear");
        printf("----- Menú Principal -----\nBienvenido usuario: /ID DEL USER/\nPróximo user: /ID DEL USER/\nSELECCIONE UNA ACCIÓN:\nA. Registro de un adoptante\nB. Atender un adoptante\nC. Cerrar sistema\nD. Registro de mascotas\nOpción: "
        );

        scanf(" %c", &seleccion);

        switch (seleccion) {
            case 'A':
                printf("Ha seleccionado:\nREGISTRO DEL ADOPTANTE\n");
                regisAdopt(struct cola *adoptantes);
                break;
            case 'B':
                printf("Ha seleccionado:\nATENDER UN ADOPTANTE\n");
                //atenderAdopt();
                break;
            case 'C':
                printf("Ha seleccionado:\nCERRAR SISTEMA\n");
                //cerrarSystem();
                printf("Cerrando sistema\n");
                sleep("2");
                exit(0); 
            case 'D':
                printf("Ha seleccionado:\nREGISTRO DE MASCOTAS\n");
                //regisMascota();
                break;
            default:                                                   
                printf("Opción inválida. Intente de nuevo.\n");
        }
    }

    return 0;
}

//REGISTRO DE LOS ADOPTANTES
void regisAdopt(struct cola *adoptantes)
{
    while(1)
    {
    system("clear");
    printf("Ingrese el nombre completo del adoptante:\n");
    scanf(" %s", adoptantes.nombreAdoptante);

    Ingrese
    //VERIFICAR ESA MMMDAAAAAA


    /*char nombreAdoptante [50];
    char direccion [50];
    char correo[50];
    char telefono[11];
    char contrasenia[50];
    char idAdoptante[50];*/

	        char respuesta2[3];
			printf("\n¿Desea volver al menú principal? (si/no)\n");
			printf("(ADVERTENCIA: al poner 'no' iniciará sesión)\n");
			scanf("%s", respuesta2);
			getchar();

			if (strcmp(respuesta2, "si") == 0) 
            {
				break; // Regresar al menu: principal
			} 
            else if (strcmp(respuesta2, "no") == 0) 
            {
				printf("\n");
				ingreso();
				break; // Regresar al menu: despues de iniciar sesion
			}
		 else if (strcmp(respuesta1, "no") == 0) {
			printf("\nPor favor corrija los datos.\n");
			sleep(2);
			system("clear");
		} else {
			printf("Opción no valida.\n");
		}
    }    
}

