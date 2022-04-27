#include "foo.h"
//bool is_empty() {
//	return first == nullptr;
//}

table* create_list_by_hand()
{
	table *current, *head, *previous;
	
	head = previous = current = new table;
	int N = 0;
	
	cout << "Введите название материала, его тип, количество и процент наценки\n";
	cin >> current->name >> current->type >> current->cnt >> current->sq;
	
	char c = 'y';
	
	while (N < 20 && c == 'y')
	{
		current = new table;

		if (head == nullptr)
			head = current; // если нет элементов в списке, то первый элемент становится первым
		else
			previous->next = current; // предыдущий указывает на текущий
		
		previous = current; // предыдущий становится текущим
		
		cin >> current->name >> current->type >> current->cnt >> current->sq;
		
		cout << "Fill the next one?(y/other key)\n";
		c = _getch();
		++N;
	}
	previous->next = nullptr; //конец списка
	return head;
}

table* create_list_random() {
	table* current, * head, * previous;

	head = previous = current = new table;


	int N;
	cout << "Enter N: ";
	cin >> N;
	char symbol[3] = { 'T','М','Д' };
	string names[5] = { "Олово","Сталь","Чугун","Золото","Бронза" };
	string sign[10] = { "0-100","0-10","0-20","15-30","35-50","40-70","10-40","0-25","75-100","15-65" };

	strcpy_s(current->name, names[rand() % 5].c_str());
	current->type = symbol[rand() % 3];
	strcpy_s(current->cnt, sign[rand() % 10].c_str());
	current->sq = (double)(rand()) / RAND_MAX * 100;
	--N;
	
	for (int i = 0; i < N; i++)
	{
		current = new table;
		if (head == nullptr)
			head = current; // если нет элементов в списке, то первый элемент становится первым
		else
			previous->next = current; // предыдущий указывает на текущий

		previous = current; // предыдущий становится текущим
		
		
		strcpy_s(current->name, names[rand() % 5].c_str());
		current->type = symbol[rand() % 3];
		strcpy_s(current->cnt, sign[rand() % 10].c_str());
		current->sq = (double)(rand()) / RAND_MAX * 100;
	}
	previous->next = nullptr;
	return head;
}


void print_list(table* head) {
	table* current = head;
	while (current != nullptr)
	{
		printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
		
	}
	cout << "\n";
}
//void print_one(table* head) {
//	table* current = head;
//	
//		printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->sc, current->cnt, current->sq);
//		current = current->next;
//
//	cout << "\n";
//}
table* search_by_name(table* head, char* name) {
	table* current = head;
	while (current)
	{
		if (strcmp(current->name, name) == 0)
			printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
	}
	return nullptr;
}
table* search_by_type(table* head, char type) {
	table* current = head;
	while (current)
	{
		if (current->type == type)
			printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
	}
	return nullptr;
}
table* search_by_cnt(table* head, char* count) {
	table* current = head;
	while (current) {
		if (strcmp(current->cnt, count)==0)
			printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
	}
	return nullptr;
}
table* search_by_sq(table* head, float sq) {
	table* current = head;
	while (current) {
		if (round(current->sq * 10) / 10 == sq)
			printf("\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
	}
	return nullptr;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	table* head = nullptr;
	while (1) {
		int a;
		cout << "1. Создать список по ручному вводу\n2. Создать список по случайному вводу\n3. Вывести список\n4. Поиск по названию\n5. Выход\n";
		cin >> a;
		switch (a) {
		case 1:
			head = create_list_by_hand();
			system("cls");
			break;

		case 2:
			head = create_list_random();
			system("cls");
			break;

		case 3:
			if (head == NULL) {
				printf("%s\n", "list is null");
				//return NULL;
			}
			print_list(head);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			cout << "Выбор по критерию\n 1 - название материала\n 2 - его тип\n 3 - количество\n 4 - процент наценки\n > ";
			int b;
			cin >> b;
			switch (b) {
			case 1:
				if (head == NULL) {
					printf("%s\n", "list is null");
					return NULL;
				}
				cout << "Введите название материала: ";
				char name[20];
				cin >> name;
				search_by_name(head, name);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 2:
				cout << "Введите тип материала: ";
				char type;
				cin >> type;
				search_by_type(head, type);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 3:
				cout << "Введите количество материала: ";
				char cnt[20];
				cin >> cnt;
				search_by_cnt(head, cnt);
				cout << "\n";
				system("pause");
				system("cls");
				break;

			case 4:
				cout << "Введите процент наценки: ";
				float sq;
				cin >> sq;
				search_by_sq(head, sq);
				system("pause");
				system("cls");
				break;
			}
			break;
		case 5:
			exit(0);

		}
	}
}


