#pragma once

namespace TicTacToewinforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ A1;
	private: System::Windows::Forms::Button^ A3;
	private: System::Windows::Forms::Button^ A2;
	private: System::Windows::Forms::Button^ B1;
	private: System::Windows::Forms::Button^ B2;
	private: System::Windows::Forms::Button^ B3;
	private: System::Windows::Forms::Button^ C1;
	private: System::Windows::Forms::Button^ C2;
	private: System::Windows::Forms::Button^ C3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ новаяИграToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ TurnLabel;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->новаяИграToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TurnLabel = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// A1
			// 
			this->A1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A1->Location = System::Drawing::Point(10, 22);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(115, 105);
			this->A1->TabIndex = 0;
			this->A1->TabStop = false;
			this->A1->UseVisualStyleBackColor = true;
			this->A1->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// A3
			// 
			this->A3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A3->Location = System::Drawing::Point(283, 22);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(115, 105);
			this->A3->TabIndex = 1;
			this->A3->TabStop = false;
			this->A3->UseVisualStyleBackColor = true;
			this->A3->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// A2
			// 
			this->A2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A2->Location = System::Drawing::Point(144, 22);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(115, 105);
			this->A2->TabIndex = 2;
			this->A2->TabStop = false;
			this->A2->UseVisualStyleBackColor = true;
			this->A2->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// B1
			// 
			this->B1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B1->Location = System::Drawing::Point(10, 148);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(115, 105);
			this->B1->TabIndex = 3;
			this->B1->TabStop = false;
			this->B1->UseVisualStyleBackColor = true;
			this->B1->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// B2
			// 
			this->B2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B2->Location = System::Drawing::Point(144, 148);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(115, 105);
			this->B2->TabIndex = 4;
			this->B2->TabStop = false;
			this->B2->UseVisualStyleBackColor = true;
			this->B2->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// B3
			// 
			this->B3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B3->Location = System::Drawing::Point(283, 148);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(115, 105);
			this->B3->TabIndex = 5;
			this->B3->TabStop = false;
			this->B3->UseVisualStyleBackColor = true;
			this->B3->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// C1
			// 
			this->C1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C1->Location = System::Drawing::Point(10, 274);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(115, 105);
			this->C1->TabIndex = 6;
			this->C1->TabStop = false;
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// C2
			// 
			this->C2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C2->Location = System::Drawing::Point(144, 274);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(115, 105);
			this->C2->TabIndex = 7;
			this->C2->TabStop = false;
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// C3
			// 
			this->C3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C3->Location = System::Drawing::Point(283, 274);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(115, 105);
			this->C3->TabIndex = 8;
			this->C3->TabStop = false;
			this->C3->UseVisualStyleBackColor = true;
			this->C3->Click += gcnew System::EventHandler(this, &MainForm::button_click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->C3);
			this->panel1->Controls->Add(this->C2);
			this->panel1->Controls->Add(this->C1);
			this->panel1->Controls->Add(this->B3);
			this->panel1->Controls->Add(this->B2);
			this->panel1->Controls->Add(this->B1);
			this->panel1->Controls->Add(this->A2);
			this->panel1->Controls->Add(this->A3);
			this->panel1->Controls->Add(this->A1);
			this->panel1->Location = System::Drawing::Point(12, 187);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(419, 391);
			this->panel1->TabIndex = 9;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->новаяИграToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(443, 28);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// новаяИграToolStripMenuItem
			// 
			this->новаяИграToolStripMenuItem->Name = L"новаяИграToolStripMenuItem";
			this->новаяИграToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->новаяИграToolStripMenuItem->Text = L"Новая игра";
			this->новаяИграToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::новаяИграToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			// 
			// TurnLabel
			// 
			this->TurnLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TurnLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TurnLabel->Location = System::Drawing::Point(149, 110);
			this->TurnLabel->Name = L"TurnLabel";
			this->TurnLabel->Size = System::Drawing::Size(122, 38);
			this->TurnLabel->TabIndex = 11;
			this->TurnLabel->Text = L"X";
			this->TurnLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 590);
			this->Controls->Add(this->TurnLabel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Крестики Нолики";
			this->panel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: bool turn = true;
		private: bool winner = false;
		private: int turn_count = 0;


		private: bool CheckWinner();

		private: System::Void button_click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void новаяИграToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
