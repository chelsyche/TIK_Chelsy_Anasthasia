//nested if
//percabangan bersarang
//if di dalam if

#include <iostream>
using namespace std;
int main()
{
   int nilai;
   if (nilai %2 == 0){
        cout<<"Bilangan Genap"<<endl;
        if (nilai <10) {
            cout<<"Bilangan Genap Kurang Dari 10"<<endl;
        }
        else {
            cout<<"Bilangan Genap Lebih Dari 10"<<endl;
        }
   }
    else {
        cout<<"Bilangan Ganjil"<<endl;
        if (nilai <10) {
            cout <<"Bilangan Ganjil Kurang Dari 10"<<endl;
        }
        else {
            cout<<"Bilangan Ganjil Kurang Dari 10"<<endl;
        }
    }
    return 0;
}
