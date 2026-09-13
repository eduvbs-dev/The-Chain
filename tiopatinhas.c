#include <stdio.h> /*poderia ficar menor se ao inves de encontrar o maior e o menor valor
                    só comparar e ver qual o valor do meio, tipo, se h>l e h<z ou h>z e h<l, é o do meio*/

int main() {

    int h, z, l; /*h=huguinho, z=zezinho, l=luisinho*/
    int imaior, imeio, imenor; /*i=idade*/

    scanf("%d %d %d", &h, &z, &l);
        
    if (h>z && h>l) {
        imaior = h; 
    
        } else if (z>h && z>l) {
            imaior = z;

        } else if (l>h && l>z) {
            imaior = l; }

    if (h<z && h<l) {
        imenor = h;
    
        } else if (z<h && z<l) {
        imenor = z;
        
        } else if (l<h && l<z) {
            imenor = l; }

    if (h != imaior && h != imenor) {
        h = imeio;
    
    } else if (z != imaior && z != imenor) {
        z = imeio;

    } else if (l != imaior && l != imenor) {
        l = imeio; }

    if(imeio==h) {
        printf("huguinho\n");

    } else if(imeio==z) {
        printf("zezinho\n");

    } else if(imeio==l) {
        printf("luisinho\n");

    }

    return 0;
}