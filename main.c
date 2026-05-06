#include <stdio.h>

int cantidad;

void producto(){
    
    int i;

    printf("Ingresa cuantos productos vas a ingresar: ");
    scanf("%d",&cantidad);

    char nombre[cantidad][50];

    getchar(); // limpiar buffer

    for(i = 0; i < cantidad; i++){
        printf("Ingresa el nombre del producto num %d: ", i + 1);
        fgets(nombre[i], 50, stdin);
    }

    printf("\n--- PRODUCTOS INGRESADOS ---\n");

    for(i = 0; i < cantidad; i++){
        printf("Producto %d: %s", i + 1, nombre[i]);
    }
}

int main(){

    int opcion;
    
   
    do{
         printf("Bienvenido ,en este programa podras ingresar articulos,su precio y la cantidad");
    
    printf("\n1.Ingresar articulos");
    
    printf("\n2.Ver articulos");
    
    printf("\nIngresa la opcion de tu preferencia: ");
    scanf("%d",&opcion);
    
    if (opcion!=1 && opcion!=2)
    {
       printf("\nRecuerda ingresar el numero 1 o 2");
      
    }
    
    }while (opcion!=1 && opcion!=2);
    
    
    

    
    
}
