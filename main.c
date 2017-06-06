#include "core.h"

HashMap *mapAutos;

int main(){
    mapAutos=createMap();
    mainMenu(mapAutos);
    return 0;
}
