/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

void imprimirLista(Lista l);

int main(){
  Lista l1, l2, l3;

  l1.anxLista(19);
  l1.anxLista(7);
  l1.anxLista(12);
  l1.anxLista(1);
  l1.anxLista(15);

  l2.anxLista(8);
  l2.anxLista(16);
  l2.anxLista(35);
  l2.anxLista(62);
  l2.anxLista(100);
  
  l3 = l1 + l2;

  cout << endl;
  cout << "Lista 1:" << endl;
  imprimirLista(l1);

  cout << endl;
  cout << "Lista 2:" << endl;
  imprimirLista(l2);

  cout << endl;
  cout << "Lista 3:" << endl;
  imprimirLista(l3);

  return 0;
}

void imprimirLista(Lista l)
{
  for(int i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }

  cout << endl;
}
