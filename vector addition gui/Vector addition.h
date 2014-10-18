#pragma once
#include <math.h>
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>

#include "Resource.h"
using namespace msclr::interop;
using namespace std;
#define PI 3.14159265359

namespace vectoradditiongui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for Vectoraddition
	/// </summary>
	public ref class Vectoraddition : public System::Windows::Forms::Form
	{
	public:
		Vectoraddition(void)
		{
			
			InitializeComponent();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Vectoraddition()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  VectorListBox;
	protected:
	private: System::Windows::Forms::ListBox^  VectorList;
	private: System::Windows::Forms::GroupBox^  VectorEditBox;
	private: System::Windows::Forms::Label^  VectorLabel1;
	private: System::Windows::Forms::TextBox^  VectorMagnitudeTxtBox;
	private: System::Windows::Forms::ComboBox^  VectorDirectionBox2;
	private: System::Windows::Forms::TextBox^  VectorDegreeTxtBox;
	private: System::Windows::Forms::ComboBox^  VectorDirectionBox1;
	private: System::Windows::Forms::Button^  VectorEditBtn;
	private: System::Windows::Forms::Button^  VectorDeleteBtn;
	private: System::Windows::Forms::Button^  VectorAddBtn;
	private: System::Windows::Forms::GroupBox^  VectorResultantBox;
	private: System::Windows::Forms::Label^  Vectorlabel2;
	private: System::Windows::Forms::TextBox^  VectorXMagTxtBox;
	private: System::Windows::Forms::Label^  VectorLabel3;
	private: System::Windows::Forms::TextBox^  VectorYMagTxtBox;

	private: System::Windows::Forms::Label^  VectorLabel4;
	private: System::Windows::Forms::TextBox^  VectorResultantTxtBox;







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
			this->VectorListBox = (gcnew System::Windows::Forms::GroupBox());
			this->VectorEditBtn = (gcnew System::Windows::Forms::Button());
			this->VectorDeleteBtn = (gcnew System::Windows::Forms::Button());
			this->VectorList = (gcnew System::Windows::Forms::ListBox());
			this->VectorEditBox = (gcnew System::Windows::Forms::GroupBox());
			this->VectorAddBtn = (gcnew System::Windows::Forms::Button());
			this->VectorDirectionBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->VectorDegreeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->VectorDirectionBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->VectorLabel1 = (gcnew System::Windows::Forms::Label());
			this->VectorMagnitudeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->VectorResultantBox = (gcnew System::Windows::Forms::GroupBox());
			this->VectorLabel4 = (gcnew System::Windows::Forms::Label());
			this->VectorLabel3 = (gcnew System::Windows::Forms::Label());
			this->VectorResultantTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->Vectorlabel2 = (gcnew System::Windows::Forms::Label());
			this->VectorYMagTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->VectorXMagTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->VectorListBox->SuspendLayout();
			this->VectorEditBox->SuspendLayout();
			this->VectorResultantBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// VectorListBox
			// 
			this->VectorListBox->Controls->Add(this->VectorEditBtn);
			this->VectorListBox->Controls->Add(this->VectorDeleteBtn);
			this->VectorListBox->Controls->Add(this->VectorList);
			this->VectorListBox->Location = System::Drawing::Point(464, 12);
			this->VectorListBox->Name = L"VectorListBox";
			this->VectorListBox->Size = System::Drawing::Size(215, 187);
			this->VectorListBox->TabIndex = 0;
			this->VectorListBox->TabStop = false;
			this->VectorListBox->Text = L"Vectors";
			// 
			// VectorEditBtn
			// 
			this->VectorEditBtn->Location = System::Drawing::Point(6, 146);
			this->VectorEditBtn->Name = L"VectorEditBtn";
			this->VectorEditBtn->Size = System::Drawing::Size(100, 28);
			this->VectorEditBtn->TabIndex = 3;
			this->VectorEditBtn->Text = L"Edit";
			this->VectorEditBtn->UseVisualStyleBackColor = true;
			// 
			// VectorDeleteBtn
			// 
			this->VectorDeleteBtn->Location = System::Drawing::Point(109, 146);
			this->VectorDeleteBtn->Name = L"VectorDeleteBtn";
			this->VectorDeleteBtn->Size = System::Drawing::Size(100, 28);
			this->VectorDeleteBtn->TabIndex = 2;
			this->VectorDeleteBtn->Text = L"Delete";
			this->VectorDeleteBtn->UseVisualStyleBackColor = true;
			// 
			// VectorList
			// 
			this->VectorList->FormattingEnabled = true;
			this->VectorList->Location = System::Drawing::Point(6, 19);
			this->VectorList->Name = L"VectorList";
			this->VectorList->Size = System::Drawing::Size(203, 121);
			this->VectorList->TabIndex = 1;
			// 
			// VectorEditBox
			// 
			this->VectorEditBox->Controls->Add(this->VectorAddBtn);
			this->VectorEditBox->Controls->Add(this->VectorDirectionBox2);
			this->VectorEditBox->Controls->Add(this->VectorDegreeTxtBox);
			this->VectorEditBox->Controls->Add(this->VectorDirectionBox1);
			this->VectorEditBox->Controls->Add(this->VectorLabel1);
			this->VectorEditBox->Controls->Add(this->VectorMagnitudeTxtBox);
			this->VectorEditBox->Location = System::Drawing::Point(12, 12);
			this->VectorEditBox->Name = L"VectorEditBox";
			this->VectorEditBox->Size = System::Drawing::Size(446, 78);
			this->VectorEditBox->TabIndex = 1;
			this->VectorEditBox->TabStop = false;
			this->VectorEditBox->Text = L"Vector";
			// 
			// VectorAddBtn
			// 
			this->VectorAddBtn->Location = System::Drawing::Point(6, 45);
			this->VectorAddBtn->Name = L"VectorAddBtn";
			this->VectorAddBtn->Size = System::Drawing::Size(122, 22);
			this->VectorAddBtn->TabIndex = 5;
			this->VectorAddBtn->Text = L"Add";
			this->VectorAddBtn->UseVisualStyleBackColor = true;
			this->VectorAddBtn->Click += gcnew System::EventHandler(this, &Vectoraddition::VectorAddBtn_Click);
			// 
			// VectorDirectionBox2
			// 
			this->VectorDirectionBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->VectorDirectionBox2->FormattingEnabled = true;
			this->VectorDirectionBox2->Location = System::Drawing::Point(391, 18);
			this->VectorDirectionBox2->Name = L"VectorDirectionBox2";
			this->VectorDirectionBox2->Size = System::Drawing::Size(45, 21);
			this->VectorDirectionBox2->TabIndex = 4;
			// 
			// VectorDegreeTxtBox
			// 
			this->VectorDegreeTxtBox->Location = System::Drawing::Point(338, 19);
			this->VectorDegreeTxtBox->Name = L"VectorDegreeTxtBox";
			this->VectorDegreeTxtBox->Size = System::Drawing::Size(47, 20);
			this->VectorDegreeTxtBox->TabIndex = 3;
			// 
			// VectorDirectionBox1
			// 
			this->VectorDirectionBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->VectorDirectionBox1->FormattingEnabled = true;
			this->VectorDirectionBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"N", L"S", L"E", L"W" });
			this->VectorDirectionBox1->Location = System::Drawing::Point(287, 18);
			this->VectorDirectionBox1->Name = L"VectorDirectionBox1";
			this->VectorDirectionBox1->Size = System::Drawing::Size(45, 21);
			this->VectorDirectionBox1->TabIndex = 2;
			this->VectorDirectionBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorDirectionBox1_SelectedIndexChanged);
			// 
			// VectorLabel1
			// 
			this->VectorLabel1->AutoSize = true;
			this->VectorLabel1->Location = System::Drawing::Point(6, 22);
			this->VectorLabel1->Name = L"VectorLabel1";
			this->VectorLabel1->Size = System::Drawing::Size(38, 13);
			this->VectorLabel1->TabIndex = 1;
			this->VectorLabel1->Text = L"Vector";
			// 
			// VectorMagnitudeTxtBox
			// 
			this->VectorMagnitudeTxtBox->Location = System::Drawing::Point(50, 19);
			this->VectorMagnitudeTxtBox->Name = L"VectorMagnitudeTxtBox";
			this->VectorMagnitudeTxtBox->Size = System::Drawing::Size(231, 20);
			this->VectorMagnitudeTxtBox->TabIndex = 0;
			// 
			// VectorResultantBox
			// 
			this->VectorResultantBox->Controls->Add(this->VectorLabel4);
			this->VectorResultantBox->Controls->Add(this->VectorLabel3);
			this->VectorResultantBox->Controls->Add(this->VectorResultantTxtBox);
			this->VectorResultantBox->Controls->Add(this->Vectorlabel2);
			this->VectorResultantBox->Controls->Add(this->VectorYMagTxtBox);
			this->VectorResultantBox->Controls->Add(this->VectorXMagTxtBox);
			this->VectorResultantBox->Location = System::Drawing::Point(12, 96);
			this->VectorResultantBox->Name = L"VectorResultantBox";
			this->VectorResultantBox->Size = System::Drawing::Size(446, 103);
			this->VectorResultantBox->TabIndex = 2;
			this->VectorResultantBox->TabStop = false;
			this->VectorResultantBox->Text = L"Resultant";
			// 
			// VectorLabel4
			// 
			this->VectorLabel4->AutoSize = true;
			this->VectorLabel4->Location = System::Drawing::Point(6, 74);
			this->VectorLabel4->Name = L"VectorLabel4";
			this->VectorLabel4->Size = System::Drawing::Size(52, 13);
			this->VectorLabel4->TabIndex = 7;
			this->VectorLabel4->Text = L"Resultant";
			// 
			// VectorLabel3
			// 
			this->VectorLabel3->AutoSize = true;
			this->VectorLabel3->Location = System::Drawing::Point(6, 48);
			this->VectorLabel3->Name = L"VectorLabel3";
			this->VectorLabel3->Size = System::Drawing::Size(67, 13);
			this->VectorLabel3->TabIndex = 5;
			this->VectorLabel3->Text = L"Y Magnitude";
			// 
			// VectorResultantTxtBox
			// 
			this->VectorResultantTxtBox->Location = System::Drawing::Point(79, 71);
			this->VectorResultantTxtBox->Name = L"VectorResultantTxtBox";
			this->VectorResultantTxtBox->ReadOnly = true;
			this->VectorResultantTxtBox->Size = System::Drawing::Size(357, 20);
			this->VectorResultantTxtBox->TabIndex = 6;
			// 
			// Vectorlabel2
			// 
			this->Vectorlabel2->AutoSize = true;
			this->Vectorlabel2->Location = System::Drawing::Point(6, 22);
			this->Vectorlabel2->Name = L"Vectorlabel2";
			this->Vectorlabel2->Size = System::Drawing::Size(67, 13);
			this->Vectorlabel2->TabIndex = 3;
			this->Vectorlabel2->Text = L"X Magnitude";
			// 
			// VectorYMagTxtBox
			// 
			this->VectorYMagTxtBox->Location = System::Drawing::Point(79, 45);
			this->VectorYMagTxtBox->Name = L"VectorYMagTxtBox";
			this->VectorYMagTxtBox->ReadOnly = true;
			this->VectorYMagTxtBox->Size = System::Drawing::Size(357, 20);
			this->VectorYMagTxtBox->TabIndex = 4;
			// 
			// VectorXMagTxtBox
			// 
			this->VectorXMagTxtBox->Location = System::Drawing::Point(79, 19);
			this->VectorXMagTxtBox->Name = L"VectorXMagTxtBox";
			this->VectorXMagTxtBox->ReadOnly = true;
			this->VectorXMagTxtBox->Size = System::Drawing::Size(357, 20);
			this->VectorXMagTxtBox->TabIndex = 0;
			// 
			// Vectoraddition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 214);
			this->Controls->Add(this->VectorResultantBox);
			this->Controls->Add(this->VectorEditBox);
			this->Controls->Add(this->VectorListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Vectoraddition";
			this->Text = L"Vector Addition Calculator";
			this->VectorListBox->ResumeLayout(false);
			this->VectorEditBox->ResumeLayout(false);
			this->VectorEditBox->PerformLayout();
			this->VectorResultantBox->ResumeLayout(false);
			this->VectorResultantBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void VectorAddBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	vectors_size++;
	vectors = vectorarrayexpand(vectors, vectors_size, 1);
	if (this->VectorDirectionBox1->Text == "N" || this->VectorDirectionBox1->Text == "S"){
		
		//y direction
		if (this->VectorDirectionBox2->Text == "W"){
			vectors[vectors_size - 1].xdir = 1;
		}
		else if (this->VectorDirectionBox2->Text == "E"){
			vectors[vectors_size - 1].xdir = 2;
		}

		//x direction

		if (this->VectorDirectionBox1->Text == "N"){
			vectors[vectors_size - 1].ydir = 1;
		}
		else if (this->VectorDirectionBox1->Text == "S"){
			vectors[vectors_size - 1].ydir = 2;
		}

		//vector degree
		vectors[vectors_size - 1].degree = System::Convert::ToDouble(this->VectorDegreeTxtBox->Text);

	}
	else if (this->VectorDirectionBox1->Text == "E" || this->VectorDirectionBox1->Text == "W"){
		//x direction
		if (this->VectorDirectionBox1->Text == "W"){
			vectors[vectors_size - 1].xdir = 1;
		}
		else if (this->VectorDirectionBox1->Text == "E"){
			vectors[vectors_size - 1].xdir = 2;
		}

		//y direction

		if (this->VectorDirectionBox2->Text == "N"){
			vectors[vectors_size - 1].ydir = 1;
		}
		else if (this->VectorDirectionBox2->Text == "S"){
			vectors[vectors_size - 1].ydir = 2;
		}

		//vector degree
		vectors[vectors_size - 1].degree = 90 - System::Convert::ToDouble(this->VectorDegreeTxtBox->Text);

	}
	//vector magnitude
	vectors[vectors_size - 1].magnitude = System::Convert::ToDouble(this->VectorMagnitudeTxtBox->Text);


	// component calculations
	vectors[vectors_size - 1].xmagnitude = (vectors[vectors_size - 1].magnitude*(sin(vectors[vectors_size - 1].degree * PI / 180)));
	vectors[vectors_size - 1].ymagnitude = (vectors[vectors_size - 1].magnitude*(cos(vectors[vectors_size - 1].degree * PI / 180)));

	if (vectors[vectors_size - 1].xdir == 1){
		vectors[vectors_size - 1].xmagnitude *= -1;
	}
	if (vectors[vectors_size - 1].ydir == 2){
		vectors[vectors_size - 1].ymagnitude *= -1;
	}


	//calc resultant
	//---------------------------------------------
	double xmag{};
	double ymag{};
	double resdegree{};
	double resmag{};
	string resultant{};
	for (int i{ 0 }; i < vectors_size; i++){
		xmag += vectors[i].xmagnitude;
		ymag += vectors[i].ymagnitude;
	}

	resdegree = atan(abs(xmag / ymag)) * 180 / PI;
	resmag = sqrt(pow(xmag, 2) + pow(ymag, 2));
	resultant += to_string (resmag);


	if (ymag > 0){
		resultant += " [N";
		resultant += to_string(resdegree);
	}
	else if (ymag < 0){
		resultant += " [S";
		resultant += to_string(resdegree);
	}

	if (xmag > 0){
		resultant += "E]";
		
	}
	else if (xmag < 0){
		resultant += "W]";
		
	}

	//display resultant
	this->VectorXMagTxtBox->Text = xmag.ToString();
	this->VectorYMagTxtBox->Text = ymag.ToString();
	this->VectorResultantTxtBox->Text = gcnew String(resultant.c_str());

	//set up list of vectors
	this->VectorList->Items->Clear();
	for (int i{ 0 }; i < vectors_size; i++){
		string vector{};
		vector += to_string (vectors[i].magnitude);
		
		if (vectors[i].ydir == 1){
			vector += " [N";
			vector += to_string(resdegree);
		}
		else if (vectors[i].ydir == 2){
			vector += " [S";
			vector += to_string(resdegree);
		}

		if (vectors[i].xdir == 1){
			vector += "W]";

		}
		else if (vectors[i].xdir == 2){
			vector += "E]";

		}
		this->VectorList->Items->Add(gcnew String (vector.c_str()));
	}
	
}
//direction 1 selected
//-----------------------------------------------------------------------------------------------------------------------------------
private: System::Void VectorDirectionBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//direction 2 setup
	if (this->VectorDirectionBox1->Text == "N" || this->VectorDirectionBox1->Text == "S"){
		this->VectorDirectionBox2->Items->Clear();
		this->VectorDirectionBox2->Items->Add("E");
		this->VectorDirectionBox2->Items->Add("W");
	}
	else if (this->VectorDirectionBox1->Text == "E" || this->VectorDirectionBox1->Text == "W"){
		this->VectorDirectionBox2->Items->Clear();
		this->VectorDirectionBox2->Items->Add("N");
		this->VectorDirectionBox2->Items->Add("S");
	}
	
}
};
}



