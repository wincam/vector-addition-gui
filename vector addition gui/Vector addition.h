#pragma once
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
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
	private: System::Windows::Forms::Label^  ExpLabel;
	private: System::Windows::Forms::TextBox^  VectorExpEditBox;







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
			this->VectorExpEditBox = (gcnew System::Windows::Forms::TextBox());
			this->ExpLabel = (gcnew System::Windows::Forms::Label());
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
			this->VectorListBox->Location = System::Drawing::Point(696, 18);
			this->VectorListBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorListBox->Name = L"VectorListBox";
			this->VectorListBox->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorListBox->Size = System::Drawing::Size(322, 288);
			this->VectorListBox->TabIndex = 0;
			this->VectorListBox->TabStop = false;
			this->VectorListBox->Text = L"Vectors";
			// 
			// VectorEditBtn
			// 
			this->VectorEditBtn->Location = System::Drawing::Point(9, 225);
			this->VectorEditBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorEditBtn->Name = L"VectorEditBtn";
			this->VectorEditBtn->Size = System::Drawing::Size(150, 43);
			this->VectorEditBtn->TabIndex = 3;
			this->VectorEditBtn->Text = L"Edit";
			this->VectorEditBtn->UseVisualStyleBackColor = true;
			this->VectorEditBtn->Click += gcnew System::EventHandler(this, &Vectoraddition::VectorEditBtn_Click);
			// 
			// VectorDeleteBtn
			// 
			this->VectorDeleteBtn->Location = System::Drawing::Point(164, 225);
			this->VectorDeleteBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorDeleteBtn->Name = L"VectorDeleteBtn";
			this->VectorDeleteBtn->Size = System::Drawing::Size(150, 43);
			this->VectorDeleteBtn->TabIndex = 2;
			this->VectorDeleteBtn->Text = L"Delete";
			this->VectorDeleteBtn->UseVisualStyleBackColor = true;
			this->VectorDeleteBtn->Click += gcnew System::EventHandler(this, &Vectoraddition::VectorDeleteBtn_Click);
			// 
			// VectorList
			// 
			this->VectorList->FormattingEnabled = true;
			this->VectorList->ItemHeight = 20;
			this->VectorList->Location = System::Drawing::Point(9, 29);
			this->VectorList->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorList->Name = L"VectorList";
			this->VectorList->Size = System::Drawing::Size(302, 184);
			this->VectorList->TabIndex = 1;
			this->VectorList->SelectedValueChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorList_SelectedValueChanged);
			// 
			// VectorEditBox
			// 
			this->VectorEditBox->Controls->Add(this->ExpLabel);
			this->VectorEditBox->Controls->Add(this->VectorExpEditBox);
			this->VectorEditBox->Controls->Add(this->VectorAddBtn);
			this->VectorEditBox->Controls->Add(this->VectorDirectionBox2);
			this->VectorEditBox->Controls->Add(this->VectorDegreeTxtBox);
			this->VectorEditBox->Controls->Add(this->VectorDirectionBox1);
			this->VectorEditBox->Controls->Add(this->VectorLabel1);
			this->VectorEditBox->Controls->Add(this->VectorMagnitudeTxtBox);
			this->VectorEditBox->Location = System::Drawing::Point(18, 18);
			this->VectorEditBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorEditBox->Name = L"VectorEditBox";
			this->VectorEditBox->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorEditBox->Size = System::Drawing::Size(669, 120);
			this->VectorEditBox->TabIndex = 1;
			this->VectorEditBox->TabStop = false;
			this->VectorEditBox->Text = L"Vector";
			// 
			// VectorAddBtn
			// 
			this->VectorAddBtn->Enabled = false;
			this->VectorAddBtn->Location = System::Drawing::Point(9, 69);
			this->VectorAddBtn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorAddBtn->Name = L"VectorAddBtn";
			this->VectorAddBtn->Size = System::Drawing::Size(183, 34);
			this->VectorAddBtn->TabIndex = 5;
			this->VectorAddBtn->Text = L"Add";
			this->VectorAddBtn->UseVisualStyleBackColor = true;
			this->VectorAddBtn->Click += gcnew System::EventHandler(this, &Vectoraddition::VectorAddBtn_Click);
			// 
			// VectorDirectionBox2
			// 
			this->VectorDirectionBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->VectorDirectionBox2->FormattingEnabled = true;
			this->VectorDirectionBox2->Location = System::Drawing::Point(586, 28);
			this->VectorDirectionBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorDirectionBox2->Name = L"VectorDirectionBox2";
			this->VectorDirectionBox2->Size = System::Drawing::Size(66, 28);
			this->VectorDirectionBox2->TabIndex = 4;
			this->VectorDirectionBox2->TextChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorDirectionBox2_TextChanged);
			// 
			// VectorDegreeTxtBox
			// 
			this->VectorDegreeTxtBox->Location = System::Drawing::Point(507, 29);
			this->VectorDegreeTxtBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorDegreeTxtBox->Name = L"VectorDegreeTxtBox";
			this->VectorDegreeTxtBox->Size = System::Drawing::Size(68, 26);
			this->VectorDegreeTxtBox->TabIndex = 3;
			this->VectorDegreeTxtBox->TextChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorDegreeTxtBox_TextChanged);
			// 
			// VectorDirectionBox1
			// 
			this->VectorDirectionBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->VectorDirectionBox1->FormattingEnabled = true;
			this->VectorDirectionBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"N", L"S", L"E", L"W" });
			this->VectorDirectionBox1->Location = System::Drawing::Point(430, 28);
			this->VectorDirectionBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorDirectionBox1->Name = L"VectorDirectionBox1";
			this->VectorDirectionBox1->Size = System::Drawing::Size(66, 28);
			this->VectorDirectionBox1->TabIndex = 2;
			this->VectorDirectionBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorDirectionBox1_SelectedIndexChanged);
			this->VectorDirectionBox1->TextChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorDirectionBox1_TextChanged);
			// 
			// VectorLabel1
			// 
			this->VectorLabel1->AutoSize = true;
			this->VectorLabel1->Location = System::Drawing::Point(9, 34);
			this->VectorLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VectorLabel1->Name = L"VectorLabel1";
			this->VectorLabel1->Size = System::Drawing::Size(56, 20);
			this->VectorLabel1->TabIndex = 1;
			this->VectorLabel1->Text = L"Vector";
			// 
			// VectorMagnitudeTxtBox
			// 
			this->VectorMagnitudeTxtBox->Location = System::Drawing::Point(73, 28);
			this->VectorMagnitudeTxtBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorMagnitudeTxtBox->Name = L"VectorMagnitudeTxtBox";
			this->VectorMagnitudeTxtBox->Size = System::Drawing::Size(208, 26);
			this->VectorMagnitudeTxtBox->TabIndex = 0;
			this->VectorMagnitudeTxtBox->TextChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorMagnitudeTxtBox_TextChanged);
			// 
			// VectorResultantBox
			// 
			this->VectorResultantBox->Controls->Add(this->VectorLabel4);
			this->VectorResultantBox->Controls->Add(this->VectorLabel3);
			this->VectorResultantBox->Controls->Add(this->VectorResultantTxtBox);
			this->VectorResultantBox->Controls->Add(this->Vectorlabel2);
			this->VectorResultantBox->Controls->Add(this->VectorYMagTxtBox);
			this->VectorResultantBox->Controls->Add(this->VectorXMagTxtBox);
			this->VectorResultantBox->Location = System::Drawing::Point(18, 148);
			this->VectorResultantBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorResultantBox->Name = L"VectorResultantBox";
			this->VectorResultantBox->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorResultantBox->Size = System::Drawing::Size(669, 158);
			this->VectorResultantBox->TabIndex = 2;
			this->VectorResultantBox->TabStop = false;
			this->VectorResultantBox->Text = L"Resultant";
			// 
			// VectorLabel4
			// 
			this->VectorLabel4->AutoSize = true;
			this->VectorLabel4->Location = System::Drawing::Point(9, 114);
			this->VectorLabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VectorLabel4->Name = L"VectorLabel4";
			this->VectorLabel4->Size = System::Drawing::Size(78, 20);
			this->VectorLabel4->TabIndex = 7;
			this->VectorLabel4->Text = L"Resultant";
			// 
			// VectorLabel3
			// 
			this->VectorLabel3->AutoSize = true;
			this->VectorLabel3->Location = System::Drawing::Point(9, 74);
			this->VectorLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->VectorLabel3->Name = L"VectorLabel3";
			this->VectorLabel3->Size = System::Drawing::Size(99, 20);
			this->VectorLabel3->TabIndex = 5;
			this->VectorLabel3->Text = L"Y Magnitude";
			// 
			// VectorResultantTxtBox
			// 
			this->VectorResultantTxtBox->Location = System::Drawing::Point(118, 109);
			this->VectorResultantTxtBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorResultantTxtBox->Name = L"VectorResultantTxtBox";
			this->VectorResultantTxtBox->ReadOnly = true;
			this->VectorResultantTxtBox->Size = System::Drawing::Size(534, 26);
			this->VectorResultantTxtBox->TabIndex = 6;
			// 
			// Vectorlabel2
			// 
			this->Vectorlabel2->AutoSize = true;
			this->Vectorlabel2->Location = System::Drawing::Point(9, 34);
			this->Vectorlabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vectorlabel2->Name = L"Vectorlabel2";
			this->Vectorlabel2->Size = System::Drawing::Size(99, 20);
			this->Vectorlabel2->TabIndex = 3;
			this->Vectorlabel2->Text = L"X Magnitude";
			// 
			// VectorYMagTxtBox
			// 
			this->VectorYMagTxtBox->Location = System::Drawing::Point(118, 69);
			this->VectorYMagTxtBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorYMagTxtBox->Name = L"VectorYMagTxtBox";
			this->VectorYMagTxtBox->ReadOnly = true;
			this->VectorYMagTxtBox->Size = System::Drawing::Size(534, 26);
			this->VectorYMagTxtBox->TabIndex = 4;
			// 
			// VectorXMagTxtBox
			// 
			this->VectorXMagTxtBox->Location = System::Drawing::Point(118, 29);
			this->VectorXMagTxtBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorXMagTxtBox->Name = L"VectorXMagTxtBox";
			this->VectorXMagTxtBox->ReadOnly = true;
			this->VectorXMagTxtBox->Size = System::Drawing::Size(534, 26);
			this->VectorXMagTxtBox->TabIndex = 0;
			// 
			// VectorExpEditBox
			// 
			this->VectorExpEditBox->Location = System::Drawing::Point(346, 28);
			this->VectorExpEditBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->VectorExpEditBox->Name = L"VectorExpEditBox";
			this->VectorExpEditBox->Size = System::Drawing::Size(76, 26);
			this->VectorExpEditBox->TabIndex = 6;
			this->VectorExpEditBox->TextChanged += gcnew System::EventHandler(this, &Vectoraddition::VectorExpEditBox_TextChanged);
			// 
			// ExpLabel
			// 
			this->ExpLabel->AutoSize = true;
			this->ExpLabel->Location = System::Drawing::Point(289, 31);
			this->ExpLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->ExpLabel->Name = L"ExpLabel";
			this->ExpLabel->Size = System::Drawing::Size(49, 20);
			this->ExpLabel->TabIndex = 7;
			this->ExpLabel->Text = L"X 10^";
			// 
			// Vectoraddition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1030, 329);
			this->Controls->Add(this->VectorResultantBox);
			this->Controls->Add(this->VectorEditBox);
			this->Controls->Add(this->VectorListBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Vectoraddition";
			this->ShowIcon = false;
			this->Text = L"Vector Addition Calculator";
			this->Load += gcnew System::EventHandler(this, &Vectoraddition::Vectoraddition_Load);
			this->VectorListBox->ResumeLayout(false);
			this->VectorEditBox->ResumeLayout(false);
			this->VectorEditBox->PerformLayout();
			this->VectorResultantBox->ResumeLayout(false);
			this->VectorResultantBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//check if number
//-----------------------------------------------------------------------------------------------------------------------------------
bool isnumber(){
	msclr::interop::marshal_context context;
	string input{ context.marshal_as<std::string>(this->VectorMagnitudeTxtBox->Text) };

	//check if input boxes are only numbers
	boolean decimalused = false;
	for (unsigned int i = 0; i < input.length(); i++){
		if (!((input[i] >= '0' && input[i] <= '9') || ((input[i] == '.') && (decimalused == false)))) {
			return false;
		}
		if (input[i] == '.'){
			decimalused = true;
		}
	}

	input = context.marshal_as<std::string>(this->VectorDegreeTxtBox->Text);
	for (unsigned int i = 0; i < input.length(); i++){
		if (!(input[i] >= '0' && input[i] <= '9')) {
			return false;
		}
	}


	input = context.marshal_as<std::string>(this->VectorExpEditBox->Text);
	for (unsigned int i = 0; i < input.length(); i++){
		if (!((input[i] >= '0' && input[i] <= '9') || ((input[i] == '-') && (i == 0)))) {
			return false;
		}
	}
	return true;
			
}

//refresh vector list
//-----------------------------------------------------------------------------------------------------------------------------------
void refreshlist(){
	//set up list of vectors
	stringstream ss;
	this->VectorList->Items->Clear();
	for (int i{ 0 }; i < vectors_size; i++){
		string vector{};
		ss << scientific << setprecision(vectors[i].magnitudesigdig) << vectors[i].magnitude;
		vector += ss.str();
		ss.str(string());
		ss.clear();
		if (vectors[i].ydir == 1){
			vector += " [N";
			vector += to_string(vectors[i].degree);
			vector += "°";
		}
		else if (vectors[i].ydir == 2){
			vector += " [S";
			vector += to_string(vectors[i].degree);
			vector += "°";
		}

		if (vectors[i].xdir == 1){
			vector += "W]";

		}
		else if (vectors[i].xdir == 2){
			vector += "E]";

		}
		this->VectorList->Items->Add(gcnew String(vector.c_str()));
	}
}

//calc resultant
//-----------------------------------------------------------------------------------------------------------------------------------
void calcresultant(){

	double xmag{};
	double ymag{};
	double resdegree{};
	double resmag{};
	int ressigdig{};
	string resultant{};

	if (vectors_size >= 1){
		ressigdig = vectors[0].magnitudesigdig;
	}
	for (int i{ 0 }; i < vectors_size; i++){
		xmag += vectors[i].xmagnitude;
		ymag += vectors[i].ymagnitude;

		//find lowest sig dig
		if (ressigdig > vectors[i].magnitudesigdig){
			ressigdig = vectors[i].magnitudesigdig;
		}
	}
	stringstream ss;
	

	resdegree = atan(abs(xmag / ymag)) * 180 / PI;
	resmag = sqrt(pow(xmag, 2) + pow(ymag, 2));
	ss << scientific << setprecision(ressigdig) << resmag;
	resultant += ss.str();
	ss.str(string());
	ss.clear();

	//if the resultant isnt aligned along an axis
	if (xmag != 0 && ymag != 0){
		if (ymag > 0){
			resultant += " [N";
			resultant += to_string((int)round (resdegree));
			resultant += "°";
		}
		else if (ymag < 0){
			resultant += " [S";
			resultant += to_string((int)round(resdegree));
			resultant += "°";
		}

		if (xmag > 0){
			resultant += "E]";

		}
		else if (xmag < 0){
			resultant += "W]";

		}
	}
	//if the resultant is aligned along an axis
	else {
		if (ymag == 0){
			if (xmag > 0){
				resultant += " [E]";
			}
			else if (xmag < 0){
				resultant += " [W]";
			}
		}
		else if (xmag == 0){
			if (ymag > 0){
				resultant += " [N]";
			}
			else if (ymag < 0){
				resultant += " [S]";
			}
		}
	}
	

	//display resultant
	ss << scientific << setprecision(ressigdig) << xmag;
	this->VectorXMagTxtBox->Text = gcnew String(ss.str().c_str());
	ss.str(string());
	ss.clear();
	ss << scientific << setprecision(ressigdig) << ymag;
	this->VectorYMagTxtBox->Text = gcnew String(ss.str().c_str());
	ss.str(string());
	ss.clear();
	this->VectorResultantTxtBox->Text = gcnew String(resultant.c_str());
}

//delete element
//-----------------------------------------------------------------------------------------------------------------------------------
void deleteelement(){
	vectors = vectorarraydelete(vectors, vectors_size, this->VectorList->SelectedIndex);
	vectors_size--;

	//deactivate the edit and delete button
	if (vectors_size == 0){
		this->VectorDeleteBtn->Enabled = false;
		this->VectorEditBtn->Enabled = false;
	}

	//refresh
	calcresultant();

	refreshlist();
}

//add button
//-----------------------------------------------------------------------------------------------------------------------------------
private: System::Void VectorAddBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
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
		vectors[vectors_size - 1].degree = System::Convert::ToInt32(this->VectorDegreeTxtBox->Text);

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
		vectors[vectors_size - 1].degree = 90 - System::Convert::ToInt32(this->VectorDegreeTxtBox->Text);

	}
	//vector magnitude
	vectors[vectors_size - 1].magnitude = System::Convert::ToDouble(this->VectorMagnitudeTxtBox->Text);
	vectors[vectors_size - 1].magnitude = vectors[vectors_size - 1].magnitude * pow(10.0, System::Convert::ToDouble(this->VectorExpEditBox->Text));
	
	//sig figs
	int sigfigs{};

	for (int i{ 0 }; i < (int)msclr::interop::marshal_as<std::string>(this->VectorMagnitudeTxtBox->Text).size(); i++){
		if (msclr::interop::marshal_as<std::string>(this->VectorMagnitudeTxtBox->Text)[i] >= '0' && msclr::interop::marshal_as<std::string>(this->VectorMagnitudeTxtBox->Text)[i] <= '9') {
			sigfigs++;
		}
	}
	vectors[vectors_size - 1].magnitudesigdig = sigfigs - 1;

	// component calculations
	vectors[vectors_size - 1].xmagnitude = (vectors[vectors_size - 1].magnitude*(sin(vectors[vectors_size - 1].degree * PI / 180)));
	vectors[vectors_size - 1].ymagnitude = (vectors[vectors_size - 1].magnitude*(cos(vectors[vectors_size - 1].degree * PI / 180)));

	if (vectors[vectors_size - 1].xdir == 1){
		vectors[vectors_size - 1].xmagnitude *= -1;
	}
	if (vectors[vectors_size - 1].ydir == 2){
		vectors[vectors_size - 1].ymagnitude *= -1;
	}


	calcresultant();

	
	refreshlist();
	this->VectorDeleteBtn->Enabled = false;
	this->VectorEditBtn->Enabled = false;
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

	//deactivate add button
	this->VectorAddBtn->Enabled = false;
	this->VectorEditBtn->Enabled = false;
}

//add button activation mananagement
//-----------------------------------------------------------------------------------------------------------------------------------
void addbuttionactivate(){
	if (this->VectorMagnitudeTxtBox->Text != "" && this->VectorDirectionBox1->Text != "" && this->VectorDegreeTxtBox->Text != "" && this->VectorDirectionBox2->Text != "" && this->VectorExpEditBox->Text != "" && this->isnumber() == true){
		//checks if degree is less than 90
		if (System::Convert::ToDouble(this->VectorDegreeTxtBox->Text) < 90){
			this->VectorAddBtn->Enabled = true;
		}
		else {
			this->VectorAddBtn->Enabled = false;
		}
	}
	else{
		this->VectorAddBtn->Enabled = false;
	}
}
private: System::Void VectorMagnitudeTxtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	addbuttionactivate();
}
private: System::Void VectorDirectionBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	addbuttionactivate();
}
private: System::Void VectorDegreeTxtBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	addbuttionactivate();
}
private: System::Void VectorDirectionBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	addbuttionactivate();
}
private: System::Void VectorExpEditBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	addbuttionactivate();
}

//delete and edit button control
//-----------------------------------------------------------------------------------------------------------------------------------
private: System::Void VectorList_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->VectorList->SelectedIndex == -1){
		this->VectorDeleteBtn->Enabled = false;
		this->VectorEditBtn->Enabled = false;
	}
	else{
		this->VectorDeleteBtn->Enabled = true;
		this->VectorEditBtn->Enabled = true;
	}
}
private: System::Void Vectoraddition_Load(System::Object^  sender, System::EventArgs^  e) {
	this->VectorDeleteBtn->Enabled = false;
	this->VectorEditBtn->Enabled = false;
}

//delete an element of the list
//-----------------------------------------------------------------------------------------------------------------------------------
private: System::Void VectorDeleteBtn_Click(System::Object^  sender, System::EventArgs^  e) {

	deleteelement();
	
}

//edit an element of the list
//-----------------------------------------------------------------------------------------------------------------------------------
private: System::Void VectorEditBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//move element to the edit box
	this->VectorMagnitudeTxtBox->Text = vectors[this->VectorList->SelectedIndex].magnitude.ToString();

	switch (vectors[this->VectorList->SelectedIndex].ydir){

	case 1:
		this->VectorDirectionBox1->Text = "N";
		break;
		
	case 2:
		this->VectorDirectionBox1->Text = "S";
		break;
	
	}

	this->VectorExpEditBox->Text = "0";
	this->VectorDegreeTxtBox->Text = vectors[this->VectorList->SelectedIndex].degree.ToString();

	//set up directon box
	this->VectorDirectionBox2->Items->Clear();
	this->VectorDirectionBox2->Items->Add("E");
	this->VectorDirectionBox2->Items->Add("W");

	switch (vectors[this->VectorList->SelectedIndex].xdir){

	case 1:
		this->VectorDirectionBox2->Text = "W";
		break;

	case 2:
		this->VectorDirectionBox2->Text = "E";
		break;

	}

	//delete element from the array
	deleteelement();
}
};
}
