#include "Source.cpp"
const string type[7][3];
const int weight_s[7][3];
const int weight_i[5];
const int cost_int[5];
const int cost_s[7][3];
void Car::input() 
{
	string a;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cout << "Сколько " << number_name[i] << " вам надо ?" << endl;
		cin >> x;
		if (x < 0) 
		{
			while (x<0) 
			{
				cout << "Число меньшее нуля" << endl;
				cin >> x;
			}
		}
		Car::n_int[i] = x;
		Car::cost_car += cost_int[i];
		Car::weight += weight_i[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "Какое качество " << item_name[i] << " вы хотие 1(Плохое)/2(Среднее)/3(Хорошее)" << endl;
		if (x != 1 || x != 2 || x != 3)
		{
			while (x != 1 || x != 2 || x != 3)
			{
				cout << "Другое число" << endl;
				cin >> x;
			}
		}
		Car::q[i] = type[i][x];
		Car::cost_car += cost_s[i][x];
		Car::weight += weight_s[i][x];
	}
	cout << "Назовите машину" << endl;
	cin >> a;
	Car::name = a;
	Car::ouput();
}

void Car::ouput() 
{
	cout << "Имя машини: " << Car::name << endl;
	for (int i = 0; i < 5; i++)
		cout << "Количество " << Car::number_name[i] << ": " << Car::n_int[i] << endl;
	for (int i = 0; i < 7; i++)
		cout << "Качество " << Car::item_name[i] << ": " << Car::q[i] << endl;
}