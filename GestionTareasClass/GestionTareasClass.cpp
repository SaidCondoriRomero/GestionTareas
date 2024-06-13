#include "pch.h"
#include "GestionTareasClass.h"

using namespace GestionTareasClass;

Gestion::Gestion() {
	tareas = gcnew List<Tarea^>();
}

void Gestion::AgregarTarea(Tarea^ tarea) {
	tareas->Add(tarea);
}

void Gestion::EliminarTarea(int tareaID) {
	for (int i = 0; i < tareas->Count; i++) {
		if (tareas[i]->ID == tareaID) {
			tareas->RemoveAt(i);
			break;
		}
	}
}

Tarea^ Gestion::BuscarTarea(int tareaID) {
	for each (Tarea ^ tarea in tareas) {
		if (tarea->ID == tareaID) {
			return tarea;
		}
	}
	return nullptr;
}

List<Tarea^>^ Gestion::ObtenerTodasLasTareas() {
	return tareas;
}
