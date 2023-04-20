/*

Ejemplo de uso TAD lista implementación estructuras enlazadas simples.

*/

#include "lista.h"
#include <iostream>

int contarOcurrencias(Lista l, Elemento v);
Lista obtenerMenores(Lista l, Elemento v);
void imprimirLista(Lista l);

int main(){
  Lista l;

  l.anxLista(19);
  l.anxLista(7);
  l.anxLista(12);
  l.anxLista(1);
  l.anxLista(15);

  cout << "Punto 1" << endl;
  int veces = contarOcurrencias(l, 10);
  cout << "Ocurrencias: " << veces << endl;

  cout << "Punto 2" << endl;
  Lista menores = obtenerMenores(l, 10);
  imprimirLista(menores);

  return 0;
}

int contarOcurrencias(Lista l, Elemento v)
{
  int counter = 0;

  for(int i = 1; i <= l.longLista(); i++){
    if(l.infoLista(i) == v) {
      counter++;
    }
  }

  return counter;
}

Lista obtenerMenores(Lista l, Elemento v)
{
  Lista result;

  for(int i = 1; i <= l.longLista(); i++){
    if(l.infoLista(i) < v) {
      result.anxLista(l.infoLista(i));
    }
  }

  return result;
}

void imprimirLista(Lista l)
{
  for(int i = 1; i <= l.longLista(); i++){
    cout << l.infoLista(i) << " ";
  }

  cout << endl;
}
