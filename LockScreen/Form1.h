#pragma once
#include<iostream>
namespace LockScreen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Link List Structure
	struct Lock{
			int Data;
			Lock *Next;
		}*Start;             //Start has the Address of the First number entered
	
	bool done=0;				//To check if initial number has been saved completely
	bool error=0;				//Any errors while comparing the pattern
	bool finished=0;			//If the number has finished comparing without any errors
	bool clear=0;				//To start the process again if reset is clicked twice
	Lock *Check_Lock;			//Pointer to check and compare the values
	
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Display;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  Dis;
	private: System::Windows::Forms::Label^  label1;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Display = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->Dis = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Display->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Display->Location = System::Drawing::Point(32, 35);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(553, 52);
			this->Display->TabIndex = 0;
			this->Display->Text = L"Enter the Pattern";
			this->Display->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Display->Click += gcnew System::EventHandler(this, &Form1::Display_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(32, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(148, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 56);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(264, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 56);
			this->button3->TabIndex = 1;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(32, 183);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 56);
			this->button4->TabIndex = 1;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(148, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 56);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(264, 183);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 56);
			this->button6->TabIndex = 1;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(32, 245);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 56);
			this->button7->TabIndex = 1;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(148, 245);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 56);
			this->button8->TabIndex = 1;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(264, 245);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 56);
			this->button9->TabIndex = 1;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(264, 316);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 56);
			this->button10->TabIndex = 1;
			this->button10->Text = L"=";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(148, 316);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 56);
			this->button11->TabIndex = 1;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(32, 316);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 56);
			this->button12->TabIndex = 1;
			this->button12->Text = L"Reset";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// Dis
			// 
			this->Dis->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Dis->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Dis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Dis->Location = System::Drawing::Point(385, 121);
			this->Dis->Name = L"Dis";
			this->Dis->Size = System::Drawing::Size(210, 92);
			this->Dis->TabIndex = 2;
			this->Dis->Text = L"Enter a Number and click \'=\' then enter a number again. This program checks if th" 
				L"ey are equal";
			this->Dis->Click += gcnew System::EventHandler(this, &Form1::Dis_Click);
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(385, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 66);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Inorder to start again, click reset twice";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(629, 407);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Dis);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Display);
			this->Name = L"Form1";
			this->Text = L"Compare Numbers";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}

		
#pragma endregion
		
		void insert(int x)				//Inserting the number into the Linked List
		{
			Lock *Choice=new Lock;	//Choice is the number entered by the user while defining initially
			Lock *temp=new Lock;
			temp->Data=x;
			temp->Next=NULL;
			if(Start==NULL)
				Start=temp;
			else
			{
				Choice=Start;
				while(Choice->Next!=NULL) 
					Choice=Choice->Next;
				Choice->Next=temp;
			}
		}
		
		void Check(int x)			//Compare the numbers
		{
			
			if(Check_Lock==NULL||Check_Lock->Data!=x||finished==1) 
			{
				error=1;   //there is an error=1 if the entered number is not equal, or if the number has already reached NULL. ie. if there are 3 numbers initially but 4 numbers are entered 
			}
			if(Check_Lock->Next==NULL)
				finished=1;
			
			if(finished!=1)
				Check_Lock=Check_Lock->Next;
			
		}
		int CheckDisplayMessage()
		{
			if(Display->Text=="Start again"||Display->Text=="Enter the Pattern again to Check!"||Display->Text=="Wrong! Try again"||Display->Text=="U've got it right"||Display->Text=="Saved Successfully"||Display->Text=="Enter the Pattern"||Display->Text=="Cleared! Enter the Pattern again")
				return 1;
			else
				return 0;
		}
		void CheckClear()
		{
			if(clear==1)
				 clear=0;
		}
	private: System::Void Display_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
			
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();			//Checks the reset condition
			if(CheckDisplayMessage()){   
				 Display->Text="1";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"1";    //concartinates the string in the text label
			 }
			if(done!=1)  //if we are not done inserting
				 insert(1);
			else
				Check(1);
		 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			 if(CheckDisplayMessage()){
				 Display->Text="2";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"2";
			 }
			 if(done!=1)
				 insert(2);
			 else
				 Check(2);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			 if(CheckDisplayMessage()){
				 Display->Text="3";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"3";
			 }
			 if(done!=1)
				insert(3);
			 else
				 Check(3);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			  if(CheckDisplayMessage()){
				 Display->Text="4";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"4";
			 }
			  if(done!=1)
				insert(4);
			  else
				  Check(4);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			if(CheckDisplayMessage()){
				 Display->Text="5";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"5";
			 }
			if(done!=1)
				insert(5);
			else
				Check(5);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear() ;
			 if(CheckDisplayMessage()){
				 Display->Text="6";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"6";
			 }
			  if(done!=1)
				insert(6);
			  else
				  Check(6);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			  if(CheckDisplayMessage()){
				 Display->Text="7";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"7";
			 }
			  if(done!=1)
				insert(7);
			  else
				  Check(7);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			if(CheckDisplayMessage()){
				 Display->Text="8";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"8";
			 }
			if(done!=1)
				insert(8);
			else
				Check(8);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();
			  if(CheckDisplayMessage()){
				 Display->Text="9";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"9";
			 }
			  if(done!=1)
				insert(9);
			  else
				  Check(9);
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckClear();

			  if(CheckDisplayMessage()){
				 Display->Text="0";
				
			 }
			 else
			 {
				 Display->Text = Convert::ToInt32(Display->Text)+"0";
			 }
			 if(done!=1)
				insert(0);
			 else
				 Check(0);
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(clear==0)			//reset is pressed only once
			 {
				 if(done==0){		//Starts getting the initial value again
					Start=NULL;
					Display->Text="Cleared! Enter the Pattern again";
				}
				if(done==1){		//starts getting the compare values again
					Check_Lock=Start;
					Display->Text="Enter the Pattern again to Check!";
					finished=0;
				}
			 error=0;
			 clear=1;
			 }
			 else{				//reset is pressed twice
				 Display->Text="Start again";
				 done=0;
				 finished=0;
				 Start=NULL;
			 }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(done!=1){			//Saves the initial number in list and starts to get new values to compare
				 Display->Text="Saved Successfully";
				 done=1;
				 Check_Lock=Start;
			 }
			 else{
				if((error==0)&&(finished==1)){
					 Display->Text="U've got it right";		//if the entire list is compared with no errors then its a sucess
					 Start=NULL;
					 done=0;
			 }
				else{
					Display->Text="Wrong! Try again";		//if there is any error, enter the values to compare again
					Check_Lock=Start;
			 }
			error=0;
			finished=0;
			 }

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void Dis_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

