#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	/*Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
	недели, соответствующее данному числу(1 — «понедельник», 2 — «втор -
	18 М.Э.Абрамян.Электронный задачник Programming Taskbook 4.5
	ник» и т.д.).*/
	/*int day;
	cin >> day;
	switch (day)
	{
	case 1: cout << "Понедельник" << endl; break;
	case 2: cout << "Вторник" << endl; break;
	case 3: cout << "Среда" << endl; break;
	case 4: cout << "Четверг" << endl; break;
	case 5: cout << "Пятница" << endl; break;
	case 6: cout << "Суббота" << endl; break;
	case 7: cout << "Воскресенье" << endl; break;
	default: cout << "Ошибочный день недели" << endl;
	}*/
	//Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно»,
	//3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,то вывести строку «ошибка».
	/*int K;
	cin >> K;
	switch (K)
	{
	case 1: cout << "Плохо" << endl; break;
	case 2: cout << "Неудовлетворительно" << endl; break;
	case 3: cout << "Удовлетворительно" << endl; break;
	case 4: cout << "Хорошо" << endl; break;
	case 5: cout << "Отлично" << endl; break;
	default: cout << "ошибка" << endl;
	}*/
	//Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
	//«весна», «лето», «осень»).
	/*int mes;
	cin >> mes;
	switch (mes)
	{
	case 1:
	case 2:
	case 12: cout << "Зима" << endl; break;
	case 3:
	case 4:
	case 5: cout << "Весна" << endl; break;
	case 6:
	case 7:
	case 8: cout << "Лето" << endl; break;
	case 9:
	case 10:
	case 11: cout << "Осень" << endl; break;

	
	default: cout << "ошибка" << endl;*/
	//Case4◦.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
	//февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.
	/*int month;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10: 
	case 12: cout << "31 день" << endl; break;
	case 4:
	case 6: 
	case 9:
	case 11:cout << "30 дней" << endl; break;
	case 2: cout << "28 дней" << endl; break;
	default: cout << "ошибка" << endl;
	}*/
	/*Case5.Арифметические действия над числами пронумерованы следующим
	образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
	номер действия N(целое число в диапазоне 1–4) и вещественные числа A
	и B(В не равно 0).Выполнить над числами указанное действие и вывести
	результат.*/	/*double A, B;	cin >> A >> B;	int N;	cin >> N;	switch (N) {	case 1: cout << A + B << endl; break;	case 2: cout << A - B << endl; break;	case 3: cout << A * B << endl; break;	case 4: cout << A / B << endl; break;	default: cout << "ошибка" << endl; 	}*/	//1
	/*int a;
	cin >> a;
	if (a == 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//2
	/*int a;
	cin >> a;
	if (a > 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//3
	/*int a;
	cin >> a;
	if (a < 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//4
	/*int a;
	cin >> a;
	if (a >= 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//5
	/*int a;
	cin >> a;
	if (a <= 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//6
	/*int a;
	cin >> a;
	if (a != 0) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//9
	/*bool test = true;
	if (test = true) {
		cout << "Верно";
	}
	else{
		cout << "Неверно";
	}*/
	//10
	/*bool test = true ;
	if (test != true) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//11
	/*int a;
	cin >> a;
	if (a > 0 && a < 5) {
		cout << "Верно";
	}
	else {
		cout << "Неверно";
	}*/
	//12
	/*int a;
	cin >> a;
	if (a == 0 || a == 2) {
		a = a + 7;
		cout << a << endl;
	}
	else {
		a = a / 10;
		cout << a << endl;
	}*/
	//13
	/*int a,b;
	cin >> a >> b;
	if (a <= 1 && b >= 3) {
		cout << a + b << endl;
	}
	else {
		cout << a - b << endl;
	}*/
	//14
	/*int a,b;
	cin >> a >> b;
	if ((a > 2 && a < 11) || (b >= 6 && b < 14)) {
		cout << "Верно" << endl;
	}
	else {
		cout << "Неверно" << endl;
	}*/
	//15
	/*int num;
	cin >> num;
	switch (num)
	{
	case 1: cout << "Зима" << endl; break;
	case 2: cout << "Весна" << endl; break;
	case 3: cout << "Лето" << endl; break;
	case 4: cout << "Осень" << endl; break;
	}*/




	


}