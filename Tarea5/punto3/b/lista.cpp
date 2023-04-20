#include "lista.h"

Lista::Lista(){
  act = NULL;
}

void Lista::insListaOrdenada(Elemento elem){
  int pos;
  Nodo* tmp;
  Nodo* aux;
  Nodo* nuevo = new Nodo;
  nuevo->dato = elem;
  nuevo->sig = NULL;

  if(act == NULL)
    act = nuevo;
  else{
    tmp = act;
    if(longLista() == 1){
      if(elem < tmp->dato){
        nuevo->sig = tmp;
        act = nuevo;
      } else {
        act->sig = nuevo;
      }
    } else {
      if(elem < tmp->dato){
        nuevo->sig = tmp;
        act = nuevo;
      } else {
        while(tmp != NULL) {
          aux = tmp->sig;
          if(aux == NULL){
            tmp->sig = nuevo;
            break;
          }
          if(elem < aux->dato){
            nuevo->sig = aux;
            tmp->sig = nuevo;
            break;
          }
          tmp = tmp->sig;
        }
      }
    }
  }
}

void Lista::elimLista(int pos){
  Nodo *tmp, *elim;
  if(pos >= 1 && pos <= longLista()){
    if(pos == 1)
      act = act->sig;
    else{
      tmp = act;
      for(int i = 0; i < pos-2; i++)
        tmp = tmp->sig;
      elim = tmp->sig;
      tmp->sig = tmp->sig->sig;
      delete elim;
    }
  }
}

Elemento Lista::infoLista(int pos){
  Nodo* tmp = act;

  for(int i = 1; i < pos; i++)
    tmp = tmp->sig;

  return tmp->dato;
}

int Lista::longLista(){
  Nodo* tmp = act;
  int cont = 0;

  while(tmp != NULL){
    tmp = tmp->sig;
    cont++;
  }

  return cont;
}

bool Lista::vaciaLista(){
  return act == NULL;
}
