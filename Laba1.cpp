#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdio>
#include <Windows.h>
#include <cmath>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };
void screen_exit();
void screen1();
void screen2();
void screen3(double& lengthRoomX, double& widthRoomY, double& heightRoomZ, bool& error);
void vivod(double& lengthRoomX, double& widthRoomY, double& heightRoomZ, int& a);
void proverka_error(int& weight, int& height, bool &error);
int main()
{
	bool proverka = true;
	char chose;
    setlocale(LC_ALL, "rus");
    screen1();
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13){
		system("cls");
		screen2();
	}
	else if (chose == 27){
		system("cls");
		screen_exit();
	}
    return 0;
}
void screen_exit()
{
	system("cls");
	int height = 7;
	int weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 14) cout << "Кол-во обоев";
				else if (j == weight - 11) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 9) cout << "Завершила свою работу";
				else if (j == weight - 20) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 26)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Повтор";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	bool proverka = true;
	char chose;
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13)
	{
		system("cls");
		screen2();
	}
	else if (chose == 27)
	{
		system("cls");
		exit(0);
	}
}
void screen1()
{
	int height =7;
	int weight = 40;

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}

	cout << "\n";

	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 14) cout << "Кол-во обоев";
				else if (j == weight - 11) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Гр. 1092";
				else if (j == weight - 7) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 8) cout << "Феденко Ефим Михайлович";
				else if (j == weight - 22) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 25)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Далее";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
}
void screen2()
{
	double lengthRoomX, widthRoomY, heightRoomZ;
	int height = 7, weight = 40;
	bool error=true;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5|| i==6) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 10) cout << "Введите Размер комнаты";
				else if (j == weight - 21) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Длина[1…100.00]:";
				else if (j == weight - 15) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Ширина[1…100.00]:";
				else if (j == weight - 16) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Высота[1…100.00]:";
				else if (j == weight - 16) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	proverka_error(weight, height, error);
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	do {
	position = { 28, 4 };
	SetConsoleCursorPosition(hConsole, position);
		cin >> lengthRoomX;
		if (lengthRoomX <= 1 || lengthRoomX >= 100) {
			error = false;
			position = { 0, 8 };
			SetConsoleCursorPosition(hConsole, position);
		    proverka_error(weight,height,error);
		}
	} while (lengthRoomX<=1 || lengthRoomX>= 100);
	do {
		position = { 29, 5 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> widthRoomY;
		if (widthRoomY <= 1 || widthRoomY >= 100) {
			error = false;
			position = { 0, 8 };
			SetConsoleCursorPosition(hConsole, position);
			proverka_error(weight, height, error);
		}
	} while (widthRoomY <= 1 || widthRoomY >= 100);
	do {
		position = { 29, 6 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> heightRoomZ;
		if (heightRoomZ <= 1 || heightRoomZ >= 100) {
			error = false;
			position = { 0, 8 };
			SetConsoleCursorPosition(hConsole, position);
			proverka_error(weight, height, error);
		}
	} while (heightRoomZ <= 1 || heightRoomZ >= 100);
	error = true;
		//system("cls");
		screen3(lengthRoomX,widthRoomY,heightRoomZ,error);
}
void screen3(double &lengthRoomX, double  &widthRoomY, double  &heightRoomZ,bool &error)
{
	int a,height = 7,weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i==0||i==1||i == 2 || i == 3 || i == 4||i==5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 0) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Выберите тип обоев:";
				else if (j == weight - 18) cout << "|";
				else cout << " ";
			}
			else if (i == 1) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "1)0.53м*10м";
				else if (j == weight - 10) cout << "|";
				else cout << " ";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "2)0.53м*15м";
				else if (j == weight - 10) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "3)1.06м*10м";
				else if (j == weight - 10) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "4)1.06м*25м";
				else if (j == weight - 10) cout << "|";
				else cout << " ";
			}
			else if (i ==5) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << " ";
				else if (j == weight - 0) cout << "|";
				else cout << " ";
			}
			else
			cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	proverka_error( weight,height,error);

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	do {
		position = { 31, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> a;
		if(a<1||a>4) {
			error = false;
			position = { 0, 15 };
			SetConsoleCursorPosition(hConsole, position);
			proverka_error(weight, height, error);
		}
	}while(a>4||a<1);
	position = { 0, 15 };
	SetConsoleCursorPosition(hConsole, position);
	error = true;
	proverka_error(weight, height, error);
	position = { 1, 13 };
	SetConsoleCursorPosition(hConsole, position);
	vivod(lengthRoomX, widthRoomY, heightRoomZ, a);
	position = { 1, 17 };
	SetConsoleCursorPosition(hConsole, position);
	system("pause");
	system("cls");
	screen_exit();
}
void vivod(double& lengthRoomX, double& widthRoomY, double& heightRoomZ,int &a)
{
	double P, polosroom, polosroll, sumroll;
	if (a == 1)
	{
		const double rollX1 = 0.53, rollY1 = 10;
		P = (lengthRoomX + widthRoomY) * 2;
		polosroom = P / rollX1;
		polosroll = rollY1 / heightRoomZ;
		sumroll = polosroom / polosroll;
		cout << "Нужно купить " << ceil(sumroll) << " рулонов " << rollX1 << "м.на " << rollY1 << "м.";
	}
	else if (a == 2)
	{
		const double rollX1 = 0.53, rollY1 = 15;
		P = (lengthRoomX + widthRoomY) * 2;
		polosroom = P / rollX1;
		polosroll = rollY1 / heightRoomZ;
		sumroll = polosroom / polosroll;
		cout << "Нужно купить " << ceil(sumroll) << " рулонов " << rollX1 << "м.на " << rollY1 << "м.";
	}
	else if (a == 3)
	{
		const double rollX1 = 1.06, rollY1 = 10;
		P = (lengthRoomX + widthRoomY) * 2;
		polosroom = P / rollX1;
		polosroll = rollY1 / heightRoomZ;
		sumroll = polosroom / polosroll;
		cout << "Нужно купить " << ceil(sumroll) << " рулонов " << rollX1 << "м.на " << rollY1 << "м.";
	}
	else if (a == 4)
	{
		const double rollX1 = 1.06, rollY1 = 25;
		P = (lengthRoomX + widthRoomY) * 2;
		polosroom = P / rollX1;
		polosroll = rollY1 / heightRoomZ;
		sumroll = polosroom / polosroll;
		cout << "Нужно купить " << ceil(sumroll) << " рулонов " << rollX1 << "м.на " << rollY1 << "м.";
	}
}
void proverka_error(int& weight, int& height, bool& error)
{
	if (error == true)
	{
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j <= weight; j++) {
				if (j == 0 || j == weight - 12)
					cout << "|";
				else if (j == 14) {
					cout << "Enter - Далее";
				}
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
	else if(error==false) {
		for (int i = 0; i < 1; i++)
		{
			for (int j = 0; j <= weight; j++) {
				if (j == 0 || j == weight - 20)
					cout << "|";
				else if (j == 10) {
					cout << "Ошибка! Enter - Далее";
				}
				else
					cout << " ";
			}
			cout << "\n";
		}
	}
}