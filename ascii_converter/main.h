#pragma once

namespace ascii_converter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Image file:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(474, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"image.bmp";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(553, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(15, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(303, 218);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10));
			this->richTextBox1->Location = System::Drawing::Point(325, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox1->Size = System::Drawing::Size(303, 218);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->WordWrap = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 282);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(613, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Make ASCII...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 256);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L".;O;|";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Chars:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(386, 256);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(325, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"W scale:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(229, 256);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(90, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(168, 259);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Tolerance:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(482, 258);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(85, 17);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Add shadow";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 313);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"main";
			this->Text = L"ASCII Converter";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	array< unsigned int, 2 >^ pixels;
	Color pixel;
	INT w, h, wscale, tolerance, bAddShadow;

	void button1_Click( Object^ sender, EventArgs^ e ) {
		Bitmap^ image = nullptr;
		try { //catching exceptions
			image = (Bitmap^)Image::FromFile(textBox1->Text);
		}
		catch( BadImageFormatException^ ) {
			MessageBoxA( NULL, "Error\n\tCan't load specified image\n\tBadImageFormat", NULL, MB_ICONERROR );
			return;
		}
		catch( OutOfMemoryException^ ) {
			MessageBoxA( NULL, "Error\n\tCan't load specified image\n\tOutOfMemory", NULL, MB_ICONERROR );
			return;
		}
		catch( IO::FileNotFoundException^ ) {
			MessageBoxA( NULL, "Error\n\tCan't load specified image\n\tFileNotFound", NULL, MB_ICONERROR );
			return;
		}
		w = image->Width, h = image->Height;
		tolerance = Convert::ToInt16( textBox4->Text );
		pixels = gcnew array< unsigned int, 2 >(w, h); //make a 2-dimensional array to store pixel data in
		for( INT y = 0; y < h; y++ ) {
			for( INT x = 0; x < w; x++ ) { //thumb thru the pixels
				pixel = image->GetPixel(x, y); //get pixel color
				pixels[x, y] = (pixel.R > tolerance && pixel.G > tolerance && pixel.B > tolerance);
			} //check if the pixel is bright enough to tolerate it as something we should draw
		}
		pictureBox1->Image = image; //load the image into picture-box
	}

	void button2_Click( Object^ sender, EventArgs^ e ) {
		richTextBox1->Clear(); //clear the previous art
		wscale = Convert::ToInt16( textBox3->Text ); //set w-scale
		bAddShadow = checkBox1->Checked;
		wchar_t chars[3] = { Convert::ToChar(textBox2->Text->Substring(0, 1)),
							 Convert::ToChar(textBox2->Text->Substring(2, 1)),
							 Convert::ToChar(textBox2->Text->Substring(4, 1)) }; //set our characters
		for( INT y = 0; y < h; y++ ) {
			for( INT x = 0; x < w; x++ ) { //thumb thru the pixels array & process it
				for( INT s = 0; s < wscale; s++ ) { //if we need to scale by width, do so
					if( pixels[x, y] ) {
						if( x && x < w-1 ) { //still within the bounds
							if( bAddShadow && ((pixels[x-1, y] && !pixels[x, y]) || (!pixels[x+1, y] && pixels[x, y])) )
								richTextBox1->Text += chars[2].ToString();
							else richTextBox1->Text += chars[0].ToString();
						}
						else richTextBox1->Text += chars[0].ToString();
					}
					else richTextBox1->Text += chars[1].ToString();
				}
			}
			richTextBox1->Text += "\n"; //new-line determinator after each vertical line
		}
	}

	void button3_Click( Object^ sender, EventArgs^ e ) {
		if( richTextBox1->Text != String::Empty ) { //if the art has been drawn
			Clipboard::Clear(); //clear the previously stored data
			Clipboard::SetText( richTextBox1->Text ); //paste it into clipboard
		}
	}
};
}
