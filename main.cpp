// Командный проект. Группа ПИ-53.
// Команда: Махалов (в. 52), Касаткин (в. 16, техлид).
#include <iostream>
#include <cmath>
#include <locale.h>


// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "kasatkin.h"
#include "makhalov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;
int main() {
	int choice;
	int a, b;
	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";
		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
		cout << "1. Объем\n";
		cout << "2. Образующая\n";
		cout << "3. Площадь боковой поверхности\n";

		cout << "4.	Процент от числа\n";
		cout << "5.	Процент числа от другого числа\n";
		cout << "6.	Исходное число\n";
		
		// === КОНЕЦ БЛОКА МЕНЮ ===
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;
		switch (choice) {
			// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
			cout << "Введите радиус a и высоту b: ";
			cin >> a >> b;
			cout << "Объем = " << coneVolume(a, b) << "\n";
			break;
		case 2:
			cout << "Введите радиус a и высоту b: ";
			cin >> a >> b;
			cout << "Образующая = " << coneSlant(a, b) << "\n";
			break;
		case 3:
			cout << "Введите радиус a и образующую b: ";
			cin >> a >> b;
			cout << "Площадь боковой поверхности = " << coneLateral(a, b) << "\n";
			break;

		case 4: {
			double a, p;

			cout << "Введите число a и процент p: ";
			cin >> a >> p;

			cout << "Результат = " << percentOf(p, a) << "\n";
			break;
		}

		case 5: {
			double a, b;

			cout << "Введите числа a и b: ";
			cin >> a >> b;

			cout << "Результат = " << whatPercent(a, b) << "%\n";
			break;
		}

		case 6: {
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
