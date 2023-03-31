/*
 * Para compilar utiliza la siguiente instrucción en la consola:
 *
 * gcc -Wall -std=c99 -o main.out main.c CQueue.c
 */



#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "CQueue.h"



int main()
{
   CQueue* fila = CQueue_New( 5 );

   // printf( "La capacidad de la cola es: %ld\n", CQueue_Capacity( fila ) );

   int miCont = 5;
   while( !CQueue_IsFull( fila ) )
   {
      printf( "q<- %d\n", miCont );
      CQueue_Enqueue( fila, miCont );
      ++miCont;

      // printf( "El número de elementos actuales en la cola es: %ld\n", CQueue_Len( fila ) );
   }
   printf( "\n" );

   // printf( CQueue_IsFull( fila ) ? "La cola está llena\n" : "La cola no está llena\n" );
   // printf( CQueue_IsEmpty( fila ) ? "La cola está vacía\n" : "La cola no está vacía\n" );

   while( !CQueue_IsEmpty( fila ) )
   {
      printf( "q-> %d\n", CQueue_Dequeue( fila ) );

      // printf( "El número de elementos actuales en la cola es: %ld\n", CQueue_Len( fila ) );
   }
   printf( "\n" );

   // printf( CQueue_IsFull( fila ) ? "La cola está llena\n" : "La cola no está llena\n" );
   // printf( CQueue_IsEmpty( fila ) ? "La cola está vacía\n" : "La cola no está vacía\n" );

   CQueue_Delete( &fila );
   assert( fila == NULL );
}
