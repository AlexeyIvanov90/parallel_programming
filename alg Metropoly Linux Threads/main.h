#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <pthread.h>

#define SIZE 256
#define T_MAX 4
#define CURIE_SCALE 1000.
#define THREADS 8//кол-во потоков

void calcW();//вычисление вероятностей перехода
void init();//создание начальной конфигурации
void* metropolis(void* thread_data);//реализация алгоритма Метрополиса
void step(int step);//число шагов Монте-Карло
void outputData();//вычисление среднего на спин, вывод необходимых данных
void create_data();//создание файла с данными
void load_data();//загрузка файла с данными
void test();//проверка на корректность результата

#endif /* MAIN_H_ */
