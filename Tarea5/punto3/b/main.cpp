/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

void imprimirLista(Lista l);

int main(){
  Lista l;

  l.insListaOrdenada(10);
  l.insListaOrdenada(20);
  l.insListaOrdenada(30);
  l.insListaOrdenada(40);
  l.insListaOrdenada(50);

  cout << endl;
  cout << "Lista inicial:" << endl;
  imprimirLista(l);

  l.insListaOrdenada(0);
  l.insListaOrdenada(15);
  l.insListaOrdenada(20);
  l.insListaOrdenada(29);
  l.insListaOrdenada(34);
  l.insListaOrdenada(42);
  l.insListaOrdenada(50);
  l.insListaOrdenada(75);

  cout << endl;
  cout << "Lista final:" << endl;
  imprimirLista(l);

  return 0;
}

void imprimirLista(Lista l)
{
  for(int i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }

  cout << endl;
}
