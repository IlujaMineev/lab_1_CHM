#pragma once

namespace AirInTheRoom {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	class CHM_Point
	{
	public:
		double X;
		double V;
		double H;
		CHM_Point() { X = 0; V = 0; H = 0; }
		CHM_Point(double x = 0, double v = 0, double h = 0)
		{
			X = x;
			V = v;
			H = h;
		}
		~CHM_Point();
	};

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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  xi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  v21_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sub_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hi_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LP_tab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vi_u_tab;
	private: System::Windows::Forms::CheckBox^  Constant_Step;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->xi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v21_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sub_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hi_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LP_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi_u_tab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Constant_Step = (gcnew System::Windows::Forms::CheckBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataTable))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Constant_Step);
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
			this->Reload->Text = L"��������";
			this->Reload->UseVisualStyleBackColor = true;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(230, 192);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(52, 32);
			this->Exit->TabIndex = 12;
			this->Exit->Text = L"�����";
			this->Exit->UseVisualStyleBackColor = true;
			// 
			// Calculate
			// 
			this->Calculate->Location = System::Drawing::Point(6, 169);
			this->Calculate->Name = L"Calculate";
			this->Calculate->Size = System::Drawing::Size(145, 55);
			this->Calculate->TabIndex = 11;
			this->Calculate->Text = L"���������";
			this->Calculate->UseVisualStyleBackColor = true;
			this->Calculate->Click += gcnew System::EventHandler(this, &TheForm::Calculate_Click);
			// 
			// TypeOfTask_in
			// 
			this->TypeOfTask_in->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��������", L"��������" });
			this->TypeOfTask_in->Location = System::Drawing::Point(136, 8);
			this->TypeOfTask_in->Name = L"TypeOfTask_in";
			this->TypeOfTask_in->Size = System::Drawing::Size(146, 21);
			this->TypeOfTask_in->TabIndex = 10;
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
			this->MaxStepsCount_in->Text = L"10000";
			this->MaxStepsCount_in->TextChanged += gcnew System::EventHandler(this, &TheForm::MaxStepsCount_in_TextChanged);
			// 
			// StartStep_label
			// 
			this->StartStep_label->AutoSize = true;
			this->StartStep_label->Location = System::Drawing::Point(3, 146);
			this->StartStep_label->Name = L"StartStep_label";
			this->StartStep_label->Size = System::Drawing::Size(86, 13);
			this->StartStep_label->TabIndex = 5;
			this->StartStep_label->Text = L"��������� ���";
			// 
			// MaxStepsCount_label
			// 
			this->MaxStepsCount_label->AutoSize = true;
			this->MaxStepsCount_label->Location = System::Drawing::Point(3, 120);
			this->MaxStepsCount_label->Name = L"MaxStepsCount_label";
			this->MaxStepsCount_label->Size = System::Drawing::Size(150, 13);
			this->MaxStepsCount_label->TabIndex = 4;
			this->MaxStepsCount_label->Text = L"������������ ����� �����";
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
			this->LocalErrorControl_label->Text = L"�������� ���. �����������";
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
			this->Eps_label->Text = L"�������� ������ �� �������";
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
			this->TypeOfTask_label->Text = L"��� ������";
			// 
			// DataTable
			// 
			this->DataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->xi_tab, this->vi_tab,
					this->v21_tab, this->sub_tab, this->hi_tab, this->LP_tab, this->vi_u_tab
			});
			this->DataTable->Location = System::Drawing::Point(297, 12);
			this->DataTable->Name = L"DataTable";
			this->DataTable->Size = System::Drawing::Size(614, 336);
			this->DataTable->TabIndex = 1;
			// 
			// xi_tab
			// 
			this->xi_tab->HeaderText = L"xi";
			this->xi_tab->Name = L"xi_tab";
			this->xi_tab->ReadOnly = true;
			// 
			// vi_tab
			// 
			this->vi_tab->HeaderText = L"vi";
			this->vi_tab->Name = L"vi_tab";
			this->vi_tab->ReadOnly = true;
			// 
			// v21_tab
			// 
			this->v21_tab->HeaderText = L"v2i";
			this->v21_tab->Name = L"v21_tab";
			this->v21_tab->ReadOnly = true;
			// 
			// sub_tab
			// 
			this->sub_tab->HeaderText = L"vi-v2i";
			this->sub_tab->Name = L"sub_tab";
			this->sub_tab->ReadOnly = true;
			// 
			// hi_tab
			// 
			this->hi_tab->HeaderText = L"hi = xi - x(i-1)";
			this->hi_tab->Name = L"hi_tab";
			this->hi_tab->ReadOnly = true;
			// 
			// LP_tab
			// 
			this->LP_tab->HeaderText = L"��. ���. ����.";
			this->LP_tab->Name = L"LP_tab";
			this->LP_tab->ReadOnly = true;
			// 
			// vi_u_tab
			// 
			this->vi_u_tab->HeaderText = L"vi �����.";
			this->vi_u_tab->Name = L"vi_u_tab";
			this->vi_u_tab->ReadOnly = true;
			// 
			// Constant_Step
			// 
			this->Constant_Step->AutoSize = true;
			this->Constant_Step->Location = System::Drawing::Point(161, 169);
			this->Constant_Step->Name = L"Constant_Step";
			this->Constant_Step->Size = System::Drawing::Size(111, 17);
			this->Constant_Step->TabIndex = 21;
			this->Constant_Step->Text = L"���������� ���";
			this->Constant_Step->UseVisualStyleBackColor = true;
			// 
			// TheForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 361);
			this->Controls->Add(this->DataTable);
			this->Controls->Add(this->panel1);
			this->Name = L"TheForm";
			this->Text = L"TheForm";
			this->Load += gcnew System::EventHandler(this, &TheForm::TheForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TheForm_Load(System::Object^  sender, System::EventArgs^  e) {
		double Epsl = Convert::ToDouble(Eps_in->Text);
		double LocalErrorControl = Convert::ToDouble(LocalErrorControl_in->Text);
		int MaxStepsCount = Convert::ToInt32(MaxStepsCount_in->Text);
		int StartStep = Convert::ToInt32(StartStep_in->Text);
		int TypeOfTask = 0;
		DataTable->RowCount = Convert::ToDouble(MaxStepsCount_in->Text);
	}

	double f(double x_in, double v_in)
	{
		// PARAMETERS
		double V = Convert::ToDouble(V_textbox->Text);
		double Q = Convert::ToDouble(Q_textbox->Text);
		double B = Convert::ToDouble(B_textbox->Text);

		return (-B * (1 / V) * (v_in - Q * V * (1 / B)));
	}

	double* Method_RK3(double x_in, double v_in, double h_in, bool Const_step/* ,double(*f)(double, double)*/)
	{
		double pnt[3] = { 0, 0, 0 };
		double h = h_in;
		double x, k1, k2, k3, v;

		if (Const_step == true)
		{
			x = x_in + h;
			k1 = f(x_in, v_in);
			k2 = f(x_in + h / 2, v_in + h / 2 * k1);
			k3 = f(x_in + h, v_in + h * (2 * k2 - k1));
			v = v_in + h / 6 * (k1 + 4 * k2 + k3);

			pnt[0] = x;
			pnt[1] = v;
			pnt[2] = h;
		}
		else
		{
			double src[2][3];

			// WHOLE STEP
			h = h_in;
			x = x_in + h;
			k1 = f(x_in, v_in);
			k2 = f(x_in + h / 2, v_in + h / 2 * k1);
			k3 = f(x_in + h, v_in + h * (2 * k2 - k1));
			v = v_in + h / 6 * (k1 + 4 * k2 + k3);

			// the 1st point with whole step
			src[0][0] = x;
			src[0][1] = v;
			src[0][2] = h;

			// HALF OF STEP
			h = h_in / 2;
			x = x_in + h;
			k1 = f(x_in, v_in);
			k2 = f(x_in + h / 2, v_in + h / 2 * k1);
			k3 = f(x_in + h, v_in + h * (2 * k2 - k1));
			v = v_in + h / 6 * (k1 + 4 * k2 + k3);

			// the 1st point with half of step
			src[1][0] = x;
			src[1][1] = v;
			src[1][2] = h;

			h = h_in / 2;
			x = src[1][0] + h;
			k1 = f(src[1][0], src[1][1]);
			k2 = f(src[1][0] + h / 2, src[1][1] + h / 2 * k1);
			k3 = f(src[1][0] + h, src[1][1] + h * (2 * k2 - k1));
			v = src[1][1] + h / 6 * (k1 + 4 * k2 + k3);

			// the 2nd point with half of step
			src[1][0] = x;
			src[1][1] = v;
			src[1][2] = h;

			int p = 2;		// ������� ������ (��������)
			int dinp = 1;
			for (int i = 0; i < p; i++)
				dinp *= 2;

			double S = Math::Abs((src[0][1] - src[1][1]) / (dinp - 1));
			if (((Convert::ToDouble(Eps_in-> Text) / (dinp * 2)) <= S) && (S <= Convert::ToDouble(Eps_in->Text)))
			{
				pnt[0] = src[0][0];
				pnt[1] = src[0][1];
				pnt[2] = src[0][2];

				return pnt;
			}
			else
				if (S < (Convert::ToDouble(Eps_in->Text) / (dinp * 2)))
				{
					pnt[0] = src[0][0];
					pnt[1] = src[0][1];
					pnt[2] = src[0][2] * 2;

					return pnt;
				}
				else
				{
					pnt[0] = x_in;
					pnt[1] = v_in;
					pnt[2] = h_in / 2;

					return pnt;
				}
		}

		return pnt;
	}

private: System::Void MaxStepsCount_in_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	DataTable->RowCount = Convert::ToInt32(MaxStepsCount_in->Text);			// �� �������� ������������� ���������� ����� ������� ������ �������
}

// ��������� ������� ������� ������ ���������
private: System::Void Calculate_Click(System::Object^  sender, System::EventArgs^  e) {

	DataTable->RowCount = Convert::ToInt32(MaxStepsCount_in->Text);			// ����� ������ �������

	double u0 = 1.0;
	double x0 = 1.0;
	double hn = Convert::ToDouble(StartStep_in->Text);
	double *point = new double[3];											// ������ - �����: x = [0], y = [1], h = [2] 

	// ��� ������� ��������� �������
	for (int step = 0; step < Convert::ToInt32(MaxStepsCount_in->Text); step++)
	{
		//col[0] = xi
		DataTable->Rows[step]->Cells[0]->Value = Convert::ToString(point[0]);	// (v) ���������� �������� � 0 ������ ������ step 
		//col[1] = Vi
		DataTable->Rows[step]->Cells[1]->Value = Convert::ToString(point[1]);	// (�)
		//col[2] = V2i
		//col[3] = Vi - V2i
		//col[4] = hi = xi - x(i-1)
		DataTable->Rows[step]->Cells[4]->Value = Convert::ToString(hn);
		//col[5] = ��. ���. ����.
		//col[6] = Vi �����
		point = Method_RK3(point[0], point[1], hn, true);
	}

	delete[] point;
}


};
}




