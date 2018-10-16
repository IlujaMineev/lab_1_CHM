#pragma once
#include <math.h>

namespace AirInTheRoom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	using namespace System::Globalization;

	/// <summary>
	/// Summary for TheForm
	/// </summary>
	public ref class TheForm : public System::Windows::Forms::Form
	{
	public:
		TheForm(void)
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
		~TheForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  Reload;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Button^  Calculate;

	private: System::Windows::Forms::ComboBox^  TypeOfTask_in;




	private: System::Windows::Forms::TextBox^  StartStep_in;

	private: System::Windows::Forms::TextBox^  MaxStepsCount_in;

	private: System::Windows::Forms::Label^  StartStep_label;
	private: System::Windows::Forms::Label^  MaxStepsCount_label;
	private: System::Windows::Forms::TextBox^  LocalErrorControl_in;

	private: System::Windows::Forms::Label^  LocalErrorControl_label;
	private: System::Windows::Forms::TextBox^  Eps_in;


	private: System::Windows::Forms::Label^  Eps_label;
	private: System::Windows::Forms::Label^  TypeOfTask_label;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Q_textbox;
	private: System::Windows::Forms::TextBox^  V_textbox;
	private: System::Windows::Forms::TextBox^  B_textbox;
	private: System::Windows::Forms::DataGridView^  DataTable;








	private: System::Windows::Forms::CheckBox^  Constant_Step_in;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  Min_scale_step_out;
	private: System::Windows::Forms::Label^  Max_scale_step_out;
	private: System::Windows::Forms::Label^  Count_div_out;
	private: System::Windows::Forms::Label^  Count_dub_out;
	private: System::Windows::Forms::Label^  Min_scale_step_label;
	private: System::Windows::Forms::Label^  Max_scale_step_label;
	private: System::Windows::Forms::Label^  Count_div_label;
	private: System::Windows::Forms::Label^  Count_dub_label;
	private: System::Windows::Forms::Label^  n_steps_out;
	private: System::Windows::Forms::Label^  n_steps_label;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v2_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sub_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  S_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  div_step_count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dub_step_count;
	private: System::ComponentModel::IContainer^  components;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Constant_Step_in = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Q_textbox = (gcnew System::Windows::Forms::TextBox());
			this->V_textbox = (gcnew System::Windows::Forms::TextBox());
			this->B_textbox = (gcnew System::Windows::Forms::TextBox());
			this->Reload = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Calculate = (gcnew System::Windows::Forms::Button());
			this->TypeOfTask_in = (gcnew System::Windows::Forms::ComboBox());
			this->StartStep_in = (gcnew System::Windows::Forms::TextBox());
			this->MaxStepsCount_in = (gcnew System::Windows::Forms::TextBox());
			this->StartStep_label = (gcnew System::Windows::Forms::Label());
			this->MaxStepsCount_label = (gcnew System::Windows::Forms::Label());
			this->LocalErrorControl_in = (gcnew System::Windows::Forms::TextBox());
			this->LocalErrorControl_label = (gcnew System::Windows::Forms::Label());
			this->Eps_in = (gcnew System::Windows::Forms::TextBox());
			this->Eps_label = (gcnew System::Windows::Forms::Label());
			this->TypeOfTask_label = (gcnew System::Windows::Forms::Label());
			this->DataTable = (gcnew System::Windows::Forms::DataGridView());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Min_scale_step_out = (gcnew System::Windows::Forms::Label());
			this->Max_scale_step_out = (gcnew System::Windows::Forms::Label());
			this->Count_div_out = (gcnew System::Windows::Forms::Label());
			this->Count_dub_out = (gcnew System::Windows::Forms::Label());
			this->Min_scale_step_label = (gcnew System::Windows::Forms::Label());
			this->Max_scale_step_label = (gcnew System::Windows::Forms::Label());
			this->Count_div_label = (gcnew System::Windows::Forms::Label());
			this->Count_dub_label = (gcnew System::Windows::Forms::Label());
			this->n_steps_out = (gcnew System::Windows::Forms::Label());
			this->n_steps_label = (gcnew System::Windows::Forms::Label());
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->xi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sub_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->S_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->div_step_count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dub_step_count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Constant_Step_in);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Q_textbox);
			this->panel1->Controls->Add(this->V_textbox);
			this->panel1->Controls->Add(this->B_textbox);
			this->panel1->Controls->Add(this->Reload);
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->Calculate);
			this->panel1->Controls->Add(this->TypeOfTask_in);
			this->panel1->Controls->Add(this->StartStep_in);
			this->panel1->Controls->Add(this->MaxStepsCount_in);
			this->panel1->Controls->Add(this->StartStep_label);
			this->panel1->Controls->Add(this->MaxStepsCount_label);
			this->panel1->Controls->Add(this->LocalErrorControl_in);
			this->panel1->Controls->Add(this->LocalErrorControl_label);
			this->panel1->Controls->Add(this->Eps_in);
			this->panel1->Controls->Add(this->Eps_label);
			this->panel1->Controls->Add(this->TypeOfTask_label);
			this->panel1->Location = System::Drawing::Point(5, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(285, 229);
			this->panel1->TabIndex = 0;
			// 
			// Constant_Step_in
			// 
			this->Constant_Step_in->AutoSize = true;
			this->Constant_Step_in->Location = System::Drawing::Point(161, 169);
			this->Constant_Step_in->Name = L"Constant_Step_in";
			this->Constant_Step_in->Size = System::Drawing::Size(111, 17);
			this->Constant_Step_in->TabIndex = 21;
			this->Constant_Step_in->Text = L"Постоянный шаг";
			this->Constant_Step_in->UseVisualStyleBackColor = true;
			this->Constant_Step_in->CheckedChanged += gcnew System::EventHandler(this, &TheForm::Constant_Step_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(191, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 19;
			this->label3->Text = L"B:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(95, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"q:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"V:";
			// 
			// Q_textbox
			// 
			this->Q_textbox->Location = System::Drawing::Point(117, 35);
			this->Q_textbox->Name = L"Q_textbox";
			this->Q_textbox->Size = System::Drawing::Size(68, 20);
			this->Q_textbox->TabIndex = 16;
			this->Q_textbox->Text = L"2.0";
			// 
			// V_textbox
			// 
			this->V_textbox->Location = System::Drawing::Point(21, 35);
			this->V_textbox->Name = L"V_textbox";
			this->V_textbox->Size = System::Drawing::Size(68, 20);
			this->V_textbox->TabIndex = 15;
			this->V_textbox->Text = L"10.0";
			// 
			// B_textbox
			// 
			this->B_textbox->Location = System::Drawing::Point(214, 35);
			this->B_textbox->Name = L"B_textbox";
			this->B_textbox->Size = System::Drawing::Size(68, 20);
			this->B_textbox->TabIndex = 14;
			this->B_textbox->Text = L"1.0";
			// 
			// Reload
			// 
			this->Reload->Location = System::Drawing::Point(161, 192);
			this->Reload->Name = L"Reload";
			this->Reload->Size = System::Drawing::Size(66, 32);
			this->Reload->TabIndex = 13;
			this->Reload->Text = L"Обновить";
			this->Reload->UseVisualStyleBackColor = true;
			this->Reload->Click += gcnew System::EventHandler(this, &TheForm::Reload_Click);
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(230, 192);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(52, 32);
			this->Exit->TabIndex = 12;
			this->Exit->Text = L"Выйти";
			this->Exit->UseVisualStyleBackColor = true;
			// 
			// Calculate
			// 
			this->Calculate->Location = System::Drawing::Point(6, 169);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(145, 55);
			this->Calculate->TabIndex = 11;
			this->Calculate->Text = L"Вычислить";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &TheForm::Calculate_Click);
			// 
			// TypeOfTask_in
			// 
			this->TypeOfTask_in->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая", L"Основная" });
			this->TypeOfTask_in->Location = System::Drawing::Point(136, 8);
			this->TypeOfTask_in->Name = L"TypeOfTask_in";
			this->TypeOfTask_in->Size = System::Drawing::Size(146, 21);
			this->TypeOfTask_in->TabIndex = 10;
			this->TypeOfTask_in->Text = L"Основная";
			// 
			// StartStep_in
			// 
			this->StartStep_in->Location = System::Drawing::Point(161, 143);
			this->StartStep_in->Name = L"StartStep_in";
			this->StartStep_in->Size = System::Drawing::Size(121, 20);
			this->StartStep_in->TabIndex = 9;
			this->StartStep_in->Text = L"0.001";
			// 
			// MaxStepsCount_in
			// 
			this->MaxStepsCount_in->Location = System::Drawing::Point(161, 117);
			this->MaxStepsCount_in->Name = L"MaxStepsCount_in";
			this->MaxStepsCount_in->Size = System::Drawing::Size(121, 20);
			this->MaxStepsCount_in->TabIndex = 8;
			this->MaxStepsCount_in->Text = L"100";
			this->MaxStepsCount_in->TextChanged += gcnew System::EventHandler(this, &TheForm::MaxStepsCount_in_TextChanged);
			// 
			// StartStep_label
			// 
			this->StartStep_label->AutoSize = true;
			this->StartStep_label->Location = System::Drawing::Point(3, 146);
			this->StartStep_label->Name = L"StartStep_label";
			this->StartStep_label->Size = System::Drawing::Size(86, 13);
			this->StartStep_label->TabIndex = 5;
			this->StartStep_label->Text = L"Начальный шаг";
			// 
			// MaxStepsCount_label
			// 
			this->MaxStepsCount_label->AutoSize = true;
			this->MaxStepsCount_label->Location = System::Drawing::Point(3, 120);
			this->MaxStepsCount_label->Name = L"MaxStepsCount_label";
			this->MaxStepsCount_label->Size = System::Drawing::Size(150, 13);
			this->MaxStepsCount_label->TabIndex = 4;
			this->MaxStepsCount_label->Text = L"Максимальное число шагов";
			// 
			// LocalErrorControl_in
			// 
			this->LocalErrorControl_in->Location = System::Drawing::Point(161, 91);
			this->LocalErrorControl_in->Name = L"LocalErrorControl_in";
			this->LocalErrorControl_in->Size = System::Drawing::Size(121, 20);
			this->LocalErrorControl_in->TabIndex = 7;
			this->LocalErrorControl_in->Text = L"0.0001";
			// 
			// LocalErrorControl_label
			// 
			this->LocalErrorControl_label->AutoSize = true;
			this->LocalErrorControl_label->Location = System::Drawing::Point(3, 94);
			this->LocalErrorControl_label->Name = L"LocalErrorControl_label";
			this->LocalErrorControl_label->Size = System::Drawing::Size(148, 13);
			this->LocalErrorControl_label->TabIndex = 3;
			this->LocalErrorControl_label->Text = L"Контроль лок. погрешности";
			// 
			// Eps_in
			// 
			this->Eps_in->Location = System::Drawing::Point(161, 65);
			this->Eps_in->Name = L"Eps_in";
			this->Eps_in->Size = System::Drawing::Size(121, 20);
			this->Eps_in->TabIndex = 6;
			this->Eps_in->Text = L"0.0001";
			// 
			// Eps_label
			// 
			this->Eps_label->AutoSize = true;
			this->Eps_label->Location = System::Drawing::Point(3, 68);
			this->Eps_label->Name = L"Eps_label";
			this->Eps_label->Size = System::Drawing::Size(152, 13);
			this->Eps_label->TabIndex = 2;
			this->Eps_label->Text = L"Точность выхода на границу";
			// 
			// TypeOfTask_label
			// 
			this->TypeOfTask_label->AutoSize = true;
			this->TypeOfTask_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TypeOfTask_label->Location = System::Drawing::Point(3, 9);
			this->TypeOfTask_label->Name = L"TypeOfTask_label";
			this->TypeOfTask_label->Size = System::Drawing::Size(84, 17);
			this->TypeOfTask_label->TabIndex = 0;
			this->TypeOfTask_label->Text = L"Тип задачи";
			// 
			// DataTable
			// 
			this->DataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->i, this->hi_tab,
					this->xi_tab, this->vi_tab, this->v2_tab, this->sub_tab, this->S_tab, this->div_step_count, this->dub_step_count
			});
			this->DataTable->Location = System::Drawing::Point(296, 204);
			this->DataTable->Name = L"DataTable";
			this->DataTable->Size = System::Drawing::Size(455, 152);
			this->DataTable->TabIndex = 2;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(296, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(455, 186);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &TheForm::zedGraphControl1_Load);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Min_scale_step_out);
			this->groupBox1->Controls->Add(this->Max_scale_step_out);
			this->groupBox1->Controls->Add(this->Count_div_out);
			this->groupBox1->Controls->Add(this->Count_dub_out);
			this->groupBox1->Controls->Add(this->Min_scale_step_label);
			this->groupBox1->Controls->Add(this->Max_scale_step_label);
			this->groupBox1->Controls->Add(this->Count_div_label);
			this->groupBox1->Controls->Add(this->Count_dub_label);
			this->groupBox1->Controls->Add(this->n_steps_out);
			this->groupBox1->Controls->Add(this->n_steps_label);
			this->groupBox1->Location = System::Drawing::Point(5, 248);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 108);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Справка";
			// 
			// Min_scale_step_out
			// 
			this->Min_scale_step_out->AutoSize = true;
			this->Min_scale_step_out->Location = System::Drawing::Point(136, 72);
			this->Min_scale_step_out->Name = L"Min_scale_step_out";
			this->Min_scale_step_out->Size = System::Drawing::Size(13, 13);
			this->Min_scale_step_out->TabIndex = 9;
			this->Min_scale_step_out->Text = L"0";
			// 
			// Max_scale_step_out
			// 
			this->Max_scale_step_out->AutoSize = true;
			this->Max_scale_step_out->Location = System::Drawing::Point(136, 59);
			this->Max_scale_step_out->Name = L"Max_scale_step_out";
			this->Max_scale_step_out->Size = System::Drawing::Size(13, 13);
			this->Max_scale_step_out->TabIndex = 8;
			this->Max_scale_step_out->Text = L"0";
			// 
			// Count_div_out
			// 
			this->Count_div_out->AutoSize = true;
			this->Count_div_out->Location = System::Drawing::Point(136, 46);
			this->Count_div_out->Name = L"Count_div_out";
			this->Count_div_out->Size = System::Drawing::Size(13, 13);
			this->Count_div_out->TabIndex = 7;
			this->Count_div_out->Text = L"0";
			// 
			// Count_dub_out
			// 
			this->Count_dub_out->AutoSize = true;
			this->Count_dub_out->Location = System::Drawing::Point(136, 33);
			this->Count_dub_out->Name = L"Count_dub_out";
			this->Count_dub_out->Size = System::Drawing::Size(13, 13);
			this->Count_dub_out->TabIndex = 6;
			this->Count_dub_out->Text = L"0";
			// 
			// Min_scale_step_label
			// 
			this->Min_scale_step_label->AutoSize = true;
			this->Min_scale_step_label->Location = System::Drawing::Point(7, 72);
			this->Min_scale_step_label->Name = L"Min_scale_step_label";
			this->Min_scale_step_label->Size = System::Drawing::Size(102, 13);
			this->Min_scale_step_label->TabIndex = 5;
			this->Min_scale_step_label->Text = L"Минимальный шаг";
			// 
			// Max_scale_step_label
			// 
			this->Max_scale_step_label->AutoSize = true;
			this->Max_scale_step_label->Location = System::Drawing::Point(7, 59);
			this->Max_scale_step_label->Name = L"Max_scale_step_label";
			this->Max_scale_step_label->Size = System::Drawing::Size(108, 13);
			this->Max_scale_step_label->TabIndex = 4;
			this->Max_scale_step_label->Text = L"Максимальный шаг";
			// 
			// Count_div_label
			// 
			this->Count_div_label->AutoSize = true;
			this->Count_div_label->Location = System::Drawing::Point(7, 46);
			this->Count_div_label->Name = L"Count_div_label";
			this->Count_div_label->Size = System::Drawing::Size(84, 13);
			this->Count_div_label->TabIndex = 3;
			this->Count_div_label->Text = L"Число делений";
			// 
			// Count_dub_label
			// 
			this->Count_dub_label->AutoSize = true;
			this->Count_dub_label->Location = System::Drawing::Point(6, 33);
			this->Count_dub_label->Name = L"Count_dub_label";
			this->Count_dub_label->Size = System::Drawing::Size(89, 13);
			this->Count_dub_label->TabIndex = 2;
			this->Count_dub_label->Text = L"Число удвоений";
			// 
			// n_steps_out
			// 
			this->n_steps_out->AutoSize = true;
			this->n_steps_out->Location = System::Drawing::Point(136, 20);
			this->n_steps_out->Name = L"n_steps_out";
			this->n_steps_out->Size = System::Drawing::Size(13, 13);
			this->n_steps_out->TabIndex = 1;
			this->n_steps_out->Text = L"0";
			// 
			// n_steps_label
			// 
			this->n_steps_label->AutoSize = true;
			this->n_steps_label->Location = System::Drawing::Point(7, 20);
			this->n_steps_label->Name = L"n_steps_label";
			this->n_steps_label->Size = System::Drawing::Size(25, 13);
			this->n_steps_label->TabIndex = 0;
			this->n_steps_label->Text = L"n = ";
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->Name = L"i";
			this->i->Width = 50;
			// 
			// hi_tab
			// 
			this->hi_tab->HeaderText = L"h (i-1)";
			this->hi_tab->Name = L"hi_tab";
			this->hi_tab->ReadOnly = true;
			this->hi_tab->Width = 50;
			// 
			// xi_tab
			// 
			this->xi_tab->HeaderText = L"xi";
			this->xi_tab->Name = L"xi_tab";
			this->xi_tab->ReadOnly = true;
			this->xi_tab->Width = 50;
			// 
			// vi_tab
			// 
			this->vi_tab->HeaderText = L"vi";
			this->vi_tab->Name = L"vi_tab";
			this->vi_tab->ReadOnly = true;
			this->vi_tab->Width = 50;
			// 
			// v2_tab
			// 
			this->v2_tab->HeaderText = L"v2i";
			this->v2_tab->Name = L"v2_tab";
			this->v2_tab->ReadOnly = true;
			this->v2_tab->Width = 50;
			// 
			// sub_tab
			// 
			this->sub_tab->HeaderText = L"vi-v2i";
			this->sub_tab->Name = L"sub_tab";
			this->sub_tab->ReadOnly = true;
			this->sub_tab->Width = 50;
			// 
			// S_tab
			// 
			this->S_tab->HeaderText = L"S";
			this->S_tab->Name = L"S_tab";
			this->S_tab->ReadOnly = true;
			this->S_tab->Width = 50;
			// 
			// div_step_count
			// 
			this->div_step_count->HeaderText = L"Ум. шага";
			this->div_step_count->Name = L"div_step_count";
			this->div_step_count->ReadOnly = true;
			this->div_step_count->Width = 50;
			// 
			// dub_step_count
			// 
			this->dub_step_count->HeaderText = L"Ув. шага";
			this->dub_step_count->Name = L"dub_step_count";
			this->dub_step_count->Width = 50;
			// 
			// TheForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 361);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->DataTable);
			this->Controls->Add(this->panel1);
			this->Name = L"TheForm";
			this->Text = L"TheForm";
			this->Load += gcnew System::EventHandler(this, &TheForm::TheForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TheForm_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	double f(double x_in, double v_in)
	{
		// PARAMETERS
		double V = Convert::ToDouble(V_textbox->Text, CultureInfo::InvariantCulture);
		double Q = Convert::ToDouble(Q_textbox->Text, CultureInfo::InvariantCulture);
		double B = Convert::ToDouble(B_textbox->Text, CultureInfo::InvariantCulture);

		return (-B * (1 / V) * (v_in - Q * V * (1 / B)));
	}

	double* Method_RK3(double* pnt/* ,double(*f)(double, double)*/)
	{

		double x_in = pnt[0];
		double v_in = pnt[1];
		double h_in = pnt[2];

		double x, k1, k2, k3, v;

		x = x_in + h_in;
		k1 = f(x_in, v_in);
		k2 = f(x_in + h_in / 2, v_in + h_in / 2 * k1);
		k3 = f(x_in + h_in, v_in + h_in * (2 * k2 - k1));
		v = v_in + h_in / 6 * (k1 + 4 * k2 + k3);

		pnt[0] = x;
		pnt[1] = v;
		pnt[2] = h_in;

		return pnt;
	}


private: System::Void MaxStepsCount_in_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//DataTable->RowCount = Convert::ToInt32(MaxStepsCount_in->Text);			// по изменени максимального количества шагов изменяю размер таблицы
}

// обработка события нажатия кнопки Вычислить
private: System::Void Calculate_Click(System::Object^  sender, System::EventArgs^  e) {

	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	

	double Epsl = Convert::ToDouble(Eps_in->Text, CultureInfo::InvariantCulture);
	double LocalErrorControl = Convert::ToDouble(LocalErrorControl_in->Text, CultureInfo::InvariantCulture);
	int MaxStepsCount = Convert::ToInt32(MaxStepsCount_in->Text, CultureInfo::InvariantCulture);
	double StartStep = Convert::ToDouble(StartStep_in->Text, CultureInfo::InvariantCulture);
	int TypeOfTask = 0;
	bool Constant_Step = Constant_Step_in->Checked;

	double u0 = 1.0;
	double x0 = 1.0;
	double hn = StartStep;
	double * point = new double [3];											// массив - точка: x = [0], y = [1], h = [2] 
	
	// Для половинного шага и оценки ЛП
	double *src1 = new double[3];
	double *src2 = new double[3];
	int p = 2;		// порядок метода
	int dinp = 1;
	for (int i = 0; i < p; i++)
		dinp *= 2;
	double Eps_max = Convert::ToDouble(LocalErrorControl_in->Text, CultureInfo::InvariantCulture);
	double Eps_min = Eps_max / (dinp * 2);

	// СПРАВОЧНЫЕ
	double Max_scale_step = 0;
	double Min_scale_step = StartStep;
	int Count_dub = 0;
	int Count_div = 0;
	int step = 1;

	point[0] = x0;
	point[1] = u0;
	point[2] = hn;

	if (DataTable->RowCount > 1)
		while (DataTable->RowCount != 1)
			DataTable->Rows->RemoveAt(0);

	f1_list->Add(point[0], point[1]);
	DataTable->Rows->Add();
	DataTable->Rows[0]->Cells[0]->Value = 0;					// i
	DataTable->Rows[0]->Cells[1]->Value = point[2];				// h i-1
	DataTable->Rows[0]->Cells[2]->Value = point[0];				// xi
	DataTable->Rows[0]->Cells[3]->Value = point[1];				// v1

	for (step; step < Convert::ToInt32(MaxStepsCount_in->Text); step++)
	{
		if (point[2] < Min_scale_step)
			Min_scale_step = point[2];
		else
			if (point[2] > Max_scale_step)
				Max_scale_step = point[2];

		// ВЫЧИСЛЕНИЕ СЛЕДУЮЩЕЙ ТОЧКИ

		if (Constant_Step == true)
		{
			point = Method_RK3(point);

			f1_list->Add(point[0], point[1]);

			DataTable->Rows->Add();
			DataTable->Rows[step]->Cells[0]->Value = step;					// i
			DataTable->Rows[step]->Cells[1]->Value = point[2];				// h i-1
			DataTable->Rows[step]->Cells[2]->Value = point[0];				// xi
			DataTable->Rows[step]->Cells[3]->Value = point[1];				// v1
			//DataTable->Rows[step]->Cells[4]->Value = src2[1];				// v2i
			//DataTable->Rows[step]->Cells[5]->Value = (src1[1] - src2[1]);	// vi - v2i
			//DataTable->Rows[step]->Cells[6]->Value = S;					// S
			DataTable->Rows[step]->Cells[7]->Value = Count_div;				// Div
			DataTable->Rows[step]->Cells[8]->Value = Count_dub;				// Dub
			
		}
		else
		{
			// WHOLE STEP
			src1 = Method_RK3(point);

			// HALF OF STEP
			src2 = point;
			src2[2] = src2[2] / 2;

			src2 = Method_RK3(src2);
			src2 = Method_RK3(src2);

			double S = Math::Abs((src1[1] - src2[1]) / (dinp - 1));

			if ((Eps_min <= S) && (S <= Eps_max))
			{
				point = src1;

				f1_list->Add(point[0], point[1]);

				DataTable->Rows->Add();
				DataTable->Rows[step]->Cells[0]->Value = step;					// i
				DataTable->Rows[step]->Cells[1]->Value = point[2];				// h i-1
				DataTable->Rows[step]->Cells[2]->Value = point[0];				// xi
				DataTable->Rows[step]->Cells[3]->Value = point[1];				// v1
				DataTable->Rows[step]->Cells[4]->Value = src2[1];				// v2i
				DataTable->Rows[step]->Cells[5]->Value = (src1[1] - src2[1]);	// vi - v2i
				DataTable->Rows[step]->Cells[6]->Value = S;						// S
				DataTable->Rows[step]->Cells[7]->Value = Count_div;				// Div
				DataTable->Rows[step]->Cells[8]->Value = Count_dub;				// Dub
			}
			else
				if (S < Eps_min)
				{
					point = src1;
					Count_dub++;

					f1_list->Add(point[0], point[1]);

					DataTable->Rows->Add();
					DataTable->Rows[step]->Cells[0]->Value = step;					// i
					DataTable->Rows[step]->Cells[1]->Value = point[2];				// h i-1
					DataTable->Rows[step]->Cells[2]->Value = point[0];				// xi
					DataTable->Rows[step]->Cells[3]->Value = point[1];				// v1
					DataTable->Rows[step]->Cells[4]->Value = src2[1];				// v2i
					DataTable->Rows[step]->Cells[5]->Value = (src1[1] - src2[1]);	// vi - v2i
					DataTable->Rows[step]->Cells[6]->Value = S;						// S
					DataTable->Rows[step]->Cells[7]->Value = Count_div;				// Div
					DataTable->Rows[step]->Cells[8]->Value = Count_dub;				// Dub

					point[2] = point[2] * 2;		// удвоение шага
				}
				else
				{
					point[2] = point[2] / 2;		// деление шага
					Count_div++;
					step--;
				}
		}
	}

	Max_scale_step_out-> Text = Convert::ToString(Max_scale_step);
	Min_scale_step_out->Text = Convert::ToString(Min_scale_step);
	Count_dub_out->Text = Convert::ToString(Count_dub);
	Count_div_out->Text = Convert::ToString(Count_div);
	n_steps_out->Text = Convert::ToString(step);

	LineItem^ Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::None);
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();	

	delete[] point;
	//delete[] src1;
	//delete[] src2;
}


private: System::Void Reload_Click(System::Object^  sender, System::EventArgs^  e) {
	if (DataTable->RowCount > 1)
		while (DataTable->RowCount != 1)
			DataTable->Rows->RemoveAt(0);
}
private: System::Void Constant_Step_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}




