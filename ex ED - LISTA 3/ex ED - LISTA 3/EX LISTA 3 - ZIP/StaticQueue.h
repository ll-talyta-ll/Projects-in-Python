// PROF NAO ALTEREI A ESTRUTURA QUE O SENHOR TINHA DISPONIBILIZADO 
#pragma once
#ifndef __STATIC_QUEUE_H__
#define __STATIC_QUEUE_H__

// Estrutura de dados do tipo Fila.
const int STATIC_QUEUE_CAPACITY = 8;

struct StaticQueue
{
	int front;
	int rear;
	int count;

	char values[STATIC_QUEUE_CAPACITY];
};

// Sintaxe da fun��o:
// <tipo do retorno> <nome da fun��o>(<par�metros, caso exista>);

//Create()
//Cria e retorna uma fila vazia.
//
//Pr� - condi��o: N / A.
//P�s - condi��o : Uma nova fila vazia � criada.
StaticQueue Create();

//Enqueue(queue, elem)
//Insere o elemento elem no fim da fila queue, se a fila n�o estiver cheia.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : O final da fila cont�m o elemento elem OU erro se a fila estiver cheia.
bool Enqueue(StaticQueue& queue, char elem);

//Dequeue(queue)
//Remove e retorna o primeiro elemento da fila queue, se a fila n�o estiver vazia.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : Remove e retorna o primeiro elemento da fila OU erro se a fila estiver vazia.
char Dequeue(StaticQueue& queue);

//Front(queue)
//Retorna uma refer�ncia do elemento que est� no come�o da fila(mas n�o o remove), se a fila n�o estiver vazia.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : Retorna o primeiro elemento da fila sem remov� - lo OU erro se a fila estiver vazia.
char Front(const StaticQueue& queue);

//Size(queue)
//Retorna a capacidade da fila.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : N / A.
int Size(const StaticQueue& queue);

//Count(queue)
//Retorna a quantidade de elementos na fila.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : N / A.
int Count(const StaticQueue& queue);

//IsEmpty(queue)
//Retorna true se a fila estiver vazia ou falso, caso contr�rio.
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : N / A.
bool IsEmpty(const StaticQueue& queue);

//Clear(queue)
//Esvazia a fila(remove todos os elementos da fila).
//
//Pr� - condi��o: A fila queue � v�lida.
//P�s - condi��o : A fila queue est� vazia.
bool Clear(StaticQueue& queue);

#endif // __STATIC_QUEUE_H__+