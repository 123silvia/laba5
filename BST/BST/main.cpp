#include "BST.h"
#include<locale>

void main() {
	Node *tree = NULL;//инициализация дерева для меню
	Node *tree_test = NULL; //инициализация дерева для теста
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		cout << "______________МЕНЮ:___________" << endl;
		cout << "1. Просмотр дерева (иерархической PKI)" << endl;
		cout << "2. Очистка дерева (иерархической PKI)" << endl;
		cout << "3. Вставка в дерево (иерархическую PKI)" << endl;
		cout << "4. Удаление удаление из дерева (иерархической PKI)" << endl;
		cout << "5. Построение цепочки доверия в иерархической PKI (обход в глубину)" << endl;
		cout << "6. Ввод готового дерева(иерархической PKI)" << endl;
		cout << "0. ВЫХОД ИЗ МЕНЮ" << endl;
		int t;
		INT_64 key;
		string val;
		//ввод кода меню
		cin >> t;
		switch (t)
		{
		case 1:
			//распечатка дерева
			print_BST(tree);
			break;
		case 2:
			//очистка дерева
			if (drop_BST(tree)==true) { cout << "Дерево (иерархическая PKI) либо пустое, либо же было удалено." << endl; }
			else { cout << "Дерево (иерархическая PKI) было успешно удалено." << endl; }
			break;
		case 3:
			//добавление узла в дерево с вводом значения
			cout << "Ввести ключ:" << endl;
			cin >> key;
			cout << "Ввести значение: " << endl;
			cin >> val;
			add_BST(key, val, tree);
			//распечатка получившегося дерева (иерахическая PKI)
			cout << "Дерево (иерархическая PKI):" << endl;
			print_BST(tree);
			break;
		case 4: 
			//удаление узла в дереве (иерархической PKI) с вводом значения
			cout << "Ввести ключ:" << endl;
			cin >> key;
			delete_BST(tree, key);
			//распечатка получившегося дерева (иерахическая PKI)
			cout << "Дерево (иерархическая PKI):" << endl;
			print_BST(tree);
			break;
		case 5:
			cout << "Введите ключ: " << endl;
			cin >> key;
			cout << "Построение цепочки доверия для "<<key<<" в иерархической PKI (обход в глубину): ";
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
			//распечатка получившегося дерева (иерахическая PKI)
			cout << "Дерево (иерархическая PKI):" << endl;
			print_BST(tree);
			break;
		default:
			exit(0);
		}
	}
	system("pause");
}