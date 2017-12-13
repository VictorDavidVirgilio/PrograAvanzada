
#include <iostream>
#include <stdlib.h>	/* malloc() */
using namespace std;	/* cout */
#include "myfecha.h"
char *D[]={(char*)"Lunes",(char*)"Martes",(char*)"Miercoles",(char*)"jueves",(char*)"viernes",(char*)"sabado",(char*)"domingo"};
void Fecha::to_string_Pt(){
	cout<<d<<"/"<<m<<"/"<<a;
}

string DIA[]={"Lunes","Martes","Miercoles","Jueves","Viernes",
"Sabado","Domingo"};
/*agosto de 2017 SOLO PARA ESTE MES*/
void Fecha::set_dia(){
	Fecha::dia=DIA[Fecha::d%7];
}

char *get_dia(int intNumDia){
	switch(intNumDia){
		case 0:{
			return D[0];
			break;
		}
		case 1:{
			return D[1];
			break;
		}
		case 2:{
			return D[2];
			break;
		}
		case 3:{
			return D[3];
			break;
		}
		case 4:{
			return D[4];
			break;
		}
		case 5:{
			return D[5];
			break;
		}
		case 6:{
			return D[6];
			break;
		}
		case 7:{
			return D[7];
			break;
		}
		default:{
			return (char*)"NO DIA";
			break;
		}
	}
}

Fecha *get_Fecha(int intFecha){/*20170818*/
struct MyUtil{
       //return : decena y unidad de numero entero
       static int DyU(int num){
              int tm=100*(num/100);
              return num-tm;}
       };//end class MyUtil
	//Fecha *R=(Fecha*)malloc(sizeof(Fecha));
	Fecha *R=new Fecha();
    R->d=MyUtil::DyU(intFecha);
	R->m=MyUtil::DyU(intFecha/100);
	R->a=intFecha/10000;
	return R;
}

void Rac::simplificar(){
     n=n/mcd;
     d=d/mcd;
     }
void Rac::set_mcd(){
     int M,N,tmp;
     if (n>d) {M=n;N=d;}
     else {M=d;N=n;}
     while ((tmp=(M%N))!=0)// M = QN + r
          {
          M=M/N;
          N=tmp;
          }
//cuando este while termina en N se tiene el mcd
mcd=N;           
          }
     
