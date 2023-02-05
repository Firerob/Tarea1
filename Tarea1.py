#!/usr/bin/env python3

### PUNTO 1.
"""Modulo que revisa si los elementos de las diagonales de una matriz coinciden"""


mat = [[11, 23, 76, 34, 11],
       [14, 30, 92, 30, 101],
       [12, 45, 58, 92, 22],
       [74, 56, 49, 56, 100],
       [99, 5, 28, 47, 99]]

def verificarDiagonales(mat):
    i = 0
    j = -1
    k = True
    while i < len(mat) and k:
        if mat[i][i] == mat[i][j]:
            i += 1
            j -= 1
        else:
            k = False
    return k


verificarDiagonales(mat)


### PUNTO 2.
"""Modulo que revisa si una lista es capicua o no"""


def esCapicua(lista):
    i = 0
    j = -1
    k = True
    while i < len(lista) and k == True:
        if lista[i] == lista[j]:
            i += 1
            j -= 1
        else:
            k = False
    return k


esCapicua([42, 12, 90, 90, 12, 42])


### PUNTO 3A.
"""Modulo que realiza la diferencia entre dos listas"""


def diferenciaListas(listaA, listaB):
    i = 0
    listaAB = []
    while i < len(listaA):
        if listaA[i] not in listaB:
            listaAB.append(listaA[i])
        else:
            listaB.remove(listaA[i])

        i += 1

    return listaAB


diferenciaListas([41, 22, 31, 15, 13, 12, 33, 19],[40, 10, 22, 12, 33, 33, 33])


### PUNTO 3B.
"""Modulo que pide al usuario ingresar las listas con sus elementos 
    para realizar la diferencia"""


def lecturaImpresion():

    usuario = int(input(" "))
    i = 0
    while i < usuario:
        listaA = []
        tamañoA = int(input(" "))
        j = 0
        while j < tamañoA:
            elementosA = int(input(" "))
            listaA.append(elementosA)
            j += 1
        listaB = []
        j = 0
        tamañoB = int(input(" "))
        while j < tamañoB:
            elementosB = int(input(" "))
            listaB.append(elementosB)
            j += 1
        print(diferenciaListas(listaA, listaB))
        i += 1


lecturaImpresion()


### PUNTO 4.
"""imprime los primos hasta un numero dado, y tambien cuales entre esos 
tienen la capacidad de que la suma de sus digitos da otro primo"""


def numeroPrimo(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def sumarDigitos(n):
    cadena = str(n) 
    digitos = list(map(int, cadena.strip())) 
    return sum(digitos)

def mostrarPrimos(n):
    listaPrimos = []
    listaDigitosPrimos = []
    for i in range (2, n + 1):
        if numeroPrimo(i):
            listaPrimos.append(i)
            suma = sumarDigitos(i)
            if numeroPrimo(suma):
                listaDigitosPrimos.append(i)

    print("Numeros primos entre 1 y", n, ":")
    for i in range(len(listaPrimos)):
        print( listaPrimos[i])

    print("\nNumeros entre 1 y", n, "con suma de digitos con valor primo:")
    print(listaDigitosPrimos)


mostrarPrimos(100)


### PUNTO 5.
"""Funcion que recibe una matriz dispersa y una lista de parejas
y retorna la suma de los valores en dichas posiciones de la matriz"""


mat = {0 : [(0, 1), (5, 4), (7, 5)],
       1 : [(6, 4), (7, 7)],
       2 : [(0, 2), (1, 2), (4, 9), (6, 1)],
       4 : [(2, 8), (3, 1), (5, 7)],
       6 : [(0, 3), (5, 6), (7, 2)],
       7 : [(0, 4), (1, 4), (2, 7)],
       8 : [(1, 9), (3, 8), (5, 7), (7, 6)]}

par = [(0,0), (8,3), (3, 5), (7, 2), (4, 3), (4,6)]

def sumarValoresMatriz(disp, lista):
    i = 0
    suma = []
    claves = disp.keys()
    while i < len(lista):
        fila = lista[i][0]
        columna = lista[i][1]
        if fila in claves:
          filaCompleta = disp[fila]
          for tupla in filaCompleta:
            if tupla[0] == columna:
              valor = tupla[1]
              suma.append(valor)  
        i += 1
    print(suma)
    print(sum(suma))
      

sumarValoresMatriz(mat, par)
