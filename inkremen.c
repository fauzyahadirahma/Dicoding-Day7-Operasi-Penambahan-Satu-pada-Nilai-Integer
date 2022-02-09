/* File         : inkremen.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : efek dari operator ++ */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int i;
    
    /* PROGRAM */
    i = 3;
    printf ("Nilai i : %d %d \n", i, i++ );
    
    i = 3;
    printf ("%d \n", ++i ); /* Sebelum dicetak, nilai i ditambah 1 */
    
    return 0;
}
