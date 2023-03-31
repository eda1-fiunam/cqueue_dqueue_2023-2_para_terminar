/*
 * Para compilar utiliza la siguiente instrucción en la consola:
 *
 * gcc -Wall -std=c99 -o main.out main.c DQueue.c
 */



#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "DQueue.h"




//----------------------------------------------------------------------
// Driver program
//----------------------------------------------------------------------
int main()
{
   DQueue* fila = DQueue_New( 8 );

   // printf( "La capacidad de la cola es: %ld\n", DQueue_Capacity( fila ) );

   int miCont = 5;
   while( !DQueue_IsFull( fila ) )
   {
      printf( "q<- %d\n", miCont );
      DQueue_Enqueue( fila, miCont );
      ++miCont;
      // printf( "El número de elementos actuales en la cola es: %ld\n", DQueue_Len( fila ) );
   }
   printf( "\n" );

   // printf( DQueue_IsFull( fila ) ? "La cola está llena\n" : "La cola no está llena\n" );
   // printf( DQueue_IsEmpty( fila ) ? "La cola está vacía\n" : "La cola no está vacía\n" );

   printf( "Back dequeuing: %d\n", DQueue_Dequeue_prio( fila ) );

   miCont = 100;
   DQueue_Enqueue_prio( fila, miCont );
   printf( "Front enqueueing: %d\n\n", miCont );
   while( !DQueue_IsEmpty( fila ) )
   {
      //
      printf( "q-> %d\n", DQueue_Dequeue( fila ) );
      printf( "El número de elementos actuales en la cola es: %ld\n", DQueue_Len( fila ) );
   }
   printf( "\n" );

   // printf( DQueue_IsEmpty( fila ) ? "La cola está vacía\n" : "La cola no está vacía\n" );
   // printf( DQueue_IsFull( fila ) ? "La cola está llena\n" : "La cola no está llena\n" );

   DQueue_Delete( &fila );
   assert( fila == NULL );
}
