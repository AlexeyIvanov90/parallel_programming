#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <mpi.h>

#define SIZE 256
#define T_MAX 4
#define CURIE_SCALE 1000.

int **alloc_2d_int(int rows, int cols);

struct data_bufer{
	double E;
	double M;
	int ratio;
};


void calcW();//вычисление вероятностей перехода
void init();//создание начальной конфигурации
void metropolis();//реализация алгоритма Метрополиса
void step(int step);//число шагов Монте-Карло
void output_data();//вычисление среднего на спин, вывод необходимых данных
void create_data();//создание файла с данными
void load_data();//загрузка файла с данными
void test();//проверка на корректность результата

#endif /* MAIN_H_ */
