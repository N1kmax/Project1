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
		cout << "������� " << number_name[i] << " ��� ���� ?" << endl;
		cin >> x;
		if (x < 0) 
		{
			while (x<0) 
			{
				cout << "����� ������� ����" << endl;
				cin >> x;
			}
		}
		Car::n_int[i] = x;
		Car::cost_car += cost_int[i];
		Car::weight += weight_i[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << "����� �������� " << item_name[i] << " �� ����� 1(������)/2(�������)/3(�������)" << endl;
		if (x != 1 || x != 2 || x != 3)
		{
			while (x != 1 || x != 2 || x != 3)
			{
				cout << "������ �����" << endl;
				cin >> x;
			}
		}
		Car::q[i] = type[i][x];
		Car::cost_car += cost_s[i][x];
		Car::weight += weight_s[i][x];
	}
	cout << "�������� ������" << endl;
	cin >> a;
	Car::name = a;
	Car::ouput();
}

void Car::ouput() 
{
	cout << "��� ������: " << Car::name << endl;
	for (int i = 0; i < 5; i++)
		cout << "���������� " << Car::number_name[i] << ": " << Car::n_int[i] << endl;
	for (int i = 0; i < 7; i++)
		cout << "�������� " << Car::item_name[i] << ": " << Car::q[i] << endl;
}