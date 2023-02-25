#include<iostream>
#include <string>
#include<vector>

/*�������� ����� ������.
������ ����� ������ ������� ������ � ���� ��������� �� �
������ � ���������� �������� ��������.

����������:
��� ������������ ������ ������� ���������� �������

��������� ������ � �������� ��� ������ ������ � ������ � ������ ������ �� ������

�������� ���������� ������

������� ������� ��������� ������ �� ��������� � ���������� ����� ������ ������� �������� ������ 
������ ������ �� ������� �������
������� ������� �������� ������ �� ����������� ������ � ������� ������� ��
����� 3 ������ ������.
� ������� Main ����������������� ������ ������ � ���������� ������*/

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


