
#include <iostream>
#include "ThreeNum.h"
using namespace std;

int main()
{
  //definiujemy trojke
  ThreeNum n1(1, 2, 3);

  //wczytujemy druga
  cout << "Podaj trojke liczb rzeczywistych: " << endl;
  ThreeNum n2;
  cin >> n2;
  //suma
  ThreeNum suma = n1 + n2;
  cout <<"Suma wynosi: "<< suma << endl;
  //mnozenie
  ThreeNum iloczyn = n1 * n2;
  cout <<"Iloczyn wynosi: "<< iloczyn << endl;

  //iloczyn przez 2
  cout <<"Iloczyn przez 2 wynosi: "<< n2 * 2 << endl;

  //wartosc funkcji Ave
  cout <<"Wartosc funkcji Ave(): "<< suma.Ave() << endl;
  return 0;
}


