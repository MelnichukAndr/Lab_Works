#include "Snake.h"
using namespace System;
using namespace System::Windows::Forms;

//[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Snake::Snake form;
	Application::Run(% form);
}
//Конструктор



struct vector {
	int X;
	int Y;
};

vector direction;
vector position_of_fruit;
vector game_area;

Snake::Snake::Snake(void)// 
{
	InitializeComponent();

	//Размеры игровой зоны
	game_area.X = 500;
	game_area.Y = 500;

	firstLaunch = true; // запоминаем первый запуск игры
	NewGame();
}
void Snake::Snake::GeneratePositionFruit()
{
	Random^ rand = gcnew Random();
	
	position_of_fruit.X = rand->Next(10, game_area.X);
	position_of_fruit.Y = rand->Next(140, game_area.Y);
	
	for( int i = 0; i < length_of_snake; i++)
	{
		if(position_of_fruit.X == snake_body[i]->Location.X && position_of_fruit.Y == snake_body[i]->Location.Y)
			GeneratePositionFruit();
	}
	//Преобразование для коректного движения по сетке игровой зоны, т.е чтобы было кратно шагу
	int tempX = position_of_fruit.X % step;
	position_of_fruit.X -= tempX;

	int tempY = position_of_fruit.Y % step;
	position_of_fruit.Y -= tempY;

	//Присвоение позиции фрукту
	fruit->Location = Point(position_of_fruit.X, position_of_fruit.Y);
	
	//Добавление фрукта на форму
	this->Controls->Add(fruit);
}

void Snake::Snake::Eating()
{
	if (snake_body[0]->Location.X == position_of_fruit.X && position_of_fruit.Y) { //Голова змеи совпадает с позицией фрукта
		/*System::Media::SoundPlayer^ simpleSound = gcnew System::Media::SoundPlayer("C:\\Users\Homo\source\repos\dimensenss\Lab_Works\Labs  (2 semester)\Snake\sounds\1.mp3");
		simpleSound->Play();*/
		
		laberScore->Text = "Очки: " + length_of_snake++;//Увеличиваем счет
		
		snake_body[length_of_snake] = gcnew PictureBox();//Добавляем новое звено в массив змеи
		
		snake_body[length_of_snake]->Location = Point( // Добавляем в конец массива змени новое звено
			snake_body[length_of_snake - 1]->Location.X + step * direction.X, 
			snake_body[length_of_snake - 1]->Location.Y - step * direction.Y);
		
		snake_body[length_of_snake]->BackColor = Color::Green;
		snake_body[length_of_snake]->Width = step;
		snake_body[length_of_snake]->Height = step;
		this->Controls->Add(snake_body[length_of_snake]);

		GeneratePositionFruit();
		
	}
}

void Snake::Snake::Movement()
{
	for (int i = length_of_snake; i >=1; i--) {
		snake_body[i]->Location = snake_body[i - 1]->Location; // Отображение предыдушего движения змеи
	}
	snake_body[0]->Location = Point(snake_body[0]->Location.X + direction.X * step, snake_body[0]->Location.Y + direction.Y * step); // Движение головы змеи
}

void Snake::Snake::EatYourself()
{
	for (int i = 1; i < length_of_snake; i++) {
		if (snake_body[0]->Location == snake_body[i]->Location) { // если голова касаеться любого звена змеи
			GameOver();
		}
	}
}

void Snake::Snake::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void Snake::Snake::NewGame()
{
	if (!firstLaunch) { // если не первый запуск игры
		this->Controls->Remove(fruit); //удаляем фрукт

		for (int i = 0; i <= length_of_snake; i++) //очищаем массив змеи
			this->Controls->Remove(snake_body[i]);

		length_of_snake = 0; //обнуляем счёт
	}
	else
		firstLaunch = false; // если первый запуск игры, то теперь это не первый запуск
	//Инициалиция змейки
	
	snake_body = gcnew array <PictureBox^, 1>(400);
	snake_body[0] = gcnew PictureBox();
	snake_body[0]->Location = Point(200, 200);
	snake_body[0]->BackColor = Color::Red;
	//snake_body[0]->Image = Image::FromFile("1.jpg");
	snake_body[0]->Width = step;
	snake_body[0]->Height = step;

	length_of_snake = 0;
	this->Controls->Add(snake_body[0]);
	
	//Инициалиция фрукта
	fruit = gcnew PictureBox();
	//fruit->Image = Image::FromFile("1.jpg");
	fruit->BackColor = Color::Black;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	timer->Interval = updateInterval; //задаем интервал обновления
	timer->Start();
	 //Направление при запуске
	direction.X = 1;
	direction.Y = 0;

	play = true;
	die = false;

	laberScore->Text = "Очки: 0";

	//Скрываем окна
	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}


void Snake::Snake::ChackBorders()
{
	if (snake_body[0]->Location.X >= RightBorder->Location.X || snake_body[0]->Location.X <= LeftBorder->Location.X) {
		
		GameOver();
	}

	if (snake_body[0]->Location.Y <= UpperBorder->Location.Y || snake_body[0]->Location.Y >= LowerBorder->Location.Y) {
		
		GameOver();
	}
}

System::Void Snake::Snake::менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Snake::новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
	return System::Void();
}

System::Void Snake::Snake::паузаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) 
		play = false;
	
	else
	{
		play = true;
		timer->Start();
	}
	return System::Void();
}

System::Void Snake::Snake::информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("fjfjfj","name");
}

System::Void Snake::Snake::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void Snake::Snake::скоростьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false) {
		//pause
		play = false;
		//логика enable/disable реализована из-за numeticUpDown, чтобы можно было пользовать клавишами для игры и они были доступны для вввода скорости
		buttonApplySpeed->Enabled = true;
		numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else {
		//continue
		play = true;
		timer->Start();

		buttonApplySpeed->Enabled = false;
		numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}


System::Void Snake::Snake::Snake_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "Right") {
		direction.X = 1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Left") {
		direction.X = -1;
		direction.Y = 0;
	}
	else if (e->KeyCode.ToString() == "Up") {
		direction.Y = -1;
		direction.X = 0;
	}
	else if (e->KeyCode.ToString() == "Down") {
		direction.Y = 1;
		direction.X = 0;
	}

	return System::Void();
}

void Snake::Snake::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play) {
		Movement();
		Eating();
		EatYourself();
		ChackBorders();
	}
	else if (die && play) {
		timer->Stop();
		MessageBox::Show("Окончено!", "Внимание!");
	}
	else if (!play && !die) {
		timer->Stop();
		MessageBox::Show("Приостановленно!", "Внимание!");
	}
}

System::Void Snake::Snake::buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(numericUpDownSpeedSnake->Value);
	timer->Interval = updateInterval;

	buttonApplySpeed->Enabled = false;
	numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	
	play = true;
	timer->Start();

	return System::Void();
}
