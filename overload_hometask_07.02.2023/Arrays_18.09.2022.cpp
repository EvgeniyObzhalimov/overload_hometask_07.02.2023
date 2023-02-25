#include<iostream>
#include <string>
#include<vector>

/*Создайте класс строки.
данный класс должен хранить строку в виде указателя на её
начало и количества хранимых символов.

Реализуйте:
Все конструкторы строки которые посчитаете нужными

операторы работы с потоками для записи данных в строку и вывода данных из строки

оператор квадратных скобок

функцию которая принимает строку по параметру и возвращает новую строку которая содержит данные 
первой строки до первого пробела
функцию которая получает строку по константной ссылке и которая выводит на
экран 3 символ строки.
В функции Main продемонстрируйте работу строки и выполненых задачь*/

class String {
public:
	String(std::string) :lit_() {};
	
		
	std::string begin()const {
		return row_;
	}

	void print(std::string obj) {
		obj = row_;
		std::cout << row_;
}
	char& operator [](int i) {
		return lit_[i];
	}
	int size() {
		return size_;
	}
	
private:
	std::vector <char> lit_;
	std::string row_;
	int size_;

};

std::ostream & operator <<(std::ostream& out, const String& var) {
	out << var.begin();
		return out << var.begin();
}

std::istream& operator >>(std::istream& in, String& var) {
	std::string tmp;
	in >> tmp;
	var = tmp;
	return in;
}


int main() {
	setlocale(LC_ALL, "Russian");
	String a{"Hell"};
	
	a.print("hell");

	std::cout<<a.size();
	

	




	return 0;


}


