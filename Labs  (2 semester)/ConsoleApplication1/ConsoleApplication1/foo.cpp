#include "foo.h"


table* create_list_by_hand()
{
	table* current, * head, * previous;

	head = previous = current = new table;
	int N = 0;

	cout << "������� �������� ���������, ��� ���, ���������� � ������� �������\n";
	cin >> current->name >> current->type >> current->cnt >> current->sq;

	char c = 'y';

	while (N < 20 && c == 'y')
	{
		current = new table;

		if (head == nullptr)
			head = current; // ���� ��� ��������� � ������, �� ������ ������� ���������� ������
		else
			previous->next = current; // ���������� ��������� �� �������

		previous = current; // ���������� ���������� �������

		cin >> current->name >> current->type >> current->cnt >> current->sq;

		cout << "Fill the next one?(y/other key)\n";
		c = _getch();
		++N;
	}
	previous->next = nullptr; //����� ������
	return head;
}

table* create_list_random() {
	table* current, * head, * previous;

	head = previous = current = new table;


	int N;
	cout << "Enter N: ";
	cin >> N;
	char symbol[3] = { 'T','�','�' };
	string names[12] = { "�����","�����","�����","������","������","������","����","�����","��������","������","������","�������" };
	string sign[10] = { "0-100","0-10","0-20","15-30","35-50","40-70","10-40","0-25","75-100","15-65" };

	strcpy_s(current->name, names[rand() % 12].c_str());
	current->type = symbol[rand() % 3];
	strcpy_s(current->cnt, sign[rand() % 10].c_str());
	current->sq = (double)(rand()) / RAND_MAX * 100;
	--N;

	for (int i = 0; i < N; i++)
	{
		current = new table;
		if (head == nullptr)
			head = current; // ���� ��� ��������� � ������, �� ������ ������� ���������� ������
		else
			previous->next = current; // ���������� ��������� �� �������

		previous = current; // ���������� ���������� �������


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
		if (strcmp(current->cnt, count) == 0)
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

void add_to_begin(table** head) {
	table* current = new table;
	cout << "\n������� �������� � ���-��:\n";
	cin >> current->name >> current->type >> current->cnt >> current->sq;
	current->next = *head; // ������ ������� ���������� ������
	*head = current; // ������ ������� ���������� ������
}
void add_to_end(table* head) {
	table* current = head;
	table* previous = nullptr;

	while (current)
	{
		previous = current;
		current = current->next;
	}
	current = new table;
	cout << "\n������� �������� � ���-��:\n";
	cin >> current->name >> current->type >> current->cnt >> current->sq;
	previous->next = current; // ���������� ��������� �� �������
	current->next = nullptr; // ����� ������
}

void add_after_element(table* head)
{
	table* current = head;
	table* previous = head;
	char name[12];
	cout << "\n������� �������� ���������: ";
	cin >> name;
	while (current)
	{
		if (strcmp(previous->name, name) == 0)
		{
			current = new table;
			current->next = previous->next; // ���������� ��������� �� �������
			previous->next = current; // ���������� ���������� �������
			cout << "\n������� �������� � ���-��:\n";
			cin >> current->name >> current->type >> current->cnt >> current->sq;
			break;
		}

		previous = current; // ���������� ���������� �������
		current = current->next; // ������� ���������� ���������

	}
}

void delete_first(table** head) {
	table* current = *head;
	*head = current->next;
	delete current;
}
void delete_last(table** head) {
	table* current = *head;
	table* previous = nullptr;
	while (current->next) {
		previous = current;
		current = current->next;
	}
	if (previous == nullptr) {
		delete_first(head);
		return;
	}
	previous->next = nullptr;
	delete current;
}
void delete_element(table** head) {
	table* current = *head;
	table* previous = nullptr;
	char name[11];
	cout << "\n������� �������� ���������: ";
	cin >> name;
	if (strcmp(current->name, name) == 0) {
		delete_first(head);
		system("cls");
		return;
	}
	while (current) {
		if (strcmp(current->name, name) == 0) {
			previous->next = current->next;
			delete current;
			system("cls");
			return;
		}
		else {
			previous = current;
			current = current->next;
		}
	}
}

void sort(table* head) {
	table* left = head;
	table* right = head->next;
	while (left->next) { // ���� �� ����� �� ����� ������
		while (right) {
			if ((strcmp(left->name, right->name) > 0)) { // ���� ����� ������ ������� �� ��������
				swap(left->name, right->name);
				swap(left->type, right->type);
				swap(left->cnt, right->cnt);
				swap(left->sq, right->sq);
			}
			right = right->next; // ��������� � ���������� ��������
		}
		left = left->next; // ��������� � ���������� ��������
		right = left->next; // ��������� � ���������� ��������
	}
}

void input_in_file(table* head) {
	table* current = head;
	
	FILE* f;
	//char fname[] = "file.txt";
	fopen_s(&f, "file.txt", "rt");
	
	while (current)
	{
		fprintf(f, "\n[ %-11s   %10c   %13s   %10.1f ]", current->name, current->type, current->cnt, current->sq);
		current = current->next;
	}
	cout << "\n";
	fclose(f);
}