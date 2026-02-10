#include <stdio.h>


void comprimento () {
    printf ("Bom dia!!\n\n");

}


int main () {

    void (*ptr) () = comprimento;


    ptr ();

return 0;

}