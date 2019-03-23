#pragma once
#include <iostream>
#include <vector>
#include <utility>
#include <random>
#include <ctime>
#include <string>

namespace memory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//<moje zmienne>
		bool odkryta;
		PictureBox^ poprzedni = nullptr;
		String^ poprzedni_path;
		String^ poziom;
		int licznik_par;
		clock_t start;
		//<moje zmienne/>
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  nowaGraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ³atwyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  œredniToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  trudnyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zasadyGryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;

	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::ToolStripMenuItem^  highscoreToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;












	private: System::ComponentModel::IContainer^  components;

	protected:

	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->nowaGraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->³atwyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->œredniToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trudnyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->highscoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zasadyGryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(228)),
				static_cast<System::Int32>(static_cast<System::Byte>(147)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nowaGraToolStripMenuItem,
					this->highscoreToolStripMenuItem, this->zasadyGryToolStripMenuItem, this->zakoñczToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// nowaGraToolStripMenuItem
			// 
			this->nowaGraToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->³atwyToolStripMenuItem,
					this->œredniToolStripMenuItem, this->trudnyToolStripMenuItem
			});
			this->nowaGraToolStripMenuItem->Name = L"nowaGraToolStripMenuItem";
			this->nowaGraToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->nowaGraToolStripMenuItem->Text = L"Nowa gra";
			// 
			// ³atwyToolStripMenuItem
			// 
			this->³atwyToolStripMenuItem->Name = L"³atwyToolStripMenuItem";
			this->³atwyToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->³atwyToolStripMenuItem->Text = L"£atwy";
			this->³atwyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::³atwyToolStripMenuItem_Click);
			// 
			// œredniToolStripMenuItem
			// 
			this->œredniToolStripMenuItem->Name = L"œredniToolStripMenuItem";
			this->œredniToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->œredniToolStripMenuItem->Text = L"Œredni";
			this->œredniToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::œredniToolStripMenuItem_Click);
			// 
			// trudnyToolStripMenuItem
			// 
			this->trudnyToolStripMenuItem->Name = L"trudnyToolStripMenuItem";
			this->trudnyToolStripMenuItem->Size = System::Drawing::Size(128, 26);
			this->trudnyToolStripMenuItem->Text = L"Trudny";
			this->trudnyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::trudnyToolStripMenuItem_Click);
			// 
			// highscoreToolStripMenuItem
			// 
			this->highscoreToolStripMenuItem->Name = L"highscoreToolStripMenuItem";
			this->highscoreToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->highscoreToolStripMenuItem->Text = L"Highscore";
			// 
			// zasadyGryToolStripMenuItem
			// 
			this->zasadyGryToolStripMenuItem->Name = L"zasadyGryToolStripMenuItem";
			this->zasadyGryToolStripMenuItem->Size = System::Drawing::Size(93, 24);
			this->zasadyGryToolStripMenuItem->Text = L"Zasady gry";
			this->zasadyGryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zasadyGryToolStripMenuItem_Click);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zakoñczToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(313, 160);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 100);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(409, 160);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 100);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(505, 160);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 100);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(601, 160);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 100);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::White;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(313, 276);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 100);
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::White;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(409, 276);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 100);
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::White;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(505, 276);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(80, 100);
			this->pictureBox7->TabIndex = 7;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::White;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(601, 276);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(80, 100);
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::White;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(313, 392);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(80, 100);
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::White;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Location = System::Drawing::Point(409, 392);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(80, 100);
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Location = System::Drawing::Point(505, 392);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(80, 100);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Location = System::Drawing::Point(601, 392);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(80, 100);
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Location = System::Drawing::Point(217, 160);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(80, 100);
			this->pictureBox13->TabIndex = 14;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::White;
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Location = System::Drawing::Point(217, 276);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(80, 100);
			this->pictureBox14->TabIndex = 15;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::White;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Location = System::Drawing::Point(217, 392);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(80, 100);
			this->pictureBox15->TabIndex = 16;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::White;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Location = System::Drawing::Point(697, 160);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(80, 100);
			this->pictureBox16->TabIndex = 17;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::White;
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Location = System::Drawing::Point(697, 276);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(80, 100);
			this->pictureBox17->TabIndex = 18;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &MyForm::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::White;
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Location = System::Drawing::Point(697, 392);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(80, 100);
			this->pictureBox18->TabIndex = 19;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::White;
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Location = System::Drawing::Point(121, 160);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(80, 100);
			this->pictureBox19->TabIndex = 20;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::White;
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Location = System::Drawing::Point(121, 276);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(80, 100);
			this->pictureBox20->TabIndex = 21;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &MyForm::pictureBox20_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::White;
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Location = System::Drawing::Point(121, 392);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(80, 100);
			this->pictureBox21->TabIndex = 22;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &MyForm::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Location = System::Drawing::Point(121, 508);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(80, 100);
			this->pictureBox22->TabIndex = 23;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Visible = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Location = System::Drawing::Point(217, 508);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(80, 100);
			this->pictureBox23->TabIndex = 24;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &MyForm::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::White;
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Location = System::Drawing::Point(313, 508);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(80, 100);
			this->pictureBox24->TabIndex = 25;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &MyForm::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::White;
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Location = System::Drawing::Point(409, 508);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(80, 100);
			this->pictureBox25->TabIndex = 26;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Visible = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &MyForm::pictureBox25_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::White;
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Location = System::Drawing::Point(505, 508);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(80, 100);
			this->pictureBox26->TabIndex = 27;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Visible = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &MyForm::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::White;
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Location = System::Drawing::Point(601, 508);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(80, 100);
			this->pictureBox27->TabIndex = 28;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Visible = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &MyForm::pictureBox27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::White;
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Location = System::Drawing::Point(697, 508);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(80, 100);
			this->pictureBox28->TabIndex = 29;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Visible = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &MyForm::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::White;
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->Location = System::Drawing::Point(793, 160);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(80, 100);
			this->pictureBox29->TabIndex = 30;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Visible = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &MyForm::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::White;
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->Location = System::Drawing::Point(793, 276);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(80, 100);
			this->pictureBox30->TabIndex = 31;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &MyForm::pictureBox30_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->Location = System::Drawing::Point(793, 392);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(80, 100);
			this->pictureBox31->TabIndex = 32;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Visible = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &MyForm::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->Location = System::Drawing::Point(793, 508);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(80, 100);
			this->pictureBox32->TabIndex = 33;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &MyForm::pictureBox32_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->label1->Location = System::Drawing::Point(422, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 69);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Para!";
			this->label1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Memory";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void wait(int seconds)
	{
		System::Threading::Thread::Sleep(1000*seconds);
	}
	int random(int min, int max) {
			static std::default_random_engine e{};
			std::uniform_int_distribution<int> d(min, max);
			return d(e);
		}
	std::vector < std::pair<int, int> > lokacje(const std::string &poziom) {
			if (poziom == "latwy") {
				std::vector<std::pair<int, int>> loc;
				std::pair<int, int> l;
				l.first = 313 - 96;
				l.second = 160;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 4; j++) {
						l.first = l.first + 96;
						loc.push_back(l);
					}
					l.first = 313 - 96;
					l.second = l.second + 116;
				}
				return loc;
			}
			if (poziom == "sredni") {
				std::vector<std::pair<int, int>> loc;
				std::pair<int, int> l;
				l.first = 217 - 96;
				l.second = 160;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 6; j++) {
						l.first = l.first + 96;
						loc.push_back(l);
					}
					l.first = 217 - 96;
					l.second = l.second + 116;
				}
				return loc;
			}
			if (poziom == "trudny") {
				std::vector<std::pair<int, int>> loc;
				std::pair<int, int> l;
				l.first = 121 - 96;
				l.second = 160;
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 8; j++) {
						l.first = l.first + 96;
						loc.push_back(l);
					}
					l.first = 121 - 96;
					l.second = l.second + 116;
				}
				return loc;
			}
		}
	void losuj(std::vector<std::pair<int, int>>& loc, const std::string &poziom) {
			if (poziom == "latwy") {
				srand(time(NULL));
				std::pair<int, int> temp;
				for (int i = 0; i < 12; i++) {
					int j = rand() % 11;
					temp = loc[i];
					loc[i] = loc[j];
					loc[j] = temp;
				}
			}
			if (poziom == "sredni") {
				srand(time(NULL));
				std::pair<int, int> temp;
				for (int i = 0; i < 18; i++) {
					int j = rand() % 17;
					temp = loc[i];
					loc[i] = loc[j];
					loc[j] = temp;
				}
			}
			if (poziom == "trudny") {
				srand(time(NULL));
				std::pair<int, int> temp;
				for (int i = 0; i < 32; i++) {
					int j = rand() % 31;
					temp = loc[i];
					loc[i] = loc[j];
					loc[j] = temp;
				}
			}
		}
	void odkryj(PictureBox ^p1, String ^path) {
		p1->BackgroundImage = System::Drawing::Image::FromFile(path);
		p1->Enabled = false;
		if (poprzedni != nullptr && poprzedni_path == path) {
			this->label1->Visible = true;
			MyForm::Refresh();
			wait(2);
			p1->Visible = false;
			poprzedni->Visible = false;
			this->label1->Visible = false;
			odkryta = false;
			poprzedni = nullptr;
			licznik_par++;
		}
		else if (odkryta == true) {
			wait(2);
			p1->Enabled = true;
			poprzedni->Enabled = true;
			p1->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
			poprzedni->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
			odkryta = false;
			poprzedni = nullptr;
		}
		else {
			odkryta = true;
			poprzedni = p1;
			poprzedni_path = path;
		}
		if (poziom == "latwy" && licznik_par == 6) {
			
		}
		
		clock_t stop = ((clock() - start)/CLOCKS_PER_SEC);
		String^ text = System::Convert::ToString(stop);
	}
private: System::Void zakoñczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Czy na pewno chcesz zamknac aplikacje?", "Zamknij", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::Yes:
			Close();
		case System::Windows::Forms::DialogResult::No:
			break;
		}
	}
private: System::Void zasadyGryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Na ekranie znajduja sie po dwie karty tego samego typu. Ich ilosc jest uzalezniona od wybranego poziomu trudnosci.\n\nZadanie gracza polega na znajdowaniu par identycznych obrazkow. Gracz wybiera dwie karty, jesli sa takie same, zabiera je (ilustrowane poprzez pojawienie sie kart na spodzie ekranu), jesli nie, karty z powrotem zostaja odwrocone.\n\nWynik gracza jest uzalezniony od tego, ile czasu zajmie mu zebranie wszystkich kart. Powodzenia! ", "Zasady", MessageBoxButtons::OK, MessageBoxIcon::Information);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::OK:
			break;
		}
	}
private: System::Void ³atwyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	start = clock();
	poziom = "latwy";
	std::vector<std::pair<int, int>> loc = lokacje("latwy");
	losuj(loc, "latwy");
	odkryta = false;
	poprzedni = nullptr;
	poprzedni_path = "";
	this->pictureBox1->Location = System::Drawing::Point(loc[0].first, loc[0].second);
	this->pictureBox2->Location = System::Drawing::Point(loc[1].first, loc[1].second);
	this->pictureBox3->Location = System::Drawing::Point(loc[2].first, loc[2].second);
	this->pictureBox4->Location = System::Drawing::Point(loc[3].first, loc[3].second);
	this->pictureBox5->Location = System::Drawing::Point(loc[4].first, loc[4].second);
	this->pictureBox6->Location = System::Drawing::Point(loc[5].first, loc[5].second);
	this->pictureBox7->Location = System::Drawing::Point(loc[6].first, loc[6].second);
	this->pictureBox8->Location = System::Drawing::Point(loc[7].first, loc[7].second);
	this->pictureBox9->Location = System::Drawing::Point(loc[8].first, loc[8].second);
	this->pictureBox10->Location = System::Drawing::Point(loc[9].first, loc[9].second);
	this->pictureBox11->Location = System::Drawing::Point(loc[10].first, loc[10].second);
	this->pictureBox12->Location = System::Drawing::Point(loc[11].first, loc[11].second);
	this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox3->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox4->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox5->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox6->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox7->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox8->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox9->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox10->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox11->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox12->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox1->Visible = true;
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = true;
	this->pictureBox6->Visible = true;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	this->pictureBox10->Visible = true;
	this->pictureBox11->Visible = true;
	this->pictureBox12->Visible = true;
	this->pictureBox13->Visible = false;
	this->pictureBox14->Visible = false;
	this->pictureBox15->Visible = false;
	this->pictureBox16->Visible = false;
	this->pictureBox17->Visible = false;
	this->pictureBox18->Visible = false;
	this->pictureBox19->Visible = false;
	this->pictureBox20->Visible = false;
	this->pictureBox21->Visible = false;
	this->pictureBox22->Visible = false;
	this->pictureBox23->Visible = false;
	this->pictureBox24->Visible = false;
	this->pictureBox25->Visible = false;
	this->pictureBox26->Visible = false;
	this->pictureBox27->Visible = false;
	this->pictureBox28->Visible = false;
	this->pictureBox29->Visible = false;
	this->pictureBox30->Visible = false;
	this->pictureBox31->Visible = false;
	this->pictureBox32->Visible = false;
	this->pictureBox1->Enabled = true;
	this->pictureBox2->Enabled = true;
	this->pictureBox3->Enabled = true;
	this->pictureBox4->Enabled = true;
	this->pictureBox5->Enabled = true;
	this->pictureBox6->Enabled = true;
	this->pictureBox7->Enabled = true;
	this->pictureBox8->Enabled = true;
	this->pictureBox9->Enabled = true;
	this->pictureBox10->Enabled = true;
	this->pictureBox11->Enabled = true;
	this->pictureBox12->Enabled = true;
	this->pictureBox13->Enabled = false;
	this->pictureBox14->Enabled = false;
	this->pictureBox15->Enabled = false;
	this->pictureBox16->Enabled = false;
	this->pictureBox17->Enabled = false;
	this->pictureBox18->Enabled = false;
	this->pictureBox19->Enabled = false;
	this->pictureBox20->Enabled = false;
	this->pictureBox21->Enabled = false;
	this->pictureBox22->Enabled = false;
	this->pictureBox23->Enabled = false;
	this->pictureBox24->Enabled = false;
	this->pictureBox25->Enabled = false;
	this->pictureBox26->Enabled = false;
	this->pictureBox27->Enabled = false;
	this->pictureBox28->Enabled = false;
	this->pictureBox29->Enabled = false;
	this->pictureBox30->Enabled = false;
	this->pictureBox31->Enabled = false;
	this->pictureBox32->Enabled = false;
	}
private: System::Void œredniToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	start = clock();
	poziom = "sredni";
	std::vector<std::pair<int, int>> loc = lokacje("sredni");
	losuj(loc, "sredni");
	odkryta = false;
	poprzedni = nullptr;
	poprzedni_path = "";
	this->pictureBox1->Location = System::Drawing::Point(loc[0].first, loc[0].second);
	this->pictureBox2->Location = System::Drawing::Point(loc[1].first, loc[1].second);
	this->pictureBox3->Location = System::Drawing::Point(loc[2].first, loc[2].second);
	this->pictureBox4->Location = System::Drawing::Point(loc[3].first, loc[3].second);
	this->pictureBox5->Location = System::Drawing::Point(loc[4].first, loc[4].second);
	this->pictureBox6->Location = System::Drawing::Point(loc[5].first, loc[5].second);
	this->pictureBox7->Location = System::Drawing::Point(loc[6].first, loc[6].second);
	this->pictureBox8->Location = System::Drawing::Point(loc[7].first, loc[7].second);
	this->pictureBox9->Location = System::Drawing::Point(loc[8].first, loc[8].second);
	this->pictureBox10->Location = System::Drawing::Point(loc[9].first, loc[9].second);
	this->pictureBox11->Location = System::Drawing::Point(loc[10].first, loc[10].second);
	this->pictureBox12->Location = System::Drawing::Point(loc[11].first, loc[11].second);
	this->pictureBox13->Location = System::Drawing::Point(loc[12].first, loc[12].second);
	this->pictureBox14->Location = System::Drawing::Point(loc[13].first, loc[13].second);
	this->pictureBox15->Location = System::Drawing::Point(loc[14].first, loc[14].second);
	this->pictureBox16->Location = System::Drawing::Point(loc[15].first, loc[15].second);
	this->pictureBox17->Location = System::Drawing::Point(loc[16].first, loc[16].second);
	this->pictureBox18->Location = System::Drawing::Point(loc[17].first, loc[17].second);
	this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox3->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox4->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox5->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox6->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox7->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox8->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox9->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox10->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox11->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox12->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox13->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox14->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox15->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox16->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox17->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox18->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox1->Visible = true;
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = true;
	this->pictureBox6->Visible = true;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	this->pictureBox10->Visible = true;
	this->pictureBox11->Visible = true;
	this->pictureBox12->Visible = true;
	this->pictureBox13->Visible = true;
	this->pictureBox14->Visible = true;
	this->pictureBox15->Visible = true;
	this->pictureBox16->Visible = true;
	this->pictureBox17->Visible = true;
	this->pictureBox18->Visible = true;
	this->pictureBox19->Visible = false;
	this->pictureBox20->Visible = false;
	this->pictureBox21->Visible = false;
	this->pictureBox22->Visible = false;
	this->pictureBox23->Visible = false;
	this->pictureBox24->Visible = false;
	this->pictureBox25->Visible = false;
	this->pictureBox26->Visible = false;
	this->pictureBox27->Visible = false;
	this->pictureBox28->Visible = false;
	this->pictureBox29->Visible = false;
	this->pictureBox30->Visible = false;
	this->pictureBox31->Visible = false;
	this->pictureBox32->Visible = false;
	this->pictureBox1->Enabled = true;
	this->pictureBox2->Enabled = true;
	this->pictureBox3->Enabled = true;
	this->pictureBox4->Enabled = true;
	this->pictureBox5->Enabled = true;
	this->pictureBox6->Enabled = true;
	this->pictureBox7->Enabled = true;
	this->pictureBox8->Enabled = true;
	this->pictureBox9->Enabled = true;
	this->pictureBox10->Enabled = true;
	this->pictureBox11->Enabled = true;
	this->pictureBox12->Enabled = true;
	this->pictureBox13->Enabled = true;
	this->pictureBox14->Enabled = true;
	this->pictureBox15->Enabled = true;
	this->pictureBox16->Enabled = true;
	this->pictureBox17->Enabled = true;
	this->pictureBox18->Enabled = true;
	this->pictureBox19->Enabled = false;
	this->pictureBox20->Enabled = false;
	this->pictureBox21->Enabled = false;
	this->pictureBox22->Enabled = false;
	this->pictureBox23->Enabled = false;
	this->pictureBox24->Enabled = false;
	this->pictureBox25->Enabled = false;
	this->pictureBox26->Enabled = false;
	this->pictureBox27->Enabled = false;
	this->pictureBox28->Enabled = false;
	this->pictureBox29->Enabled = false;
	this->pictureBox30->Enabled = false;
	this->pictureBox31->Enabled = false;
	this->pictureBox32->Enabled = false;
	}
private: System::Void trudnyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	start = clock();
	poziom = "trudny";
	std::vector<std::pair<int, int>> loc = lokacje("trudny");
	losuj(loc, "trudny");
	odkryta = false;
	poprzedni = nullptr;
	poprzedni_path = "";
	this->pictureBox1->Location = System::Drawing::Point(loc[0].first, loc[0].second);
	this->pictureBox2->Location = System::Drawing::Point(loc[1].first, loc[1].second);
	this->pictureBox3->Location = System::Drawing::Point(loc[2].first, loc[2].second);
	this->pictureBox4->Location = System::Drawing::Point(loc[3].first, loc[3].second);
	this->pictureBox5->Location = System::Drawing::Point(loc[4].first, loc[4].second);
	this->pictureBox6->Location = System::Drawing::Point(loc[5].first, loc[5].second);
	this->pictureBox7->Location = System::Drawing::Point(loc[6].first, loc[6].second);
	this->pictureBox8->Location = System::Drawing::Point(loc[7].first, loc[7].second);
	this->pictureBox9->Location = System::Drawing::Point(loc[8].first, loc[8].second);
	this->pictureBox10->Location = System::Drawing::Point(loc[9].first, loc[9].second);
	this->pictureBox11->Location = System::Drawing::Point(loc[10].first, loc[10].second);
	this->pictureBox12->Location = System::Drawing::Point(loc[11].first, loc[11].second);
	this->pictureBox13->Location = System::Drawing::Point(loc[12].first, loc[12].second);
	this->pictureBox14->Location = System::Drawing::Point(loc[13].first, loc[13].second);
	this->pictureBox15->Location = System::Drawing::Point(loc[14].first, loc[14].second);
	this->pictureBox16->Location = System::Drawing::Point(loc[15].first, loc[15].second);
	this->pictureBox17->Location = System::Drawing::Point(loc[16].first, loc[16].second);
	this->pictureBox18->Location = System::Drawing::Point(loc[17].first, loc[17].second);
	this->pictureBox19->Location = System::Drawing::Point(loc[18].first, loc[18].second);
	this->pictureBox20->Location = System::Drawing::Point(loc[19].first, loc[19].second);
	this->pictureBox21->Location = System::Drawing::Point(loc[20].first, loc[20].second);
	this->pictureBox22->Location = System::Drawing::Point(loc[21].first, loc[21].second);
	this->pictureBox23->Location = System::Drawing::Point(loc[22].first, loc[22].second);
	this->pictureBox24->Location = System::Drawing::Point(loc[23].first, loc[23].second);
	this->pictureBox25->Location = System::Drawing::Point(loc[24].first, loc[24].second);
	this->pictureBox26->Location = System::Drawing::Point(loc[25].first, loc[25].second);
	this->pictureBox27->Location = System::Drawing::Point(loc[26].first, loc[26].second);
	this->pictureBox28->Location = System::Drawing::Point(loc[27].first, loc[27].second);
	this->pictureBox29->Location = System::Drawing::Point(loc[28].first, loc[28].second);
	this->pictureBox30->Location = System::Drawing::Point(loc[29].first, loc[29].second);
	this->pictureBox31->Location = System::Drawing::Point(loc[30].first, loc[30].second);
	this->pictureBox32->Location = System::Drawing::Point(loc[31].first, loc[31].second);
	this->pictureBox1->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox2->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox3->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox4->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox5->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox6->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox7->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox8->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox9->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox10->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox11->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox12->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox13->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox14->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox15->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox16->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox17->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox18->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox19->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox20->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox21->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox22->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox23->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox24->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox25->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox26->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox27->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox28->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox29->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox30->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox31->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox32->BackgroundImage = System::Drawing::Image::FromFile("..\\tlo.png");
	this->pictureBox1->Visible = true;
	this->pictureBox2->Visible = true;
	this->pictureBox3->Visible = true;
	this->pictureBox4->Visible = true;
	this->pictureBox5->Visible = true;
	this->pictureBox6->Visible = true;
	this->pictureBox7->Visible = true;
	this->pictureBox8->Visible = true;
	this->pictureBox9->Visible = true;
	this->pictureBox10->Visible = true;
	this->pictureBox11->Visible = true;
	this->pictureBox12->Visible = true;
	this->pictureBox13->Visible = true;
	this->pictureBox14->Visible = true;
	this->pictureBox15->Visible = true;
	this->pictureBox16->Visible = true;
	this->pictureBox17->Visible = true;
	this->pictureBox18->Visible = true;
	this->pictureBox19->Visible = true;
	this->pictureBox20->Visible = true;
	this->pictureBox21->Visible = true;
	this->pictureBox22->Visible = true;
	this->pictureBox23->Visible = true;
	this->pictureBox24->Visible = true;
	this->pictureBox25->Visible = true;
	this->pictureBox26->Visible = true;
	this->pictureBox27->Visible = true;
	this->pictureBox28->Visible = true;
	this->pictureBox29->Visible = true;
	this->pictureBox30->Visible = true;
	this->pictureBox31->Visible = true;
	this->pictureBox32->Visible = true;
	this->pictureBox1->Enabled = true;
	this->pictureBox2->Enabled = true;
	this->pictureBox3->Enabled = true;
	this->pictureBox4->Enabled = true;
	this->pictureBox5->Enabled = true;
	this->pictureBox6->Enabled = true;
	this->pictureBox7->Enabled = true;
	this->pictureBox8->Enabled = true;
	this->pictureBox9->Enabled = true;
	this->pictureBox10->Enabled = true;
	this->pictureBox11->Enabled = true;
	this->pictureBox12->Enabled = true;
	this->pictureBox13->Enabled = true;
	this->pictureBox14->Enabled = true;
	this->pictureBox15->Enabled = true;
	this->pictureBox16->Enabled = true;
	this->pictureBox17->Enabled = true;
	this->pictureBox18->Enabled = true;
	this->pictureBox19->Enabled = true;
	this->pictureBox20->Enabled = true;
	this->pictureBox21->Enabled = true;
	this->pictureBox22->Enabled = true;
	this->pictureBox23->Enabled = true;
	this->pictureBox24->Enabled = true;
	this->pictureBox25->Enabled = true;
	this->pictureBox26->Enabled = true;
	this->pictureBox27->Enabled = true;
	this->pictureBox28->Enabled = true;
	this->pictureBox29->Enabled = true;
	this->pictureBox30->Enabled = true;
	this->pictureBox31->Enabled = true;
	this->pictureBox32->Enabled = true;
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox1, "..\\biedronka.png");
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox2, "..\\biedronka.png");
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox3, "..\\chomik.png");
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox4, "..\\chomik.png");
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox5, "..\\jelen.png");
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox6, "..\\jelen.png");
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox7, "..\\kon.png");
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox8, "..\\kon.png");
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox9, "..\\kot.png");
}
private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox10, "..\\kot.png");
}
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox11, "..\\krolik.png");
}
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox12, "..\\krolik.png");
}
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox13, "..\\lew.png");
}
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox14, "..\\lew.png");
}
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox15, "..\\malpa.png");
}
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox16, "..\\malpa.png");
}
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox17, "..\\owca.png");
}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox18, "..\\owca.png");
}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox19, "..\\nosacz.png");
}
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox20, "..\\nosacz.png");
}
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox21, "..\\pies.png");
}
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox22, "..\\pies.png");
}
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox23, "..\\ryba.png");
}
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox24, "..\\ryba.png");
}
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox25, "..\\sowa.png");
}
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox26, "..\\sowa.png");
}
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox27, "..\\swinia.png");
}
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox28, "..\\swinia.png");
}
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox29, "..\\zaba.png");
}
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox30, "..\\zaba.png");
}
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox31, "..\\zyrafa.png");
}
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
	odkryj(pictureBox32, "..\\zyrafa.png");
}
};
}