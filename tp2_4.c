#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TOTAL 5

typedef struct compu{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
}compu;

void cargarEstructura(compu pcs[], int total, char tipos[][10]);
void listarPCs(compu pcs[], int total);

int main(){
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"}; 
    compu pcs[TOTAL];

    cargarEstructura(pcs,TOTAL,tipos);
    listarPCs(pcs, TOTAL);
    

    return 0;
}

void cargarEstructura(compu pcs[], int total, char tipos[][10]){
    for(int i=0;i<total;i++){
        pcs[i].velocidad = rand() % (3 - 1 + 1) + 1;
        pcs[i].anio = rand() % (2024 - 2015 + 1) + 2015;
        pcs[i].cantidad_nucleos = rand() % (8 - 1 + 1) + 1;
        pcs[i].tipo_cpu = tipos[rand() % 6];
    }
}

void listarPCs(compu pcs[], int total){
    printf("Las pcs son:\n");
    for(int i=0; i<total; i++){
        printf("%d)\nVelocidad: %d\nAño: %d\nCantidad de nucleos: %d\nTipo de cpu: %s\n", i+1, pcs[i].velocidad, pcs[i].anio, pcs[i].cantidad_nucleos, pcs[i].tipo_cpu);
        printf("\n");
    }
}