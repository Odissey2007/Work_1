#include <iostream>
#include <string> // ��� ������ �� �������� ���� char
#include <Windows.h> // ��� ������� �����
#include <algorithm>//� ���������� ���� ������� ���������� �������� (�������, ��������)
#include<fstream>//���������� ��� ������ � �������

//using namespace std;

int main (int ��������������, char* ��������� []) {
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);//��� ����� � ������ � ������� �������� ������ (�������� 1251
	SetConsoleCP(1251);//��� ����� � ������ � ������� �������� ������ (�������� 1251
	//=======================================================
	if (�������������� == 1) 	std::cout << "��������� �������� ��� ���������� \n";	// ����� ���� If ��� ������ {}
	//=======================================================
	std::cout << "������������� �������: " << ���������[2] << "\n";
	

	auto �����=10;
	std::cin >> �����;


	return 0;
}



