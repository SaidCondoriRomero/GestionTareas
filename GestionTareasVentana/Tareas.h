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
			this->SuspendLayout();
			// 
			// Tareas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 449);
			this->Name = L"Tareas";
			this->Text = L"Tareas";
			this->Load += gcnew System::EventHandler(this, &Tareas::Tareas_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Tareas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
