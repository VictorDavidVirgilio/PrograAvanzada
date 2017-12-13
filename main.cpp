#include <cstdlib>
#include <iostream>

using namespace std;
//#define C_X
//#define CHAR_TEST
class Cx{
      int a[25];
      
      public:
             Cx(){
                  }
             ~Cx(){
             }
      
      
      };
double leerDouble(){
       cin.exceptions(ios::failbit|ios::badbit);
       double dato=0.0;
       try{
           cin>>dato;}
           catch(ios_base::failure& e){
                 cout<<e.what()<<": dato no valido \n";
                 cin.clear();
                 cin.ignore(numeric_limits<int>::max(),'\n');
                 cout<<"Teclea un real:";
                 leerDouble();
                 }
                 return dato;
           }
int main(int argc, char** argv)
{
   /* #ifdef C_X
    Cx *p=0;
    #endif
    #ifdef CHAR_TEST
    char *charPt;
    #endif
    int n1, n2, n=10,count=0;
    n=n2=n2;
    #ifdef C_X
    try{
        while(1){
                 #endif
                 #ifdef C_X
                 p=new Cx[n];
                 delete p;
                 #endif
                 #ifdef CHAR_TEST
                 charPt=new char[n];
                 delete charPt;
                 #endif
                 #ifdef C_X
                 n+=count++;
                 }
        }
    catch(bad_alloc& e){
                     cout<<e.what()<<endl;
                     cout<<"n-"<<n<<endl;//n=124760
                     //return -1;
                     }
                     #endif*/
                     double doubleVar;
                     cout<<"Teclea un real:";
                     doubleVar=leerDouble();
                     
    system("PAUSE");
    return 0;
}
