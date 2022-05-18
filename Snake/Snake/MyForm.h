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












	private: System::Windows::Forms::ToolStripMenuItem^ ñêîğîñòüToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonApplySpeed;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown;













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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonApplySpeed = (gcnew System::Windows::Forms::Button());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->GameData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Topbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Bottombound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rightbound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Leftbound))->BeginInit();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(711, 28);
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
			this->GameData->BackColor = System::Drawing::Color::CornflowerBlue;
			this->GameData->Controls->Add(this->Score);
			this->GameData->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GameData->ForeColor = System::Drawing::SystemColors::HighlightText;
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
			this->Score->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Score->Location = System::Drawing::Point(6, 53);
			this->Score->Name = L"Score";
			this->Score->Size = System::Drawing::Size(143, 40);
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
			this->Game_over->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Game_over->Location = System::Drawing::Point(243, 171);
			this->Game_over->Name = L"Game_over";
			this->Game_over->Size = System::Drawing::Size(232, 44);
			this->Game_over->TabIndex = 3;
			this->Game_over->Text = L"Game Over";
			this->Game_over->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Game_over->Visible = false;
			// 
			// Topbound
			// 
			this->Topbound->BackColor = System::Drawing::Color::White;
			this->Topbound->Location = System::Drawing::Point(0, 148);
			this->Topbound->Name = L"Topbound";
			this->Topbound->Size = System::Drawing::Size(710, 5);
			this->Topbound->TabIndex = 4;
			this->Topbound->TabStop = false;
			// 
			// Bottombound
			// 
			this->Bottombound->BackColor = System::Drawing::Color::White;
			this->Bottombound->Location = System::Drawing::Point(0, 805);
			this->Bottombound->Name = L"Bottombound";
			this->Bottombound->Size = System::Drawing::Size(710, 5);
			this->Bottombound->TabIndex = 5;
			this->Bottombound->TabStop = false;
			// 
			// Rightbound
			// 
			this->Rightbound->BackColor = System::Drawing::Color::White;
			this->Rightbound->Location = System::Drawing::Point(705, 150);
			this->Rightbound->Name = L"Rightbound";
			this->Rightbound->Size = System::Drawing::Size(5, 660);
			this->Rightbound->TabIndex = 6;
			this->Rightbound->TabStop = false;
			// 
			// Leftbound
			// 
			this->Leftbound->BackColor = System::Drawing::Color::White;
			this->Leftbound->Location = System::Drawing::Point(0, 150);
			this->Leftbound->Name = L"Leftbound";
			this->Leftbound->Size = System::Drawing::Size(5, 660);
			this->Leftbound->TabIndex = 7;
			this->Leftbound->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Âûáåğèòå ñêîğîñòü";
			// 
			// buttonApplySpeed
			// 
			this->buttonApplySpeed->BackColor = System::Drawing::Color::Transparent;
			this->buttonApplySpeed->Location = System::Drawing::Point(123, 119);
			this->buttonApplySpeed->Name = L"buttonApplySpeed";
			this->buttonApplySpeed->Size = System::Drawing::Size(75, 23);
			this->buttonApplySpeed->TabIndex = 6;
			this->buttonApplySpeed->Text = L"Îê";
			this->buttonApplySpeed->UseVisualStyleBackColor = false;
			this->buttonApplySpeed->Click += gcnew System::EventHandler(this, &MyForm::buttonApplySpeed_Click);
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Controls->Add(this->numericUpDown);
			this->groupBoxSettings->Controls->Add(this->buttonApplySpeed);
			this->groupBoxSettings->Controls->Add(this->label1);
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"MV Boli", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxSettings->Location = System::Drawing::Point(277, 218);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(222, 158);
			this->groupBoxSettings->TabIndex = 9;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Íàñòîğîéêè";
			this->groupBoxSettings->Visible = false;
			// 
			// numericUpDown
			// 
			this->numericUpDown->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown->Location = System::Drawing::Point(14, 73);
			this->numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown->Name = L"numericUpDown";
			this->numericUpDown->Size = System::Drawing::Size(184, 23);
			this->numericUpDown->TabIndex = 7;
			this->numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(711, 809);
			this->Controls->Add(this->groupBoxSettings);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown))->EndInit();
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
	private: float updateInterval = 200;//èíòåğâàë îáíîâëåíèÿ
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
private: System::Void ïğàâèëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
//	
//private: System::Void buttonSlow_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void buttonMedium_Click(System::Object^ sender, System::EventArgs^ e);
//private: System::Void buttonFast_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	
private: void GameForm_Update(Object^ obgect, EventArgs^ e);

private: System::Void ñêîğîñòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonApplySpeed_Click(System::Object^ sender, System::EventArgs^ e);
};
}
