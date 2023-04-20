/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

Lista insertarEnListaOrdenada(Lista l, Elemento v);
void imprimirLista(Lista l);

int main(){
  Lista l;

  l.anxLista(10);
  l.anxLista(20);
  l.anxLista(30);
  l.anxLista(40);
  l.anxLista(50);

  cout << endl;
  cout << "Lista inicial:" << endl;
  imprimirLista(l);

  l = insertarEnListaOrdenada(l, 0);
  l = insertarEnListaOrdenada(l, 15);
  l = insertarEnListaOrdenada(l, 20);
  l = insertarEnListaOrdenada(l, 29);
  l = insertarEnListaOrdenada(l, 34);
  l = insertarEnListaOrdenada(l, 42);
  l = insertarEnListaOrdenada(l, 50);
  l = insertarEnListaOrdenada(l, 75);

  cout << endl;
  cout << "Lista final:" << endl;
  imprimirLista(l);

  return 0;
}

Lista insertarEnListaOrdenada(Lista l, Elemento v) {
  Lista result = l;

  for(int i = 1; i <= result.longLista(); i++){
    if(v < result.infoLista(i)) {
      result.insLista(v, i);
      return result;
    }
  }

  result.anxLista(v);
  return result;
}

void imprimirLista(Lista l)
{
  for(int i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }

  cout << endl;
}
