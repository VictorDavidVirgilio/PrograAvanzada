#include <cstdlib>
#include <iostream>
#define prompt "#->"

using namespace std;
class op
{

      int a[25];
      public:
             ~op(){
             }
      };

int main(int argc, char *argv[])
{
    int n=10;
    op *p=0;
    p=new op[n];
    
    //while (fin==0)
    //{
    cout<<prompt<<endl;
    cin>>p.a;
    
//}
//exit 0;

    system("PAUSE");
    return 0;
}
