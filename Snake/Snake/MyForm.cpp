#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Snake::MyForm form;
	Application::Run(% form);
}
struct Vector2 {
	int X, Y;
};

Vector2 direction;//����������� ������
Vector2 positionFruit;//������� ������
Vector2 gameArea;//������� ����

//����������� �����
Snake::MyForm::MyForm(void)
{
	InitializeComponent();

	//������� ������� ����
	gameArea.X = 500;
	gameArea.Y = 500;

	firstLaunch = true;//������ ������
	NewGame();//����� ����

}

//��������� �������� ����
void Snake::MyForm::GeneratePositionFruit()
{
	//��������� ��������� ������� ������
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(100, (gameArea.X-100));//10 - �������� ������������ ����� �����
	positionFruit.Y = rand->Next(150, (gameArea.Y-100));//120 - �������� ������� ������� ������������ ����� �����

	//����������� �������� ����� ���� ������ ����
	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;

	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	//�������� ��� ����� �� �������� �� ������
	for (int i = 0; i < score; i++)
	{
		if (positionFruit.X == snake[i]->Location.X && positionFruit.Y == snake[i]->Location.Y)
		{
			GeneratePositionFruit();
		}
	}

	//����������� ������� ������
	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	//��������� ������ �� �����
	this->Controls->Add(fruit);
}

void Snake::MyForm::Eating()
{
	//�������� ������ ���� � ������� ������
	if (snake[0]->Location.X == positionFruit.X && snake[0]->Location.Y == positionFruit.Y) {
		Score->Text = "����: " + ++score;

		//��������� ����� ������� ������
		snake[score] = gcnew PictureBox();
		snake[score]->Location = Point(snake[score - 1]->Location.X + step * direction.X, snake[score - 1]->Location.Y - step * direction.Y);
		Bitmap^ bit = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/body_snake.png");
		snake[score]->Image = bit;
		snake[score]->SizeMode = PictureBoxSizeMode::StretchImage;
		snake[score]->BackColor = Color::Silver;
		snake[score]->Width = step;
		snake[score]->Height = step;
		this->Controls->Add(snake[score]);
		
		GeneratePositionFruit();
	}
}

void Snake::MyForm::Movement()
{
	//������� ������ ������� ������
	for (int i = score; i >= 1; i--)
	{
		snake[i]->Location = snake[i - 1]->Location;
	}
	snake[0]->Location = Point(snake[0]->Location.X + direction.X * step, snake[0]->Location.Y + direction.Y * step);
}

void Snake::MyForm::EatYourself()
{
	//�������� ������� ������ ����� ������
	for (int i = 1; i < score; i++) {
		if (snake[0]->Location == snake[i]->Location)
		{
			GameOver();
		}
	}
}

void Snake::MyForm::GameOver()
{
	play = false;
	die = true;

	Game_over->Visible = true;
	//MyFormMainFormMenu->Visible = true;
}

void Snake::MyForm::NewGame()
{
	//���� ������������� ����, �� ������� ������� � �����
	if (!firstLaunch)
	{
		this->Controls->Remove(fruit);
		if (!firstLaunch) {
			for (int i = 0; i <= score; i++)
			{
				this->Controls->Remove(snake[i]);
			}
		}
	}
	else
	{
		firstLaunch = false;
	}
	//����� ������
	play = true;
	die = false;


	score = 0;
	//������� ������
	snake = gcnew array <PictureBox^, 1>(400);
	snake[0] = gcnew PictureBox();
	Bitmap^ serpens = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/head_snake.png");
	snake[0]->Image = serpens;
	snake[0]->SizeMode = PictureBoxSizeMode::StretchImage;
	snake[0]->Location = Point(250, 250);
	snake[0]->BackColor = Color::SlateGray;//���� ������
	snake[0]->Width = step;
	snake[0]->Height = step;

	this->Controls->Add(snake[0]);

	//������� �����
	fruit = gcnew PictureBox();
	Bitmap^ apple = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/apple.png");
	fruit->Image = apple;
	fruit->SizeMode = PictureBoxSizeMode::StretchImage;
	fruit->BackColor = Color::Blue;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	//������ ������ ��� ���������� � ��������� ������ ��� ���������� 
	timer->Interval = updateInterval;
	timer->Start();

	//������ ����������� �� �������
	direction.X = 0;
	direction.Y = 0;

	Score->Text = "����: 0";

	//�������� �������� ���������� �� �����
	Game_over->Visible = false;
	//MyFormMainFormMenu->Visible = false;
}

void Snake::MyForm::CheckBorders()
{
	if (snake[0]->Location.X >= Rightbound->Location.X || snake[0]->Location.X <= Leftbound->Location.X) {
		//direction.X *= -1;//���������� � �������� �����������
		GameOver();
	}

	if (snake[0]->Location.Y <= Topbound->Location.Y || snake[0]->Location.Y >= Bottombound->Location.Y) {
		//direction.Y *= -1;//���������� � �������� �����������
		GameOver();
	}

	//Fruitcoord->Text = "���������� ������: (" + Convert::ToString(fruit->Location.X) + ", " + Convert::ToString(fruit->Location.Y) + ")";
	//Snakecoord->Text = "���������� ������: (" + Convert::ToString(snake[0]->Location.X) + ", " + Convert::ToString(snake[0]->Location.Y) + ")";
}

//���������� �������
System::Void Snake::MyForm::���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
}

System::Void Snake::MyForm::���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	else
	{
		play = true;
		timer->Start();
	}

	return System::Void();

}

System::Void Snake::MyForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (play) {
		play = false;
	}
	MessageBox::Show("������� ����:\n1. ��� ���������� ����������� �������\n2. ����� ������ ����� �����\n3. ������ ���� ���� � ��������� � �����.", "������� ����!");

	return System::Void();
}

System::Void Snake::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}


System::Void Snake::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{

	//��������� ������� �������
	if (e->KeyCode.ToString() == "Right")//39
	{
		if (direction.X != -1)
		{
			direction.X = 1;
			direction.Y = 0;
			Bitmap^ right = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/head_snake_right.png");
			snake[0]->Image = right;
			snake[0]->SizeMode = PictureBoxSizeMode::StretchImage;
			Bitmap^ bit = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/body_snake_right.png");
			snake[score]->Image = bit;
			snake[score]->SizeMode = PictureBoxSizeMode::StretchImage;

		}

	}
	else if (e->KeyCode.ToString() == "Left")//37
	{
		if (direction.X != 1)
		{
			direction.X = -1;
			direction.Y = 0;
			Bitmap^ left = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/head_snake_left.png");
			snake[0]->Image = left;
			snake[0]->SizeMode = PictureBoxSizeMode::StretchImage;
			Bitmap^ bit = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/body_snake_left.png");
			snake[score]->Image = bit;
			snake[score]->SizeMode = PictureBoxSizeMode::StretchImage;
		}

	}
	else if (e->KeyCode.ToString() == "Up")//38
	{
		if (direction.Y != 1)
		{
			direction.Y = -1;
			direction.X = 0;
			Bitmap^ up = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/head_snake.png");
			snake[0]->Image = up;
			snake[0]->SizeMode = PictureBoxSizeMode::StretchImage;
			Bitmap^ bit = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/body_snake.png");
			snake[score]->Image = bit;
			snake[score]->SizeMode = PictureBoxSizeMode::StretchImage;
		}

	}
	else if (e->KeyCode.ToString() == "Down")//40
	{
		if (direction.Y != -1)
		{
			direction.Y = 1;
			direction.X = 0;
			Bitmap^ down = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/head_snake_down.png");
			snake[0]->Image = down;
			snake[0]->SizeMode = PictureBoxSizeMode::StretchImage;
			Bitmap^ bit = gcnew Bitmap("C:/Users/Homo/source/repos/dimensenss/Lab_Works/Snake/resources/body_snake_down.png");
			snake[score]->Image = bit;
			snake[score]->SizeMode = PictureBoxSizeMode::StretchImage;
		}

	}

	return System::Void();
}

//���������� ����
void Snake::MyForm::GameForm_Update(Object^ obgect, EventArgs^ e)
{
	if (!die && play)
	{
		Movement();//������ �������� ������
		Eating();//�������� ��� ����� �����
		EatYourself();//�������� ��� ����� ����
		CheckBorders();//�������� �� ������������ �� ������ 
	}
	else if (!play && !die)
	{
		timer->Stop();
	}
	else if (!play && !die) {
		timer->Stop();
		MessageBox::Show("��������������!", "��������!");
	}
}

System::Void Snake::MyForm::buttonNewGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
}


System::Void Snake::MyForm::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (groupBoxSettings->Visible == false) {
		//pause
		play = false;
		//������ enable/disable ����������� ��-�� numeticUpDown, ����� ����� ���� ���������� ��������� ��� ���� � ��� ���� �������� ��� ������ ��������
		buttonSlow->Enabled = true;
		buttonMedium->Enabled = true;
		buttonFast->Enabled = true;
		//numericUpDownSpeedSnake->Enabled = true;
		groupBoxSettings->Visible = true;
	}
	else {
		//continue
		play = true;
		timer->Start();

		buttonSlow->Enabled = false;
		buttonMedium->Enabled = false;
		buttonFast->Enabled = false;
		//numericUpDownSpeedSnake->Enabled = false;
		groupBoxSettings->Visible = false;
	}
}

System::Void Snake::MyForm::buttonSlow_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(300);
	timer->Interval = updateInterval;

	buttonSlow->Enabled = false;
	//numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	
	play = true;
	timer->Start();
	return System::Void();
}

System::Void Snake::MyForm::buttonMedium_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(150);
	timer->Interval = updateInterval;

	buttonMedium->Enabled = false;
	//numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	
	play = true;
	timer->Start();
	return System::Void();
}

System::Void Snake::MyForm::buttonFast_Click(System::Object^ sender, System::EventArgs^ e)
{
	updateInterval = Convert::ToSingle(80);
	timer->Interval = updateInterval;

	buttonFast->Enabled = false;
	//numericUpDownSpeedSnake->Enabled = false;
	groupBoxSettings->Visible = false;

	
	play = true;
	timer->Start();
	return System::Void();
}
