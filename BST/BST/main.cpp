#include "BST.h"
#include<locale>

void main() {
	Node *tree = NULL;//������������� ������ ��� ����
	Node *tree_test = NULL; //������������� ������ ��� �����
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		cout << "______________����:___________" << endl;
		cout << "1. �������� ������ (������������� PKI)" << endl;
		cout << "2. ������� ������ (������������� PKI)" << endl;
		cout << "3. ������� � ������ (������������� PKI)" << endl;
		cout << "4. �������� �������� �� ������ (������������� PKI)" << endl;
		cout << "5. ���������� ������� ������� � ������������� PKI (����� � �������)" << endl;
		cout << "6. ���� �������� ������(������������� PKI)" << endl;
		cout << "0. ����� �� ����" << endl;
		int t;
		INT_64 key;
		string val;
		//���� ���� ����
		cin >> t;
		switch (t)
		{
		case 1:
			//���������� ������
			print_BST(tree);
			break;
		case 2:
			//������� ������
			if (drop_BST(tree)==true) { cout << "������ (������������� PKI) ���� ������, ���� �� ���� �������." << endl; }
			else { cout << "������ (������������� PKI) ���� ������� �������." << endl; }
			break;
		case 3:
			//���������� ���� � ������ � ������ ��������
			cout << "������ ����:" << endl;
			cin >> key;
			cout << "������ ��������: " << endl;
			cin >> val;
			add_BST(key, val, tree);
			//���������� ������������� ������ (������������ PKI)
			cout << "������ (������������� PKI):" << endl;
			print_BST(tree);
			break;
		case 4: 
			//�������� ���� � ������ (������������� PKI) � ������ ��������
			cout << "������ ����:" << endl;
			cin >> key;
			delete_BST(tree, key);
			//���������� ������������� ������ (������������ PKI)
			cout << "������ (������������� PKI):" << endl;
			print_BST(tree);
			break;
		case 5:
			cout << "������� ����: " << endl;
			cin >> key;
			cout << "���������� ������� ������� ��� "<<key<<" � ������������� PKI (����� � �������): ";
			DFS_BST(tree, key);
			break;
		case 6:
			add_BST(10, "Target_CS", tree);
			add_BST(15, "CS_2", tree);
			add_BST(18, "CS_6", tree);
			add_BST(14, "CS_5", tree);
			add_BST(19, "User_6", tree);
			add_BST(17, "User_5", tree);
			add_BST(12, "User_4", tree);
			add_BST(4, "CS_1", tree);
			add_BST(6, "CS_4", tree);
			add_BST(7, "User_3", tree);
			add_BST(5, "User_2", tree);
			add_BST(3, "CS_3", tree);
			add_BST(2, "User_1", tree);
			//���������� ������������� ������ (������������ PKI)
			cout << "������ (������������� PKI):" << endl;
			print_BST(tree);
			break;
		default:
			exit(0);
		}
	}
	system("pause");
}