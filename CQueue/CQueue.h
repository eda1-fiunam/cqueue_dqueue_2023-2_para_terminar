
#ifndef  CQUEUE_INC
#define  CQUEUE_INC

#include <stdlib.h>
// para malloc and friends

#include <stdbool.h>
// para bool, true y false

#include <assert.h>
// para assert

typedef struct
{
	int* queue;
	size_t front;
	size_t back;
	size_t len;
	size_t capacity;
} CQueue;

CQueue* CQueue_New(       size_t capacity );
void    CQueue_Delete(    CQueue** this );
void    CQueue_Enqueue(   CQueue* this, int val );
int     CQueue_Dequeue(   CQueue* this );
int     CQueue_Peek(      CQueue* this );
bool    CQueue_IsFull(    CQueue* this );
bool    CQueue_IsEmpty(   CQueue* this );
void    CQueue_MakeEmpty( CQueue* this );
size_t  CQueue_Len(       CQueue* this );
size_t  CQueue_Capacity(  CQueue* this );



#endif   /* ----- #ifndef CQUEUE_INC  ----- */
