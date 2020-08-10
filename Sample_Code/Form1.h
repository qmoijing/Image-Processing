#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> 
#include <iostream>
#include <algorithm>

namespace Sample_Code {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	namespace Win32 {
		[DllImport("kernel32.dll", CallingConvention = CallingConvention::StdCall)]
		int AllocConsole();
		[DllImport("kernel32.dll", CallingConvention = CallingConvention::StdCall)]
		int FreeConsole();
	}
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
			Win32::AllocConsole();
			freopen("CONOUT$", "w", stdout);
			buffer = gcnew array<Bitmap^>(50) {nullptr};
		}
	public:
		Bitmap^ originalimage1;
		Bitmap^ originalimage2;
		array<Bitmap^>^ buffer;
		int index = -1;
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
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
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
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 22);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(298, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(526, 445);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(852, 23);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(526, 445);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 22);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 22);
			this->button3->TabIndex = 5;
			this->button3->Text = L"R";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(158, 60);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 22);
			this->button4->TabIndex = 4;
			this->button4->Text = L"G";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(21, 90);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 22);
			this->button5->TabIndex = 7;
			this->button5->Text = L"B";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(158, 90);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 22);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Gray";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 120);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 22);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Threshold";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 22);
			this->textBox1->TabIndex = 9;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(21, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(118, 22);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Mean Smooth";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(21, 178);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(118, 22);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Median Smooth";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(21, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(118, 22);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Horizontal Sobel";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(21, 206);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(118, 22);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Vertical Sobel";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(21, 363);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(118, 22);
			this->button12->TabIndex = 15;
			this->button12->Text = L"Overlap";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(21, 266);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(118, 22);
			this->button13->TabIndex = 14;
			this->button13->Text = L"Sobel";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(21, 294);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(118, 33);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Histogram Equalization";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(21, 391);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(118, 33);
			this->button15->TabIndex = 17;
			this->button15->Text = L"Connected Component";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(21, 335);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(118, 22);
			this->button16->TabIndex = 18;
			this->button16->Text = L"Show Histogram";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button16_MouseDown);
			this->button16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button16_MouseUp);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(21, 430);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(118, 22);
			this->button17->TabIndex = 19;
			this->button17->Text = L"Undo";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1401, 549);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) // 如果成功開檔
		{
			Bitmap^ openImg = gcnew Bitmap(openFileDialog1->FileName);//宣告暫存的 Bitmap
			pictureBox1->Image = openImg;
			//originalimage1 = openImg;
			buffer = gcnew array<Bitmap^>(50) { nullptr };
			index = 0;
			buffer[index] = openImg;
		}
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
		saveFileDialog1->Title = "Save an Image File";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ sfd = saveFileDialog1->FileName;
			pictureBox2->Image->Save(sfd, System::Drawing::Imaging::ImageFormat::Jpeg);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ openImg = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ RImage = gcnew Bitmap(openImg->Width, openImg->Height);
		pictureBox1->Image = openImg;
		for (int i = 0; i < RImage->Height; i++)
			for (int j = 0; j < RImage->Width; j++)
			{
				Color RGB = openImg->GetPixel(j, i);
				RImage->SetPixel(j, i, Color::FromArgb(RGB.R, RGB.R, RGB.R));
			}
		pictureBox2->Image = RImage;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ openImg = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ GImage = gcnew Bitmap(openImg->Width, openImg->Height);
		pictureBox1->Image = openImg;
		for (int i = 0; i < GImage->Height; i++)
			for (int j = 0; j < GImage->Width; j++)
			{
				Color RGB = openImg->GetPixel(j, i);
				GImage->SetPixel(j, i, Color::FromArgb(RGB.G, RGB.G, RGB.G));
			}
		pictureBox2->Image = GImage;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ openImg = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ BImage = gcnew Bitmap(openImg->Width, openImg->Height);
		pictureBox1->Image = openImg;
		for (int i = 0; i < BImage->Height; i++)
			for (int j = 0; j < BImage->Width; j++)
			{
				Color RGB = openImg->GetPixel(j, i);
				BImage->SetPixel(j, i, Color::FromArgb(RGB.B, RGB.B, RGB.B));
			}
		pictureBox2->Image = BImage;
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ openImg = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ GrayImage = gcnew Bitmap(openImg->Width, openImg->Height);
		pictureBox1->Image = openImg;
		for (int i = 0; i < GrayImage->Height; i++)
			for (int j = 0; j < GrayImage->Width; j++)
			{
				Color RGB = openImg->GetPixel(j, i);
				int gray = (RGB.R + RGB.G + RGB.B) / 3;
				GrayImage->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}
		pictureBox2->Image = GrayImage;
		index += 1;
		buffer[index] = GrayImage;
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox1->Text != "")
		{
			int threshold = int::Parse(textBox1->Text);
			Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
			Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
			for (int y = 0; y < image->Height; y++)
				for (int x = 0; x < image->Width; x++)
				{
					Color intensity = image->GetPixel(x, y);
					result->SetPixel(x, y, (intensity.R >= threshold) ? Color::FromArgb(255, 255, 255) : Color::FromArgb(0, 0, 0));
				}
			pictureBox1->Image = image;
			pictureBox2->Image = result;
			index += 1;
			buffer[index] = result;
		}
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
				result->SetPixel(x, y, Color::FromArgb(255, 255, 255));
		for (int y = 1; y < image->Height-1; y++)
		{
			for (int x = 1; x < image->Width-1; x++)
			{
				int intensity = 0;
				for (int j = 0; j < 3; j++)
				{
					int fy = y - 1 + j;
					for (int i = 0; i < 3; i++)
					{
						int fx = x - 1 + i;
						intensity += image->GetPixel(fx, fy).R;
					}
				}
				intensity /= 9;
				result->SetPixel(x, y, Color::FromArgb(intensity, intensity, intensity));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
				result->SetPixel(x, y, Color::FromArgb(255, 255, 255));
		for (int y = 1; y < image->Height - 1; y++)
		{
			for (int x = 1; x < image->Width - 1; x++)
			{
				int intensity[9];
				int count = 0;
				for (int j = 0; j < 3; j++)
				{
					int fy = y - 1 + j;
					for (int i = 0; i < 3; i++)
					{
						int fx = x - 1 + i;
						intensity[count++] = image->GetPixel(fx, fy).R;
					}
				}
				for (int i = 1; i < 9; i++)
				{
					int key = intensity[i];
					for (int j = i - 1; j > -1; j--)
					{
						if (key > intensity[j])
						{
							intensity[j + 1] = intensity[j];
							intensity[j] = key;
						}
					}
				}
				result->SetPixel(x, y, Color::FromArgb(intensity[4], intensity[4], intensity[4]));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
				result->SetPixel(x, y, Color::FromArgb(0, 0, 0));
		for (int y = 1; y < image->Height - 1; y++)
		{
			for (int x = 1; x < image->Width - 1; x++)
			{
				int intensity;
				intensity = (-1)*image->GetPixel(x - 1, y - 1).R + (-2)*image->GetPixel(x, y - 1).R + (-1)*image->GetPixel(x + 1, y - 1).R
					+ image->GetPixel(x - 1, y + 1).R + 2 * image->GetPixel(x, y + 1).R + image->GetPixel(x + 1, y + 1).R;
				if (intensity < 0) { intensity = -intensity; }
				if (intensity > 255) { intensity = 255; }
				result->SetPixel(x, y, Color::FromArgb(intensity, intensity, intensity));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
				result->SetPixel(x, y, Color::FromArgb(0, 0, 0));
		for (int y = 1; y < image->Height - 1; y++)
		{
			for (int x = 1; x < image->Width - 1; x++)
			{
				int intensity;
				intensity = (-1)*image->GetPixel(x - 1, y - 1).R + (-2)*image->GetPixel(x - 1, y).R + (-1)*image->GetPixel(x - 1, y + 1).R
					+ image->GetPixel(x + 1, y - 1).R + 2 * image->GetPixel(x + 1, y).R + image->GetPixel(x + 1, y + 1).R;
				if (intensity < 0) { intensity = - intensity; }
				if (intensity > 255) { intensity = 255; }
				result->SetPixel(x, y, Color::FromArgb(intensity, intensity, intensity));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 1; y < image->Height - 1; y++)
		{
			for (int x = 1; x < image->Width - 1; x++)
			{
				int value = image->GetPixel(x, y).R;
				if (value==255) { result->SetPixel(x, y, Color::FromArgb(0, 255, 0)); }
				else
				{
					Color RGB = buffer[0]->GetPixel(x,y);
					result->SetPixel(x,y, Color::FromArgb(RGB.B, RGB.B, RGB.B));
				}
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
				result->SetPixel(x, y, Color::FromArgb(0, 0, 0));
		for (int y = 1; y < image->Height - 1; y++)
		{
			for (int x = 1; x < image->Width - 1; x++)
			{
				int intensity, intensity1;
				intensity = ((-1)*image->GetPixel(x - 1, y - 1).R + (-2)*image->GetPixel(x - 1, y).R + (-1)*image->GetPixel(x - 1, y + 1).R
					+ image->GetPixel(x + 1, y - 1).R + 2 * image->GetPixel(x + 1, y).R + image->GetPixel(x + 1, y + 1).R);
				intensity1 =((-1)*image->GetPixel(x - 1, y - 1).R + (-2)*image->GetPixel(x, y - 1).R + (-1)*image->GetPixel(x + 1, y - 1).R
					+ image->GetPixel(x - 1, y + 1).R + 2 * image->GetPixel(x, y + 1).R + image->GetPixel(x + 1, y + 1).R);
				if (intensity1 < 0) { intensity1 = -intensity1; }
				if (intensity < 0) { intensity = -intensity; }
				int res = intensity + intensity1;
				if (res > 255) { res = 255; }
				result->SetPixel(x, y, Color::FromArgb(res, res, res));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox2->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		double histogram[256] = { 0 };
		for (int y = 0; y < image->Height; y++)
		{
			for (int x = 0; x < image->Width; x++)
			{
				int intensity = image->GetPixel(x, y).R;
				histogram[intensity] += 1;
			}
		}
		for (int i = 1; i < 256; i++)
		{
			histogram[i] += histogram[i - 1];
		}
		int cdf_min = 0;
		for (int i = 0; i < 256; i++)
		{
			if (histogram[i] > 0)
			{
				cdf_min = histogram[i];
				break;
			}
		}
		double ratio = 255 / (histogram[255] - cdf_min);
		for (int y = 0; y < image->Height; y++)
		{
			for (int x = 0; x < image->Width; x++)
			{
				int h = int(Math::Round((histogram[image->GetPixel(x, y).R] - cdf_min)*ratio));
				result->SetPixel(x, y, Color::FromArgb(h, h, h));
			}
		}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^ image = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ result = gcnew Bitmap(image->Width, image->Height);
		Bitmap^ image_map = gcnew Bitmap(image->Width+2, image->Height+2);
		for (int y = 0; y < image_map->Height; y++)
			for (int x = 0; x < image_map->Width; x++)
			{
				image_map->SetPixel(x, y, Color::FromArgb(255, 255, 255));
			}
		for (int y = 0; y < image->Height; y++)
			for (int x = 0; x < image->Width; x++)
			{
				if (image->GetPixel(x, y).R == 0)
				{
					image_map->SetPixel(x + 1, y + 1, Color::FromArgb(0, 0, 0));
				}
			}
		int color_count = 0;
		int color_map[514][386] = { 0 };
		int color_parent[200] ;
		for (int i = 0; i < 200; i++)
			color_parent[i] = 200;
		for (int y = 1; y < image_map->Height; y++)
			for (int x = 1; x < image_map->Width-1; x++)
			{
				if (image_map->GetPixel(x, y).R == 0)
				{
					int a[4] = { color_map[x - 1][y - 1], color_map[x][y - 1], color_map[x + 1][y - 1], color_map[x - 1][y] };
					std::sort(a, a + 4);
					if (a[3]==0)
					{ 
						color_count += 1; 
						color_parent[color_count] = color_count;
						color_map[x][y] = color_count;
					}
					else
					{ 
						int k;
						for (k = 0; k < 4; k++)
						{
							if (a[k] != 0) {break;}
						}
						color_map[x][y] = a[k];
						for (int i = k; i < 4; i++)
						{
							if (a[k] < color_parent[a[i]]) { color_parent[a[i]]= color_parent[a[k]]; }
						}
					}
					
				}
			}
		int R[200],G[200],B[200];
		srand(time(NULL));
		for (int i = 0; i < 200; i++)
		{
			R[i] = rand() % 256;
			G[i] = rand() % 256;
			B[i] = rand() % 256;
		}
		for (int y = 1; y < image_map->Height-1; y++)
			for (int x = 1; x < image_map->Width - 1; x++)
			{
				if (color_map[x][y] == 0)
				{
					result->SetPixel(x-1, y-1, Color::FromArgb(0, 0, 0));
				}
				else
				{
					result->SetPixel(x-1, y-1, Color::FromArgb(R[color_parent[color_map[x][y]]], G[color_parent[color_map[x][y]]], B[color_parent[color_map[x][y]]]));
				}
			}
		pictureBox1->Image = image;
		pictureBox2->Image = result;
		index += 1;
		buffer[index] = result;
	}
	private: System::Void button16_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Bitmap^ image1 = gcnew Bitmap(pictureBox1->Image);
		Bitmap^ image2 = gcnew Bitmap(pictureBox2->Image);
		originalimage1 = image1;
		originalimage2 = image2;
		int histogram1[256] = { 0 };
		int histogram2[256] = { 0 };
		for (int y = 0; y < image1->Height; y++)
		{
			for (int x = 0; x < image1->Width; x++)
			{
				histogram1[image1->GetPixel(x, y).R] += 1;
			}
		}
		for (int y = 0; y < image2->Height; y++)
		{
			for (int x = 0; x < image2->Width; x++)
			{
				histogram2[image2->GetPixel(x, y).R] += 1;
			}
		}
		Bitmap^ result1 = gcnew Bitmap(300, 300);
		Graphics^ g1 = Graphics::FromImage(result1);
		Bitmap^ result2 = gcnew Bitmap(300, 300);
		Graphics^ g2 = Graphics::FromImage(result2);
		Pen^ pen = gcnew Pen(Brushes::ForestGreen,1);
		g1->DrawLine(pen, 20, 20, 20, 280);
		g1->DrawLine(pen, 20, 280, 280, 280);
		g2->DrawLine(pen, 20, 20, 20, 280);
		g2->DrawLine(pen, 20, 280, 280, 280);
		int max1 = 0;
		int max2 = 0;
		for (int i = 0; i < 256; i++)
		{
			if (histogram1[i] > max1) { max1 = histogram1[i]; }
			if (histogram2[i] > max2) { max2 = histogram2[i]; }
		}
		for (int i = 0; i < 256; i++)
		{
			g1->DrawLine(pen, 20 + i, 280, 20 + i, 280 - histogram1[i] * 260 / max1);
			g2->DrawLine(pen, 20 + i, 280, 20 + i, 280 - histogram2[i] * 260 / max2);
		}
		pictureBox1->Image = result1;
		pictureBox2->Image = result2;
	}
	private: System::Void button16_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		pictureBox1->Image = originalimage1;
		pictureBox2->Image = originalimage2;
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (index == 1)
		{
			buffer[index] = nullptr;
			pictureBox1->Image = buffer[0];
			pictureBox2->Image = nullptr;
			index -= 1;
		}
		else if (index >= 2)
		{
			buffer[index] = nullptr;
			pictureBox1->Image = buffer[index - 2];
			pictureBox2->Image = buffer[index - 1];
			index -= 1;
		}
	}
}; //public

}

