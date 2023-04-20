/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

Lista concatenarListas(Lista l1, Lista l2);
void imprimirLista(Lista l);

int main(){
  Lista l1, l2;

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
  
  cout << endl;
  cout << "Lista 1:" << endl;
  imprimirLista(l1);

  cout << endl;
  cout << "Lista 2:" << endl;
  imprimirLista(l2);

  Lista l3 = concatenarListas(l1, l2);

  cout << endl;
  cout << "Lista final:" << endl;
  imprimirLista(l3);

  return 0;
}

Lista concatenarListas(Lista l1, Lista l2){
  for(int i = 1; i <= l2.longLista(); i++){
    l1.anxLista(l2.infoLista(i));
  }

  return l1;
}

void imprimirLista(Lista l)
{
  for(int i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }

  cout << endl;
}
