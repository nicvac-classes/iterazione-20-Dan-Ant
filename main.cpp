#include <iostream>
using namespace std;

int main() {
int m, mm, a;
a=0;
mm=0;
cout<< "Quanti mattoni hai?" << endl;
cin>>m;
while (m>=mm + (a+1))
{
    a=a+1;
    mm=mm+a;

}
cout << "L'altezza dell'edificio è " << a << endl;
}


