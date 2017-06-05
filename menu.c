void mainMenu(){
     int  opc;
     char opcstr[3];                
         
          printf("1.- Angregar Auto \n2.- Eliminar Auto\n3.- Buscar Auto ");
          fgets(opc,3,stdin);
          opc = atoi(opcstr);
          
          switch(opc){
                      
                  case 1:
                       addCar();
                       break;
                  case 2:
                       delCar();
                       break;
                  case 3:    
                       schCar();
                       break;
                  default:
                      
          }
}
     
