#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "locale.h"

struct producto
{
    int id;
    char nombre[100];
    float precio;
    int stock;
};

struct producto productos[100];

/*
   METODO DE ORDENAMIENTO
*/

void ordenarSeccion(int inicio, int fin)
{
    int i, j;
    struct producto aux;

    for(i = inicio; i <= fin; i++)
    {
        for(j = i + 1; j <= fin; j++)
        {
            if(productos[i].precio > productos[j].precio)
            {
                aux = productos[i];
                productos[i] = productos[j];
                productos[j] = aux;
            }
        }
    }
}
void ordenarProductos()
{
    system("cls");

    ordenarSeccion(0,14);     // Botanas
    ordenarSeccion(15,31);    // Bebidas
    ordenarSeccion(32,50);    // Dulces
    ordenarSeccion(51,63);    // Panaderia
    ordenarSeccion(64,69);    // Alimentos
    ordenarSeccion(70,83);    // Farmacia
    ordenarSeccion(84,99);    // Miscelanea

    printf("Productos ordenados por secciones correctamente\n");

    system("pause");
}

/*
   METODO DE BUSQUEDA
*/

void buscarProducto()
{
    int idBuscar;
    int encontrado = -1;
    int i;

    system("cls");

    printf("----------- BUSCAR PRODUCTO -----------\n\n");

    printf("Ingresa el ID del producto: ");
    scanf("%d", &idBuscar);

    for(i = 0; i < 100; i++)
    {
        if(productos[i].id == idBuscar)
        {
            encontrado = i;
            break;
        }
    }

    if(encontrado >= 0)
    {
        printf("\nPRODUCTO ENCONTRADO\n\n");

        printf("ID: %d\n", productos[encontrado].id);
        printf("Nombre: %s\n", productos[encontrado].nombre);
        printf("Precio: %.2f\n", productos[encontrado].precio);
        printf("Stock: %d\n", productos[encontrado].stock);
    }
    else
    {
        printf("\nProducto no encontrado\n");
    }

    system("pause");
}


void cargarProductos()
{
    /*

    BOTANAS Y SNACKS

    */


    productos[0].id = 1;
    strcpy(productos[0].nombre,"Papas Sabritas Originales");
    productos[0].precio = 22.00;
    productos[0].soock = 20;

    productos[1].id = 2;
    strcpy(productos[1].nombre,"Cheetos Torciditos");
    productos[1].precio = 18.00;
    productos[1].stock = 20;

    productos[2].id = 3;
    strcpy(productos[2].nombre,"Doritos Nacho");
    productos[2].precio = 20.00;
    productos[2].stock = 20;

    productos[3].id = 4;
    strcpy(productos[3].nombre,"Tostitos Flamin Hot");
    productos[3].precio = 22.00;
    productos[3].stock = 20;

    productos[4].id = 5;
    strcpy(productos[4].nombre,"Cacahuates Japoneses");
    productos[4].precio = 15.00;
    productos[4].stock = 20;

    productos[5].id = 6;
    strcpy(productos[5].nombre,"Cacahuates Enchilados");
    productos[5].precio = 15.00;
    productos[5].stock = 20;

    productos[6].id = 7;
    strcpy(productos[6].nombre,"Pistaches");
    productos[6].precio = 35.00;
    productos[6].stock = 20;

    productos[7].id = 8;
    strcpy(productos[7].nombre,"Semillas de girasol");
    productos[7].precio = 12.00;
    productos[7].stock = 20;

    productos[8].id = 9;
    strcpy(productos[8].nombre,"Chicharron de cerdo");
    productos[8].precio = 25.00;
    productos[8].stock = 20;

    productos[9].id = 10;
    strcpy(productos[9].nombre,"Palomitas microondas");
    productos[9].precio = 18.00;
    productos[9].stock = 20;

    productos[10].id = 11;
    strcpy(productos[10].nombre,"Hot Nuts");
    productos[10].precio = 17.00;
    productos[10].stock = 20;

    productos[11].id = 12;
    strcpy(productos[11].nombre,"Churrumais");
    productos[11].precio = 14.00;
    productos[11].stock = 20;

    productos[12].id = 13;
    strcpy(productos[12].nombre,"Takis Fuego");
    productos[12].precio = 20.00;
    productos[12].stock = 20;

    productos[13].id = 14;
    strcpy(productos[13].nombre,"Rancheritos");
    productos[13].precio = 18.00;
    productos[13].stock = 20;

    productos[14].id = 15;
    strcpy(productos[14].nombre,"Crujitos");
    productos[14].precio = 18.00;
    productos[14].stock = 20;

    /*

    BEBIDAS FRIAS

    */

    productos[15].id = 16;
    strcpy(productos[15].nombre,"Coca Cola 600ml");
    productos[15].precio = 19.00;
    productos[15].stock = 20;

    productos[16].id = 17;
    strcpy(productos[16].nombre,"Agua Natural");
    productos[16].precio = 12.00;
    productos[16].stock = 20;

    productos[17].id = 18;
    strcpy(productos[17].nombre,"Agua Mineral");
    productos[17].precio = 17.00;
    productos[17].stock = 20;

    productos[18].id = 19;
    strcpy(productos[18].nombre,"Jugo del Valle");
    productos[18].precio = 18.00;
    productos[18].stock = 20;

    productos[19].id = 20;
    strcpy(productos[19].nombre,"Te Helado");
    productos[19].precio = 20.00;
    productos[19].stock = 20;

    productos[20].id = 21;
    strcpy(productos[20].nombre,"Gatorade");
    productos[20].precio = 28.00;
    productos[20].stock = 20;

    productos[21].id = 22;
    strcpy(productos[21].nombre,"Electrolit");
    productos[21].precio = 32.00;
    productos[21].stock = 20;

    productos[22].id = 23;
    strcpy(productos[22].nombre,"Monster Energy");
    productos[22].precio = 45.00;
    productos[22].stock = 20;

    productos[23].id = 24;
    strcpy(productos[23].nombre,"Red Bull");
    productos[23].precio = 55.00;
    productos[23].stock = 20;

    productos[24].id = 25;
    strcpy(productos[24].nombre,"Leche Chocolate");
    productos[24].precio = 18.00;
    productos[24].stock = 20;

    productos[25].id = 26;
    strcpy(productos[25].nombre,"Sprite");
    productos[25].precio = 17.00;
    productos[25].stock = 20;

    productos[26].id = 27;
    strcpy(productos[26].nombre,"Sidral Mundet");
    productos[26].precio = 17.00;
    productos[26].stock = 20;

    productos[27].id = 28;
    strcpy(productos[27].nombre,"Fanta Naranja");
    productos[27].precio = 17.00;
    productos[27].stock = 20;

    productos[28].id = 29;
    strcpy(productos[28].nombre,"Jumex");
    productos[28].precio = 16.00;
    productos[28].stock = 20;

    productos[29].id = 30;
    strcpy(productos[29].nombre,"Yakult");
    productos[29].precio = 11.00;
    productos[29].stock = 20;

    productos[30].id = 31;
    strcpy(productos[30].nombre,"Cerveza en lata");
    productos[30].precio = 25.00;
    productos[30].stock = 20;

    productos[31].id = 32;
    strcpy(productos[31].nombre,"New Mix");
    productos[31].precio = 35.00;
    productos[31].stock = 20;

    /*

    DULCES Y CHOCOLATES

    */

    productos[32].id = 33;
    strcpy(productos[32].nombre,"Chocolate Snickers");
    productos[32].precio = 22.00;
    productos[32].stock = 20;

    productos[33].id = 34;
    strcpy(productos[33].nombre,"Chocolate Carlos V");
    productos[33].precio = 12.00;
    productos[33].stock = 20;

    productos[34].id = 35;
    strcpy(productos[34].nombre,"Paleta Payaso");
    productos[34].precio = 20.00;
    productos[34].stock = 20;

    productos[35].id = 36;
    strcpy(productos[35].nombre,"Kinder Delice");
    productos[35].precio = 18.00;
    productos[35].stock = 20;

    productos[36].id = 37;
    strcpy(productos[36].nombre,"Ferrero Rocher");
    productos[36].precio = 45.00;
    productos[36].stock = 20;

    productos[37].id = 38;
    strcpy(productos[37].nombre,"Mazapan");
    productos[37].precio = 8.00;
    productos[37].stock = 20;

    productos[38].id = 39;
    strcpy(productos[38].nombre,"Pelon Pelo Rico");
    productos[38].precio = 12.00;
    productos[38].stock = 20;

    productos[39].id = 40;
    strcpy(productos[39].nombre,"Skittles");
    productos[39].precio = 22.00;
    productos[39].stock = 20;

    productos[40].id = 41;
    strcpy(productos[40].nombre,"M&Ms Cacahuate");
    productos[40].precio = 24.00;
    productos[40].stock = 20;

    productos[41].id = 42;
    strcpy(productos[41].nombre,"Bubulubu");
    productos[41].precio = 15.00;
    productos[41].stock = 20;

    productos[42].id = 43;
    strcpy(productos[42].nombre,"Chocolate Milky Way");
    productos[42].precio = 22.00;
    productos[42].stock = 20;

    productos[43].id = 44;
    strcpy(productos[43].nombre,"Duvalin");
    productos[43].precio = 6.00;
    productos[43].stock = 20;

    productos[44].id = 45;
    strcpy(productos[44].nombre,"Rockaleta");
    productos[44].precio = 10.00;
    productos[44].stock = 20;

    productos[45].id = 46;
    strcpy(productos[45].nombre,"Pulparindo");
    productos[45].precio = 7.00;
    productos[45].stock = 20;

    productos[46].id = 47;
    strcpy(productos[46].nombre,"KitKat");
    productos[46].precio = 24.00;
    productos[46].stock = 20;

    productos[47].id = 48;
    strcpy(productos[47].nombre,"Hersheys Cookies");
    productos[47].precio = 24.00;
    productos[47].stock = 20;

    productos[48].id = 49;
    strcpy(productos[48].nombre,"Kranky");
    productos[48].precio = 16.00;
    productos[48].stock = 20;

    productos[49].id = 50;
    strcpy(productos[49].nombre,"Chocoretas");
    productos[49].precio = 15.00;
    productos[49].stock = 20;

    productos[50].id = 51;
    strcpy(productos[50].nombre,"Panditas");
    productos[50].precio = 18.00;
    productos[50].stock = 20;

    /*

    PANADERIA Y GALLETAS

    */

    productos[51].id = 52;
    strcpy(productos[51].nombre,"Bimbunuelos");
    productos[51].precio = 22.00;
    productos[51].stock = 20;

    productos[52].id = 53;
    strcpy(productos[52].nombre,"Galletas Oreo");
    productos[52].precio = 18.00;
    productos[52].stock = 20;

    productos[53].id = 54;
    strcpy(productos[53].nombre,"Galletas Marias");
    productos[53].precio = 24.00;
    productos[53].stock = 20;

    productos[54].id = 55;
    strcpy(productos[54].nombre,"Galletas Emperador");
    productos[54].precio = 19.00;
    productos[54].stock = 20;

    productos[55].id = 56;
    strcpy(productos[55].nombre,"Gansito");
    productos[55].precio = 18.00;
    productos[55].stock = 20;

    productos[56].id = 57;
    strcpy(productos[56].nombre,"Pinguinos Marinela");
    productos[56].precio = 22.00;
    productos[56].stock = 20;

    productos[57].id = 58;
    strcpy(productos[57].nombre,"Choco Roles");
    productos[57].precio = 22.00;
    productos[57].stock = 20;

    productos[58].id = 59;
    strcpy(productos[58].nombre,"Mantecadas Bimbo");
    productos[58].precio = 25.00;
    productos[58].stock = 20;

    productos[59].id = 60;
    strcpy(productos[59].nombre,"Nito Bimbo");
    productos[59].precio = 17.00;
    productos[59].stock = 20;

    productos[60].id = 61;
    strcpy(productos[60].nombre,"Galletas Principe");
    productos[60].precio = 19.00;
    productos[60].stock = 20;

    productos[61].id = 62;
    strcpy(productos[61].nombre,"Triki-Trakes");
    productos[61].precio = 18.00;
    productos[61].stock = 20;

    productos[62].id = 63;
    strcpy(productos[62].nombre,"Donas Bimbo");
    productos[62].precio = 24.00;
    productos[62].stock = 20;

    productos[63].id = 64;
    strcpy(productos[63].nombre,"Barritas Marinela");
    productos[63].precio = 18.00;
    productos[63].stock = 20;

    /*

    ALIMENTOS RAPIDOS Y PREPARADOS

    */

    productos[64].id = 65;
    strcpy(productos[64].nombre,"Sandwich Jamon");
    productos[64].precio = 45.00;
    productos[64].stock = 20;

    productos[65].id = 66;
    strcpy(productos[65].nombre,"Sopa Maruchan");
    productos[65].precio = 18.00;
    productos[65].stock = 20;

    productos[66].id = 67;
    strcpy(productos[66].nombre,"Hot Dog Vikingo");
    productos[66].precio = 25.00;
    productos[66].stock = 20;

    productos[67].id = 68;
    strcpy(productos[67].nombre,"Burrito");
    productos[67].precio = 32.00;
    productos[67].stock = 20;

    productos[68].id = 69;
    strcpy(productos[68].nombre,"Cuernito Jamon");
    productos[68].precio = 38.00;
    productos[68].stock = 20;

    productos[69].id = 70;
    strcpy(productos[69].nombre,"Atun en lata");
    productos[69].precio = 28.00;
    productos[69].stock = 20;

    /*

    FARMACIA E HIGIENE PERSONAL

    */

    productos[70].id = 71;
    strcpy(productos[70].nombre,"Chicles Trident");
    productos[70].precio = 14.00;
    productos[70].stock = 20;

    productos[71].id = 72;
    strcpy(productos[71].nombre,"Pastillas Halls");
    productos[71].precio = 12.00;
    productos[71].stock = 20;

    productos[72].id = 73;
    strcpy(productos[72].nombre,"Encendedor Bic");
    productos[72].precio = 18.00;
    productos[72].stock = 20;

    productos[73].id = 74;
    strcpy(productos[73].nombre,"Kleenex");
    productos[73].precio = 10.00;
    productos[73].stock = 20;

    productos[74].id = 75;
    strcpy(productos[74].nombre,"Preservativos");
    productos[74].precio = 65.00;
    productos[74].stock = 20;

    productos[75].id = 76;
    strcpy(productos[75].nombre,"Alka Seltzer");
    productos[75].precio = 8.00;
    productos[75].stock = 20;

    productos[76].id = 77;
    strcpy(productos[76].nombre,"Aspirinas");
    productos[76].precio = 15.00;
    productos[76].stock = 20;

    productos[77].id = 78;
    strcpy(productos[77].nombre,"Cepillo Dientes");
    productos[77].precio = 25.00;
    productos[77].stock = 20;

    productos[78].id = 79;
    strcpy(productos[78].nombre,"Pasta Dental");
    productos[78].precio = 20.00;
    productos[78].stock = 20;

    productos[79].id = 80;
    strcpy(productos[79].nombre,"Desodorante");
    productos[79].precio = 55.00;
    productos[79].stock = 20;

    productos[80].id = 81;
    strcpy(productos[80].nombre,"Gel Antibacterial");
    productos[80].precio = 15.00;
    productos[80].stock = 20;

    productos[81].id = 82;
    strcpy(productos[81].nombre,"Toallas Sanitarias");
    productos[81].precio = 28.00;
    productos[81].stock = 20;

    productos[82].id = 83;
    strcpy(productos[82].nombre,"Rastrillo");
    productos[82].precio = 18.00;
    productos[82].stock = 20;

    productos[83].id = 84;
    strcpy(productos[83].nombre,"Champu sobre");
    productos[83].precio = 8.00;
    productos[83].stock = 20;

    /*

    MISCELANEA Y OTROS

    */

    productos[84].id = 85;
    strcpy(productos[84].nombre,"Pilas AA");
    productos[84].precio = 45.00;
    productos[84].stock = 20;

    productos[85].id = 86;
    strcpy(productos[85].nombre,"Cargador Celular");
    productos[85].precio = 120.00;
    productos[85].stock = 20;

    productos[86].id = 87;
    strcpy(productos[86].nombre,"Audifonos");
    productos[86].precio = 80.00;
    productos[86].stock = 20;

    productos[87].id = 88;
    strcpy(productos[87].nombre,"Tarjeta Regalo");
    productos[87].precio = 200.00;
    productos[87].stock = 20;

    productos[88].id = 89;
    strcpy(productos[88].nombre,"Bolsa de Hielo");
    productos[88].precio = 35.00;
    productos[88].stock = 20;

    productos[89].id = 90;
    strcpy(productos[89].nombre,"Cajetilla Cigarros");
    productos[89].precio = 80.00;
    productos[89].stock = 20;

    productos[90].id = 91;
    strcpy(productos[90].nombre,"Cigarro suelto");
    productos[90].precio = 7.00;
    productos[90].stock = 20;

    productos[91].id = 92;
    strcpy(productos[91].nombre,"Revista");
    productos[91].precio = 45.00;
    productos[91].stock = 20;

    productos[92].id = 93;
    strcpy(productos[92].nombre,"Periodico");
    productos[92].precio = 15.00;
    productos[92].stock = 20;

    productos[93].id = 94;
    strcpy(productos[93].nombre,"Boligrafo Bic");
    productos[93].precio = 10.00;
    productos[93].stock = 20;

    productos[94].id = 95;
    strcpy(productos[94].nombre,"Cuaderno");
    productos[94].precio = 35.00;
    productos[94].stock = 20;

    productos[95].id = 96;
    strcpy(productos[95].nombre,"Pegamento Pritt");
    productos[95].precio = 22.00;
    productos[95].stock = 20;

    productos[96].id = 97;
    strcpy(productos[96].nombre,"Cinta Adhesiva");
    productos[96].precio = 15.00;
    productos[96].stock = 20;

    productos[97].id = 98;
    strcpy(productos[97].nombre,"Cubrebocas");
    productos[97].precio = 5.00;
    productos[97].stock = 20;

    productos[98].id = 99;
    strcpy(productos[98].nombre,"Sobre Alimento Perro");
    productos[98].precio = 16.00;
    productos[98].stock = 20;

    productos[99].id = 100;
    strcpy(productos[99].nombre,"Cafe Americano");
    productos[99].precio = 22.00;
    productos[99].stock = 20;

}

void verBotanas()
{
    int i;

    system("cls");

    printf("----------- BOTANAS Y SNACKS -----------\n\n");

    for(i = 0; i <= 14; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verBebidas()
{
    int i;

    system("cls");

    printf("----------- BEBIDAS FRIAS -----------\n\n");

    for(i = 15; i <= 31; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verDulces()
{
    int i;

    system("cls");

    printf("----------- DULCES Y CHOCOLATES -----------\n\n");

    for(i = 32; i <= 50; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verPanes()
{
    int i;

    system("cls");

    printf("----------- PANADERIA Y GALLETAS -----------\n\n");

    for(i = 51; i <= 63; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verAlimentosRapidos()
{
    int i;

    system("cls");

    printf("----------- ALIMENTOS RAPIDOS Y PREPARADOS -----------\n\n");

    for(i = 64; i <= 69; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verFarmacia()
{
    int i;

    system("cls");

    printf("----------- FARMACIA E HIGIENE PERSONAL -----------\n\n");

    for(i = 70; i <= 83; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verMiscelanea()
{
    int i;

    system("cls");

    printf("-----------  MISCELANEA Y OTROS -----------\n\n");

    for(i = 84; i <= 99; i++)
    {
        printf("ID: %d\n", productos[i].id);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Precio: %.2f\n", productos[i].precio);
        printf("Stock: %d\n", productos[i].stock);
        printf("-----------------------------\n");
    }

    system("pause");
}

void verProductos()
{
    int opcion;

    do
    {
        system("cls");

        printf("----------- PRODUCTOS -----------\n\n");

        printf("1.- BOTANAS Y SNACKS\n");
        printf("2.- BEBIDAS FRIAS\n");
        printf("3.- DULCES Y CHOCOLATES\n");
        printf("4.- PANADERIA Y GALLETAS\n");
        printf("5.- ALIMENTOS RAPIDOS Y PREPARADOS\n");
        printf("6.- FARMACIA E HIGIENE PERSONAL\n");
        printf("7.- MISCELANEA Y OTROS\n");
        printf("8.- Regresar\n");

        printf("\nSelecciona una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                verBotanas();
                break;

            case 2:
                verBebidas();
                break;

            case 3:
                verDulces();
                break;

            case 4:
                verPanes();
                break;

            case 5:
                verAlimentosRapidos();
                break;

            case 6:
                verFarmacia();
                break;

            case 7:
                verMiscelanea();
                break;

            case 8:
                printf("regresando... \n");
                system("pause \n");
                break;


            default:
                printf("Opcion invalida\n");
                system("pause");
        }

    }while(opcion != 8);
}

void comprarProducto()
{
    system("cls");

    printf("----------- COMPRAR PRODUCTO -----------\n\n");

    printf("Aqui ya rifatela tu papurrin\n\n");

    system("pause");
}

int main()
{
    setlocale(LC_ALL, "");

    int opcion;

    cargarProductos();

    do
    {
        system("cls");

        printf("----------- SISTEMA KIOSKO -----------\n\n");

        printf("1. Ver productos\n");
        printf("2. Comprar producto\n");
        printf("3. Ordenar productos\n");
        printf("4. buscar productos\n");
        printf("5. Salir\n");

        printf("\nIngresa una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                verProductos();
                break;

            case 2:
                comprarProducto();
                break;

            case 3:
                ordenarProductos();
                break;

            case 4:
                buscarProducto();
                break;

            case 5:
                printf("saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
                system("pause");
        }

    }while(opcion != 5);
}
