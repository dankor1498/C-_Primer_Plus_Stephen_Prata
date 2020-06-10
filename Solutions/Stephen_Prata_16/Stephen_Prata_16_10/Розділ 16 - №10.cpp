// Розділ 16 - №10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include "func.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<sReview> books;

	Review *temp = new Review;
	while (FillReview(temp)) {
		books.push_back(sReview(temp));
		temp = new Review;
	}
	delete temp;
		

	if (books.size() > 0)
	{
		cout << "Спасибо. Вы ввели "
			<< books.size() << " книги:\n";
		bool flag = true;
		while (flag == true) {
			cout << "\nОтобразить: \n" <<
				"1 - в исходном порядке;\n"
				"2 - в алфавитном порядке;\n"
				"3 - в порядке возрастания рейтинга;\n"
				"4 - в порядке возрастания цены;\n"
				"5 - в порядке уменьшения цены;\n"
				"6 - выход.\n\n";
						
			int s;
			cin >> s;
			while (find(m.begin(), m.end(), s) == m.end()) {
				cout << "Неверный ввод. Повторите: ";
				cin >> s;
			}

			switch (s)
			{
			case 1:
				cout << "\nРейтинг\tКнига\t\tПрайс\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 2:
				sort(books.begin(), books.end());
				cout << "\nРейтинг\tКнига\t\tПрайс\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 3:
				sort(books.begin(), books.end(), worseThan);
				cout << "\nРейтинг\tКнига\t\tПрайс\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 4:
				sort(books.begin(), books.end(), worseThan_2);
				cout << "\nРейтинг\tКнига\t\tПрайс\n";
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 5:
				sort(books.begin(), books.end(), worseThan_2);
				cout << "\nРейтинг\tКнига\t\tПрайс\n";
				for_each(books.rbegin(), books.rend(), ShowReview);
				break;
			default:
				flag = false;
				break;
			}
		}
	}
	else
		cout << "Нет списка. ";
	cout << "\nПока.\n";
	cin.get();
	return 0;
}

