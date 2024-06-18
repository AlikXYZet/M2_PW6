#include "PW.h"



int main2()
{
	// Переменная размерности матриц
	int MatrixDimension = 10;

	// Инициализация списка (первой матрицы) с типом int
	List_i M1;

	// Заполнение через std::generate
	std::cout
		<< "Заполнение первой одномерной матрицы\n"
		<< "с целочисленными значениями в диапазоне [0; 9]:\n";
	rMax = 10;
	std::generate_n(std::back_inserter(M1), MatrixDimension, randomInt);

	// Вывод данных
	print_list<List_i>(M1);



	// Инициализация списка (второй матрицы) с типом int
	List_i M2;

	// Заполнение через std::generate
	std::cout
		<< "Заполнение второй одномерной матрицы\n"
		<< "с целочисленными значениями в диапазоне [0; 9]:\n";
	rMax = 10;
	std::generate_n(std::back_inserter(M2), MatrixDimension, randomInt);

	// Вывод данных
	print_list<List_i>(M2);



	// Инициализация списка (сумма матриц) с типом int
	List_i M_Sum;

	// Суммирование через std::transform
	std::cout
		<< "Матрица с результатом суммы первой и второй матриц:\n";
	std::transform(M1.cbegin(), M1.cend(), M2.cbegin(), std::back_inserter(M_Sum), [](const List_i::value_type& e1, const List_i::value_type& e2)
		{
			return e1 + e2;
		});

	// Вывод данных
	print_list<List_i>(M_Sum);



	return 0;
}