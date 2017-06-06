void addCar(HashMap *mapAutos){
    char patente[10];
    printf("Por Favor ingrese la patente que desea ingresar\n:");
    scanf("%s",patente);
    insert(mapAutos,patente);
}

void delCar(HashMap *mapAutos){
    char patente[10];
    printf("Por Favor ingrese la patente que desea eliminar\n:");
    scanf("%s",patente);
    delete(mapAutos,patente);
}

void schCar(HashMap *mapAutos){
    char patente[10];
    printf("Por Favor ingrese la patente que desea buscar\n:");
    scanf("%s",patente);
    search(mapAutos,patente);
}
