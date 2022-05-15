#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Snake
	/// </summary>
	public ref class Snake : public System::Windows::Forms::Form
	{
	public:
		Snake(void);

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~Snake()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èíôîğìàöèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBoxGameData;
	private: System::Windows::Forms::ToolStripMenuItem^ ñêîğîñòüToolStripMenuItem;
	private: System::Windows::Forms::Label^ laberScore;

	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonApplySpeed;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownSpeedSnake;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ LowerBorder;
	private: System::Windows::Forms::PictureBox^ UpperBorder;



	private: System::Windows::Forms::PictureBox^ RightBorder;
	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::Timer^ timer;





	private: System::Windows::Forms::Label^ labelGameOver;







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Snake::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èíôîğìàöèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñêîğîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBoxGameData = (gcnew System::Windows::Forms::GroupBox());
			this->laberScore = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplySpeed = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSpeedSnake = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBoxGameData->SuspendLayout();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ìåíşToolStripMenuItem,
					this->èíôîğìàöèÿToolStripMenuItem, this->âûõîäToolStripMenuItem, this->ñêîğîñòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(574, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			this->ìåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::ìåíşToolStripMenuItem_Click);
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ïàóçàToolStripMenuItem
			// 
			this->ïàóçàToolStripMenuItem->Name = L"ïàóçàToolStripMenuItem";
			this->ïàóçàToolStripMenuItem->Size = System::Drawing::Size(172, 26);
			this->ïàóçàToolStripMenuItem->Text = L"Ïàóçà";
			this->ïàóçàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::ïàóçàToolStripMenuItem_Click);
			// 
			// èíôîğìàöèÿToolStripMenuItem
			// 
			this->èíôîğìàöèÿToolStripMenuItem->Name = L"èíôîğìàöèÿToolStripMenuItem";
			this->èíôîğìàöèÿToolStripMenuItem->Size = System::Drawing::Size(116, 24);
			this->èíôîğìàöèÿToolStripMenuItem->Text = L"Èíôîğìàöèÿ";
			this->èíôîğìàöèÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::èíôîğìàöèÿToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::âûõîäToolStripMenuItem_Click);
			// 
			// ñêîğîñòüToolStripMenuItem
			// 
			this->ñêîğîñòüToolStripMenuItem->Name = L"ñêîğîñòüToolStripMenuItem";
			this->ñêîğîñòüToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->ñêîğîñòüToolStripMenuItem->Text = L"Ñêîğîñòü";
			this->ñêîğîñòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Snake::ñêîğîñòüToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBoxGameData
			// 
			this->groupBoxGameData->Controls->Add(this->laberScore);
			this->groupBoxGameData->Location = System::Drawing::Point(374, 31);
			this->groupBoxGameData->Name = L"groupBoxGameData";
			this->groupBoxGameData->Size = System::Drawing::Size(198, 64);
			this->groupBoxGameData->TabIndex = 2;
			this->groupBoxGameData->TabStop = false;
			this->groupBoxGameData->Text = L"Òåêóùàÿ èãğà:";
			// 
			// laberScore
			// 
			this->laberScore->AutoSize = true;
			this->laberScore->Font = (gcnew System::Drawing::Font(L"Cambria", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->laberScore->Location = System::Drawing::Point(3, 18);
			this->laberScore->Name = L"laberScore";
			this->laberScore->Size = System::Drawing::Size(89, 27);
			this->laberScore->TabIndex = 0;
			this->laberScore->Text = L"Î÷êè: 0";
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->numericUpDownSpeedSnake);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Location = System::Drawing::Point(187, 203);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(282, 96);
			this->groupBoxSettings->TabIndex = 3;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Íàñòğîéêè";
			this->groupBoxSettings->Visible = false;
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->Location = System::Drawing::Point(201, 67);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 5;
			this->buttonApplySpeed->Text = L"Îê";
			this->buttonApplySpeed->UseVisualStyleBackColor = true;
			this->buttonApplySpeed->Click += gcnew System::EventHandler(this, &Snake::buttonApplySpeed_Click);
			// 
			// numericUpDownSpeedSnake
			// 
			this->numericUpDownSpeedSnake->Location = System::Drawing::Point(137, 16);
			this->numericUpDownSpeedSnake->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSpeedSnake->Name = L"numericUpDownSpeedSnake";
			this->numericUpDownSpeedSnake->Size = System::Drawing::Size(120, 22);
			this->numericUpDownSpeedSnake->TabIndex = 4;
			this->numericUpDownSpeedSnake->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ââåäèòå ñêîğîñòü:";
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::Color::IndianRed;
			this->LowerBorder->Location = System::Drawing::Point(12, 668);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(550, 10);
			this->LowerBorder->TabIndex = 5;
			this->LowerBorder->TabStop = false;
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::Color::IndianRed;
			this->UpperBorder->Location = System::Drawing::Point(12, 128);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(550, 10);
			this->UpperBorder->TabIndex = 6;
			this->UpperBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::Color::IndianRed;
			this->RightBorder->Location = System::Drawing::Point(562, 128);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(10, 550);
			this->RightBorder->TabIndex = 7;
			this->RightBorder->TabStop = false;
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::Color::IndianRed;
			this->LeftBorder->Location = System::Drawing::Point(2, 128);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 550);
			this->LeftBorder->TabIndex = 8;
			this->LeftBorder->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &Snake::GameForm_Update);
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGameOver->ForeColor = System::Drawing::Color::DarkSlateGray;
			this->labelGameOver->Location = System::Drawing::Point(208, 161);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(180, 38);
			this->labelGameOver->TabIndex = 9;
			this->labelGameOver->Text = L"Game Over!";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// Snake
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 703);
			this->Controls->Add(this->labelGameOver);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->groupBoxGameData);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Snake";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Snake::Snake_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxGameData->ResumeLayout(false);
			this->groupBoxGameData->PerformLayout();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSpeedSnake))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Äàííûå èãğû
		
	private: PictureBox^ fruit;// fruit picturebox
	private: array<PictureBox^>^ snake_body;// snake pictureboxes
	private: bool play;// game play status
	private: bool die;// game die status
	private: bool firstLaunch;// first launch status
	private: int step = 10;// snake step
	private: float updateInterval = 100;// snake update interval
	private: int length_of_snake = 0;// score
		   //Äåéñòâèÿ
	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void ChackBorders();



		//Îáğàáîòêà íàæàòèé íà êíîïêè

private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïàóçàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èíôîğìàöèÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e); 
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñêîğîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	


	 //Íàæàòèå êëàâèø
private: System::Void Snake_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	//Ñîáûòèå ïî îáíîâëåíèş èãğû
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);

};
}
