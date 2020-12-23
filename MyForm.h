#pragma once
#include<cmath>


namespace EulerMethod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private:System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		

		//Функция f(x)
		float f(float xx)
		{
			//return  exp(-(xx*xx));
			return  15*pow(xx,2);
		}

		
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->информацияToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(604, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->информацияToolStripMenuItem->Text = L"Информация";
			this->информацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(325, 241);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(251, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Метод Парабол";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Нижний предел интегрирования";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Верхний предел интегрирования";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(197, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(197, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0,001";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(197, 230);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 35;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(71, 230);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(120, 15);
			this->label27->TabIndex = 34;
			this->label27->Text = L"Количество Итераци";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(74, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(385, 90);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(197, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 36;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(197, 258);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 37;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(125, 258);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 15);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Результат";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(43, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 15);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Шаг интегрирования";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(325, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 30);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Метод правых прямоугольников";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(325, 166);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(251, 33);
			this->button3->TabIndex = 41;
			this->button3->Text = L"Метод левых прямоугольников";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(325, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(251, 30);
			this->button4->TabIndex = 42;
			this->button4->Text = L"Метод Трапеции";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(604, 311);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"NumericalIntegrator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		MessageBox::Show("Программа реализует численные методы решения уравнении." + "\r\n"
			+ "Разработчик: Хайруллин И.И." + "\r\n" +
		"Проверил: Пупков Е.А.","Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	// Метод Симпсона
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		float dx;
		float A, B, S,S1,S2;
		int i,N;
		S = 0;
		S1 = 0;
		S2 = 0;
		N = 0;
		
		//Считаем данные с textBox-ов
		A = Convert::ToDouble(textBox1->Text);
		B = Convert::ToDouble(textBox2->Text);
		dx = Convert::ToDouble(textBox3->Text);
		
		N = (B - A) / (2*dx)+1;
		
		

		for (int i = 1; i <= 2 * N - 1; i += 2){
			S1 += f(A + i * dx);
			S2 += f(A + (i + 1) * dx);
		}


		S = (dx / 3)*(f(A)+4*S1+2*S2-f(B));
		textBox4->Text = Convert::ToString(N);
		textBox5->Text = Convert::ToString(S);
		
	}

	//Метод правых прямоугольников
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Объявление переменных
	float dx;
	float A, B, S, x;
	int N;
	S = 0;
	N = 0;
	
	//Считаем данные с textBox-ов
	A = Convert::ToDouble(textBox1->Text);
	B = Convert::ToDouble(textBox2->Text);
	dx = Convert::ToDouble(textBox3->Text);
	//N = (B - A) / dx;
	x = A;
	
	while (x+dx < B) 
	{
		S += f(x) * dx;
		x += dx;
		N++;
	}

	textBox4->Text = Convert::ToString(N);
	textBox5->Text = Convert::ToString(S);
}
	   //Метод левых прямоугольников
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//Объявление переменных
	float dx;
	float A, B, S, x;
	int N;
	S = 0;
	N = 0;

	//Считаем данные с textBox-ов
	A = Convert::ToDouble(textBox1->Text);
	B = Convert::ToDouble(textBox2->Text);
	dx = Convert::ToDouble(textBox3->Text);
	x = A;

	while (x + dx < B)
	{
		S += f(x+dx) * dx;
		x += dx;
		N++;
	}

	textBox4->Text = Convert::ToString(N);
	textBox5->Text = Convert::ToString(S);
}
	//Метод трапеции
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Объявление переменных
	float dx;
	float A, B, S, x;
	int N;
	S = 0;
	N = 0;

	//Считаем данные с textBox-ов
	A = Convert::ToDouble(textBox1->Text);
	B = Convert::ToDouble(textBox2->Text);
	dx = Convert::ToDouble(textBox3->Text);
	x = A;
	while (x+dx < B)
	{
		S += (dx/2)*(f(x)+f(x+dx));
		x += dx;
		N++;
	}

	textBox4->Text = Convert::ToString(N);
	textBox5->Text = Convert::ToString(S);


}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar == '.') e->KeyChar = ',';

}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar == '.') e->KeyChar = ',';

}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar == '.') e->KeyChar = ',';

}
};
}
