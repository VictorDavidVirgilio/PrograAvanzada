#include <iostream>
#include <stdio.h>
using namespace std;	/* string */
#include "myfecha.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char *get_dia(int intNumDia);
Fecha *get_Fecha(int intFecha);

int main(int argc, char** argv) {
	printf("%s 23 de agosto de 2017\n",get_dia(2));
	Fecha *F=get_Fecha(20170823);
	F->set_dia();
	F->to_string_Pt();
	cout<<"("<<F->dia<<")"<<endl;
	Rac rac1;rac1.n=30;rac1.d=60,rac1.mcd=30;   
    cout<<rac1.n<<endl<<"---"<<endl<<rac1.d<<endl;  
    rac1.simplificar();
    cout<<endl<<rac1.n<<endl<<"---"<<endl<<rac1.d<<endl;  
    Rac rac2;
    rac2.n=64;rac2.d=128;
    cout<<endl<<rac2.n<<endl<<"---"<<endl<<rac2.d<<endl;
    rac2.set_mcd();
    rac2.simplificar();
    cout<<endl<<rac2.n<<endl<<"---"<<endl<<rac2.d<<endl;
	system("pause");
	return 0;
}
