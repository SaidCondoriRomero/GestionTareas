#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace GestionTareasClass {
	public ref class Tarea {
	public:
		int ID;
		String^ Nombre;
		String^ Descripcion;
		DateTime FechaInicio;
		DateTime FechaTermino;
		String^ Estado;
		List<Tarea^>^ Subtareas;

		Tarea() {
			Subtareas = gcnew List<Tarea^>();
		}

		void AgregarSubtarea(Tarea^ subtarea) {
			Subtareas->Add(subtarea);
		}

		void EliminarSubtarea(int subtareaID) {
			for (int i = 0; i < Subtareas->Count; i++) {
				if (Subtareas[i]->ID == subtareaID) {
					Subtareas->RemoveAt(i);
					break;
				}
			}
		}

		Tarea^ BuscarSubtarea(int subtareaID) {
			for each (Tarea ^ subtarea in Subtareas) {
				if (subtarea->ID == subtareaID) {
					return subtarea;
				}
			}
			return nullptr;
		}
	};

	public ref class Gestion
	{
	public:
		Gestion();

		void AgregarTarea(Tarea^ tarea);
		void EliminarTarea(int tareaID);
		Tarea^ BuscarTarea(int tareaID);
		List<Tarea^>^ ObtenerTodasLasTareas();

	private:
		List<Tarea^>^ tareas;
	};
}
