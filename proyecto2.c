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
                regisAdopt(struct cola adoptantes);
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
void regisAdopt(struct cola *adoptantes){
    system("clear");
    printf("Ingrese el nombre completo del adoptante:\n");
    scanf(" %s", adoptantes.nombreAdoptante);
    //VERIFICAR ESA MMMDAAAAAA


    /*char nombreAdoptante [50];
    char direccion [50];
    char correo[50];
    char telefono[11];
    char contrasenia[50];
    char idAdoptante[50];*/
}

void opcionA();
