// Командный проект. Группа ПИ-53.
// Команда: Махалов (в. 52), Касаткин (в. 16, техлид).
#include <iostream>
#include "makhalov.h"
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "ivanov.h"
// #include "petrov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;
int main() {
	int choice;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "1.	Процент от числа\n";
		cout << "2.	Процент числа от другого числа\n";
		cout << "3.	Исходное число\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1: {
			double a, p;

			cout << "Введите число a и процент p: ";
			cin >> a >> p;

			cout << "Результат = " << percentOf(p, a) << "\n";
			break;
		}

		case 2: {
			double a, b;

			cout << "Введите числа a и b: ";
			cin >> a >> b;

			cout << "Результат = " << whatPercent(a, b) << "%\n";
			break;
		}

		case 3: {
			double a, p;

			cout << "Введите число a и процент p: ";
			cin >> a >> p;

			cout << "Исходное число = " << numberFromPercent(a, p) << "\n";
			break;
		}

			// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);
	return 0;
}
