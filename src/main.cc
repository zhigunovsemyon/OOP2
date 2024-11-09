/*
Разработать в виде методов операции над объектами класса:
сложение, вычитание, умножение, изменение отдельных частей и
получение/изменение параметров объектов (арифметику класса).
Результат выполнения в текущем объекте.
*/

#include "matr.h"   /* Матрица */
#include <ctime>    /*time()*/
#include <iostream> /*cout*/

int main(void) {
	// Инициализация генератора случайных чисел
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	// Создание прямоугольной матрицы
	Matrix & heapm = *new Matrix(1, 2);
	heapm.randomise(0, 9).print();

	heapm.transpose().print();

	delete &heapm;
	return EXIT_SUCCESS;
}
