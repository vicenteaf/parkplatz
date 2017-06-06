#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int valor (char c);
int valor_num(char c);

int main (){
    char str[7];
    int i,large,cont;
    long key,aux;
    aux=0;
    cont=0;

    printf("\nIntroduzca Patente: ");
    scanf("%s",&str);

    large=strlen(str);

    for(i=0;i<large;i++){
        if(((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z'))){
            key=valor(str[i]);
            aux=aux+key;
            aux=aux*100;
            cont++;
        }
    }

if(cont==4){
	for(i=0;i<large;i++){
        if(str[i]>='1' && str[i]<='9'){
            key=valor_num(str[i]);
            
            if((i+1)!=large){
				key=key*10;
			}
            aux=aux+key;
        }
    }
}else{
	for(i=0;i<large;i++){
        if(str[i]>='1' && str[i]<='9'){
            key=valor_num(str[i]);
            if((i+1)!=large){
            	aux=aux*10;
                key=key*10;
            }
            aux=aux+key;
        }
    }
}

    printf("\nLa llave obtenida es: %ld",aux);

}

int valor (char c){
    int j;

    if(c=='a' || c=='A'){
        j=1;
        return j;
    }else{
        if(c=='b' || c=='B'){
            j=2;
            return j;
        }else{
            if(c=='c' || c=='C'){
                j=3;
                return j;
            }else{
                if(c=='d' || c=='D'){
                    j=4;
                    return j;
                }else{
                    if(c=='e'||c=='E'){
                        j=5;
                        return j;
                    }else{
                        if(c=='f'||c=='F'){
                            j=6;
                            return j;
                        }else{
                            if(c=='g'||c=='G'){
                                j=7;
                                return j;
                            }else{
                                if(c=='h'||c=='H'){
                                    j=8;
                                    return j;
                                }else{
                                    if(c=='i'||c=='I'){
                                        j=9;
                                        return j;
                                    }else{
                                        if(c=='j'||c=='J'){
                                            j=10;
                                            return j;
                                        }else{
                                            if(c=='k'||c=='K'){
                                                j=11;
                                                return j;
                                            }else{
                                                if(c=='l'||c=='L'){
                                                    j=12;
                                                    return j;
                                                }else{
                                                    if(c=='m'||c=='M'){
                                                        j=13;
                                                        return j;
                                                    }else{
                                                        if(c=='n'||c=='N'){
                                                            j=14;
                                                            return j;
                                                        }else{
                                                            if(c=='o'||c=='O'){
                                                                j=15;
                                                                return j;
                                                            }else{
                                                                if(c=='p'||c=='P'){
                                                                    j=16;
                                                                    return j;
                                                                }else{
                                                                    if(c=='q'||c=='Q'){
                                                                        j=17;
                                                                        return j;
                                                                    }else{
                                                                        if(c=='r'||c=='R'){
                                                                            j=18;
                                                                            return j;
                                                                        }else{
                                                                            if(c=='s'||c=='S'){
                                                                                j=19;
                                                                                return j;
                                                                            }else{
                                                                                if(c=='t'||c=='T'){
                                                                                    j=20;
                                                                                    return j;
                                                                                }else{
                                                                                    if(c=='u'||c=='U'){
                                                                                        j=21;
                                                                                        return j;
                                                                                    }else{
                                                                                        if(c=='v'||c=='V'){
                                                                                            j=22;
                                                                                            return j;
                                                                                        }else{
                                                                                            if(c=='w'||c=='W'){
                                                                                                j=23;
                                                                                                return j;
                                                                                            }else{
                                                                                                if(c=='x'||c=='X'){
                                                                                                    j=24;
                                                                                                    return j;
                                                                                                }else{
                                                                                                    if(c=='y'||c=='Y'){
                                                                                                        j=25;
                                                                                                        return j;
                                                                                                    }else{
                                                                                                        if(c=='z'||c=='Z'){
                                                                                                            j=26;
                                                                                                            return j;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return j;
}


int valor_num(char c){

if(c=='1'){
        return 1;
}else{
    if(c=='2'){
        return 2;
    }else{
        if(c=='3'){
            return 3;
        }else{
            if(c=='4'){
                return 4;
            }else{
                if(c=='5'){
                    return 5;
                }else{
                    if(c=='6'){
                        return 6;
                        }else{
                            if(c=='7'){
                                return 7;
                            }else{
                                if(c=='8'){
                                    return 8;
                                }else{
                                    if(c=='9'){
                                        return 9;
                                    }else{
                                        if(c=='0'){
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
