#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
		
			//InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâèëàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñêîğîñòüToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ GameData;

	private: System::Windows::Forms::Label^ Score;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ Game_over;

	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàÏğîäîëæèòüToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ Topbound;
	private: System::Windows::Forms::PictureBox^ Bottombound;
	private: System::Windows::Forms::PictureBox^ Rightbound;
	private: System::Windows::Forms::PictureBox^ Leftbound;
	private: System::Windows::Forms::Button^ buttonNewGame;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonFast;


	private: System::Windows::Forms::Button^ buttonMedium;

	private: System::Windows::Forms::Button^ buttonSlow;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâèëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñêîğîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GameData = (gcnew System::Windows::Forms::GroupBox());
			this->Score = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Game_over = (gcnew System::Windows::Forms::Label());
			this->Topbound = (gcnew System::Windows::Forms::PictureBox());
			this->Bottombound = (gcnew System::Windows::Forms::PictureBox());
			this->Rightbound = (gcnew System::Windows::Forms::PictureBox());
			this->Leftbound = (gcnew System::Windows::Forms::PictureBox());
			this->buttonNewGame = (gcnew System::Windows::Forms::Button());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonFast = (gcnew System::Windows::Forms::Button());
			this->buttonMedium = (gcnew System::Windows::Forms::Button());
			this->buttonSlow = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->GameData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->BeginInit();
			this->groupBoxSettings->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ìåíşToolStripMenuItem,
					this->ïğàâèëàToolStripMenuItem, this->âûõîäToolStripMenuItem, this->ñêîğîñòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(547, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàÏğîäîëæèòüToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâàÿÈãğàToolStripMenuItem_Click);
			// 
			// ïàóçàÏğîäîëæèòüToolStripMenuItem
			// 
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Name = L"ïàóçàÏğîäîëæèòüToolStripMenuItem";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(227, 26);
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/Ïğîäîëæèòü";
			this->ïàóçàÏğîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàóçàÏğîäîëæèòüToolStripMenuItem_Click);
			// 
			// ïğàâèëàToolStripMenuItem
			// 
			this->ïğàâèëàToolStripMenuItem->Name = L"ïğàâèëàToolStripMenuItem";
			this->ïğàâèëàToolStripMenuItem->Size = System::Drawing::Size(84, 24);
			this->ïğàâèëàToolStripMenuItem->Text = L"Ïğàâèëà";
			this->ïğàâèëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğàâèëàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// ñêîğîñòüToolStripMenuItem
			// 
			this->ñêîğîñòüToolStripMenuItem->Name = L"ñêîğîñòüToolStripMenuItem";
			this->ñêîğîñòüToolStripMenuItem->Size = System::Drawing::Size(87, 24);
			this->ñêîğîñòüToolStripMenuItem->Text = L"Ñêîğîñòü";
			this->ñêîğîñòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñêîğîñòüToolStripMenuItem_Click);
			// 
			// GameData
			// 
			this->GameData->Controls->Add(this->Score);
			this->GameData->Location = System::Drawing::Point(12, 42);
			this->GameData->Name = L"GameData";
			this->GameData->Size = System::Drawing::Size(200, 100);
			this->GameData->TabIndex = 1;
			this->GameData->TabStop = false;
			this->GameData->Text = L"Ñ÷¸ò";
			// 
			// Score
			// 
			this->Score->AutoSize = true;
			this->Score->Location = System::Drawing::Point(3, 18);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(56, 16);
			this->Score->TabIndex = 0;
			this->Score->Text = L"Î÷êè : 0";
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::GameForm_Update);
			// 
			// Game_over
			// 
			this->Game_over->AutoSize = true;
			this->Game_over->BackColor = System::Drawing::Color::Transparent;
			this->Game_over->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Game_over->Location = System::Drawing::Point(224, 180);
			this->Game_over->Name = L"Game_over";
			this->Game_over->Size = System::Drawing::Size(144, 35);
			this->Game_over->TabIndex = 3;
			this->Game_over->Text = L"Game Over";
			this->Game_over->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Game_over->Visible = false;
			// 
			// Topbound
			// 
			this->Topbound->BackColor = System::Drawing::Color::GreenYellow;
			this->Topbound->Location = System::Drawing::Point(20, 150);
			this->Topbound->Name = L"Topbound";
			this->Topbound->Size = System::Drawing::Size(510, 5);
			this->Topbound->TabIndex = 4;
			this->Topbound->TabStop = false;
			// 
			// Bottombound
			// 
			this->Bottombound->BackColor = System::Drawing::Color::GreenYellow;
			this->Bottombound->Location = System::Drawing::Point(18, 655);
			this->Bottombound->Name = L"Bottombound";
			this->Bottombound->Size = System::Drawing::Size(510, 5);
			this->Bottombound->TabIndex = 5;
			this->Bottombound->TabStop = false;
			// 
			// Rightbound
			// 
			this->Rightbound->BackColor = System::Drawing::Color::GreenYellow;
			this->Rightbound->Location = System::Drawing::Point(525, 150);
			this->Rightbound->Name = L"Rightbound";
			this->Rightbound->Size = System::Drawing::Size(5, 510);
			this->Rightbound->TabIndex = 6;
			this->Rightbound->TabStop = false;
			// 
			// Leftbound
			// 
			this->Leftbound->BackColor = System::Drawing::Color::GreenYellow;
			this->Leftbound->Location = System::Drawing::Point(18, 150);
			this->Leftbound->Name = L"Leftbound";
			this->Leftbound->Size = System::Drawing::Size(5, 510);
			this->Leftbound->TabIndex = 7;
			this->Leftbound->TabStop = false;
			// 
			// buttonNewGame
			// 
			this->buttonNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonNewGame->Location = System::Drawing::Point(453, 42);
			this->buttonNewGame->Name = L"buttonNewGame";
			this->buttonNewGame->Size = System::Drawing::Size(75, 50);
			this->buttonNewGame->TabIndex = 8;
			this->buttonNewGame->Text = L"Íîâàÿ èãğà";
			this->buttonNewGame->UseVisualStyleBackColor = true;
			this->buttonNewGame->Click += gcnew System::EventHandler(this, &MyForm::buttonNewGame_Click);
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->label3);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Controls->Add(this->label1);
			this->groupBoxSettings->Controls->Add(this->buttonFast);
			this->groupBoxSettings->Controls->Add(this->buttonMedium);
			this->groupBoxSettings->Controls->Add(this->buttonSlow);
			this->groupBoxSettings->Location = System::Drawing::Point(172, 218);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(222, 129);
			this->groupBoxSettings->TabIndex = 9;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Íàñòğîéêè";
			this->groupBoxSettings->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Áûñòğî";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ñğåäíå";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ìåäëåííî";
			// 
			// buttonFast
			// 
			this->buttonFast->Location = System::Drawing::Point(125, 95);
			this->buttonFast->Name = L"buttonFast";
			this->buttonFast->Size = System::Drawing::Size(91, 23);
			this->buttonFast->TabIndex = 2;
			this->buttonFast->Text = L"Ïğèìåíèòü";
			this->buttonFast->UseVisualStyleBackColor = true;
			this->buttonFast->Click += gcnew System::EventHandler(this, &MyForm::buttonFast_Click);
			// 
			// buttonMedium
			// 
			this->buttonMedium->Location = System::Drawing::Point(125, 66);
			this->buttonMedium->Name = L"buttonMedium";
			this->buttonMedium->Size = System::Drawing::Size(91, 23);
			this->buttonMedium->TabIndex = 1;
			this->buttonMedium->Text = L"Ïğèìåíèòü";
			this->buttonMedium->UseVisualStyleBackColor = true;
			this->buttonMedium->Click += gcnew System::EventHandler(this, &MyForm::buttonMedium_Click);
			// 
			// buttonSlow
			// 
			this->buttonSlow->Location = System::Drawing::Point(125, 37);
			this->buttonSlow->Name = L"buttonSlow";
			this->buttonSlow->Size = System::Drawing::Size(91, 23);
			this->buttonSlow->TabIndex = 0;
			this->buttonSlow->Text = L"Ïğèìåíèòü";
			this->buttonSlow->UseVisualStyleBackColor = true;
			this->buttonSlow->Click += gcnew System::EventHandler(this, &MyForm::buttonSlow_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(547, 753);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->buttonNewGame);
			this->Controls->Add(this->Leftbound);
			this->Controls->Add(this->Rightbound);
			this->Controls->Add(this->Bottombound);
			this->Controls->Add(this->Topbound);
			this->Controls->Add(this->Game_over);
			this->Controls->Add(this->GameData);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->GameData->ResumeLayout(false);
			this->GameData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->EndInit();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: PictureBox^ fruit;//ôğóêò
	private: array<PictureBox^>^ snake;//ìàññèâ çìå¸
	private: Bitmap^ bit;
	private: bool play;//èãğà
	private: bool die;//ñìåğòü
	private: bool firstLaunch;//ïåğâûé çàïóñê
	private: int step = 10;//øàã ñåòêè
	private: float updateInterval = 80;//èíòåğâàë îáíîâëåíèÿ
	private: int score = 0;//ñ÷åò 

	private: void GeneratePositionFruit();
	private: void Eating();
	private: void Movement();
	private: void EatYourself();
	private: void GameOver();
	private: void NewGame();
	private: void CheckBorders();
		
private: System::Void íîâàÿÈãğàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïàóçàÏğîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñêîğîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ïğàâèëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void buttonSlow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMedium_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFast_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonNewGame_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	
private: void GameForm_Update(Object^ obgect, EventArgs^ e);




//private: System::Void ñêîğîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);



};
}
