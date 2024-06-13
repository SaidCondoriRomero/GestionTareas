#pragma once
using namespace GestionTareasClass;

namespace GestionTareasVentana {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Tareas
	/// </summary>
	public ref class Tareas : public System::Windows::Forms::Form
	{
	public:
		Tareas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Tareas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::ListBox^ listTareas;
	private: System::Windows::Forms::ListBox^ listSubtarea;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->listTareas = (gcnew System::Windows::Forms::ListBox());
			this->listSubtarea = (gcnew System::Windows::Forms::ListBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripcion";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(21, 66);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(440, 284);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"TAREAS";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 238);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Tareas::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(75, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Tareas::button1_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(146, 190);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(245, 22);
			this->dateTimePicker2->TabIndex = 16;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(146, 162);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(245, 22);
			this->dateTimePicker1->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Pendiente", L"En progreso", L"Completado" });
			this->comboBox1->Location = System::Drawing::Point(146, 130);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Fecha finalizacion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Estado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 160);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Fecha inicio";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(146, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(146, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 13;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(507, 66);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(440, 284);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"SUBTAREAS";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(312, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Agregar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Tareas::button5_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(114, 238);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Agregar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Tareas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(222, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Tareas::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(129, 187);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(129, 145);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(129, 96);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(141, 54);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 190);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 16);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Descripcion";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 151);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Subtarea";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Nombre";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 16);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Nombre Tarea";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(894, 377);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Mostar Tareas";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Tareas::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(894, 524);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 23;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Tareas::button7_Click);
			// 
			// listTareas
			// 
			this->listTareas->FormattingEnabled = true;
			this->listTareas->ItemHeight = 16;
			this->listTareas->Location = System::Drawing::Point(21, 367);
			this->listTareas->Name = L"listTareas";
			this->listTareas->Size = System::Drawing::Size(342, 180);
			this->listTareas->TabIndex = 18;
			// 
			// listSubtarea
			// 
			this->listSubtarea->FormattingEnabled = true;
			this->listSubtarea->ItemHeight = 16;
			this->listSubtarea->Location = System::Drawing::Point(507, 367);
			this->listSubtarea->Name = L"listSubtarea";
			this->listSubtarea->Size = System::Drawing::Size(342, 180);
			this->listSubtarea->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(896, 425);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 16);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Nombre Tarea:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(894, 470);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(354, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(274, 32);
			this->label12->TabIndex = 26;
			this->label12->Text = L"GESTION TAREAS";
			// 
			// Tareas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1033, 604);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listTareas);
			this->Controls->Add(this->listSubtarea);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Tareas";
			this->Text = L"Tareas";
			this->Load += gcnew System::EventHandler(this, &Tareas::Tareas_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Tareas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

// Agregar Tarea
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Tarea^ nuevaTarea = gcnew Tarea();
    //nuevaTarea->ID = // asignar un ID único;
    nuevaTarea->Nombre = textBox1->Text;
    nuevaTarea->Descripcion = textBox2->Text;
    nuevaTarea->FechaInicio = dateTimePicker1->Value;
    nuevaTarea->FechaTermino = dateTimePicker2->Value;
    nuevaTarea->Estado = comboBox1->SelectedItem->ToString();
    // Agregar la tarea a la gestión de tareas
    Gestion^ gestion = gcnew Gestion();
    gestion->AgregarTarea(nuevaTarea);
    // Actualizar la lista de tareas en la interfaz de usuario
}

// Eliminar Tarea
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
   
    // Actualizar la lista de tareas en la interfaz de usuario
}

// Agregar Subtarea
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    // Similar a agregar tarea, pero agregando la subtarea a una tarea específica
}

// Eliminar Subtarea
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    // Similar a eliminar tarea, pero eliminando la subtarea de una tarea específica
}

// Actualizar Tarea
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    // Obtener los datos actualizados de la interfaz de usuario
    // Buscar la tarea por ID y actualizar sus datos
}

// Mostrar Detalles de Tarea
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    // Mostrar los detalles de la tarea seleccionada en la interfaz de usuario
}

// Mostrar Detalles de Subtarea
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    // Mostrar los detalles de la subtarea seleccionada en la interfaz de usuario
}

};
}
