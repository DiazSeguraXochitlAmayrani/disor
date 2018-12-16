#pragma once

#include<string.h>

namespace Cesar2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CesarForm
	/// </summary>

	char alf[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n',164,'o','p','q','r','s','t','u','v','w','x','y','z'};
	public ref class CesarForm : public System::Windows::Forms::Form
	{
	public:
		CesarForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~CesarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  desplaza1;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  ValorAgrup;

	private: System::Windows::Forms::Label^  label9;



	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->desplaza1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->ValorAgrup = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->desplaza1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ValorAgrup))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(46, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Texto:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(521, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 30);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cifrado César";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(123, 54);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(889, 49);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &CesarForm::textBox1_KeyUp);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->desplaza1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(32, 120);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(325, 347);
			this->panel1->TabIndex = 3;
			// 
			// desplaza1
			// 
			this->desplaza1->Location = System::Drawing::Point(138, 60);
			this->desplaza1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, System::Int32::MinValue});
			this->desplaza1->Name = L"desplaza1";
			this->desplaza1->Size = System::Drawing::Size(120, 20);
			this->desplaza1->TabIndex = 3;
			this->desplaza1->ValueChanged += gcnew System::EventHandler(this, &CesarForm::desplaza1_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 62);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 18);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Desplazamiento:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(17, 92);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 186);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &CesarForm::textBox2_KeyUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(75, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"César";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(373, 120);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(325, 347);
			this->panel2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(20, 92);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 186);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &CesarForm::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(86, 17);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 18);
			this->label5->TabIndex = 2;
			this->label5->Text = L"T. Inversa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Silver;
			this->panel3->Controls->Add(this->ValorAgrup);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Location = System::Drawing::Point(716, 120);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(325, 347);
			this->panel3->TabIndex = 5;
			// 
			// ValorAgrup
			// 
			this->ValorAgrup->Location = System::Drawing::Point(89, 58);
			this->ValorAgrup->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100, 0, 0, System::Int32::MinValue});
			this->ValorAgrup->Name = L"ValorAgrup";
			this->ValorAgrup->Size = System::Drawing::Size(120, 20);
			this->ValorAgrup->TabIndex = 4;
			this->ValorAgrup->ValueChanged += gcnew System::EventHandler(this, &CesarForm::ValorAgrup_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(17, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 18);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Grupo:";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(20, 92);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 186);
			this->textBox4->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(86, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 18);
			this->label7->TabIndex = 2;
			this->label7->Text = L"T. Inversa Agrupada";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(86, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 0;
			// 
			// CesarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1061, 504);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CesarForm";
			this->Text = L"CesarForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->desplaza1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ValorAgrup))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
					cesar();
		 }

private:System::Void  cesar (){
				 String ^ in="";          
			 String ^ desplaza =  desplaza1->Value.ToString();
			int desplazamiento = System::Convert::ToInt16(desplaza);

			if(desplazamiento>=0){
			
			for(int i = 0; i < textBox1 -> Text -> Length; i++){
                if (buscar(textBox1 -> Text[i])  ) {
			        for(int j = 0; j < 27; j++){
                        if (textBox1 -> Text[i] == alf[j]) {
					        int aux = (j + desplazamiento) % 27;
	                 in += System::Convert::ToChar(alf[aux]);	  // checar  
				        }  
			        }	
				} else{  in+=textBox1 -> Text[i];}			      				
	        }
			}
				    textBox2 -> Text = in;
					textBox3->Text=inversaCadena(textBox1->Text);
					textBox4->Text=inversaAgrupada(textBox1->Text);
			
		}

 private:System::Boolean buscar(char caracter){
				for(int i=0;i<sizeof (alf);i++){
					if (alf[i]==caracter){
						return true;}
				}
					return false;
			}

private:System::String^ inversaCadena(String ^ palabra){
					String ^ inversa="";
			for(int i=palabra->Length-1;i>=0;i--){
				inversa+=palabra[i];  // System::Convert::ToChar(palabra[i]);
			}
			return inversa;
		}	

private:System::String^ inversaAgrupada(String ^ palabraNormal){
						String ^ a,^b;
			int Valoragrupa = System::Convert::ToInt16(ValorAgrup->Value.ToString());
			if(Valoragrupa==0){return palabraNormal;}
				for(int i=0;i<palabraNormal->Length;i++){
					a+=palabraNormal[i];
					if(a->Length % Valoragrupa==0){
						b+=inversaCadena(a);
						a="";
					}
				}
			
				return b+a;
			
		}
		

		

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void desplaza1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 cesar();
		 }
private: System::Void ValorAgrup_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 textBox4->Text= inversaAgrupada(textBox1->Text);
		 }
private: System::Void textBox2_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			  String ^ in="";          
			 String ^ desplaza =  desplaza1->Value.ToString();
			int desplazamiento = System::Convert::ToInt16(desplaza);

			if(desplazamiento>=0){
			
			for(int i = 0; i < textBox2 -> Text -> Length; i++){
                if (buscar(textBox2 -> Text[i])  ) {
			        for(int j = 0; j < 27; j++){
                        if (textBox2 -> Text[i] == alf[j]) {
					        int aux = (j - desplazamiento) % 27;
	                 in += System::Convert::ToChar(alf[aux]);	  // checar  
				        }  
			        }	
				} else{  in+=textBox2 -> Text[i];}			      				
	        }
			}
				    textBox1 -> Text = in;
		 }
};
}
