/* Daniel Felipe Moncada Tello, Id: 8976528 */

//Problem A - Parking

// Hallar el mayor y el menor, restarlos y luego multiplicarlo por 2 basicamente


#include <stdio.h>


void maxmin(int cantidad) {
    int numero, mayor = -1000, menor = 1000;
    for (int j = 0; j < cantidad; j++) {
        scanf("%d", &numero);
        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    int resultado = mayor - menor;
    int resultadof = resultado * 2;
    printf("%d\n", resultadof);
}

int main() {
    int casos;
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++) {
        int cantidad;
        scanf("%d", &cantidad);
        maxmin(cantidad);
    }
    return 0;
}


//Problem B - Nlogonia

//Casos, centro, coords

#include <stdio.h>


int main() {
    int k;
    scanf("%d", &k);
    while(k != 0) {
        int n, m, x, y;
        scanf("%d %d", &n, &m);
        int i = 0;
        while(i < k) {
            scanf("%d %d", &x, &y);
        
            if (x == n || y == m) {
                printf("divisa\n"); 
            } 
            else if (x > n && y > m) {
                printf("NE\n");
            } 
            else if (x < n && y > m) {
                printf("NO\n");
            } 
            else if (x < n && y < m) {
                printf("SO\n");
            } 
            else {
                printf("SE\n");
            }
            i++;  
        } 
        scanf("%d", &k);
    }
    return 0;
}


//Problem D - Jumpers

// Calcular diff absolutas de la entrada, verrif que el calculo sean igual a n-1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int numeros[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &numeros[i]);
        }
        int arrDiff[n - 1];
        for (int i = 0; i < n - 1; i++) {
            arrDiff[i] = abs(numeros[i] - numeros[i+1]);
        }
        int verif[n - 1];
        for (int i = 0; i < n - 1; i++) {
            verif[i] = 0;
        }
        for (int i = 0; i < n - 1; i++) {
            int diff = arrDiff[i];
            if (diff >= 1 && diff <= n - 1) {
                verif[diff - 1] = 1;
            }
        }
        int jolly = 1;
        for (int i = 0; i < n - 1; i++) {
            if (verif[i] == 0) {
                jolly = 0;
            }   
        }
        if (jolly) {
            printf("Jolly\n");
        } 
        else {
            printf("Not jolly\n");
        }
    }
    return 0;
}