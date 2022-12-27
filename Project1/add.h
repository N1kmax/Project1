#ifndef ADD_H
#define ADD_H
class Car 
{
private:
	const string number_name[5] = { "wheels", "doors", "lights", "mirrors", "body"};
	int n_int[5];
	int cost_car, weight;
	string name;
	const string item_name[7] = { "suspension", "trunk", "hood", "engine", "Transmission", "salon", "spoiler" };
	string q[7];
public:
	void input();
	void ouput();
};

#endif