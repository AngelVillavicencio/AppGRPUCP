#pragma once
#include "user.h"
#include "Session.h"
namespace appgrpucpModel 
{
	using namespace System;
	using namespace System::Collections::Generic;
	public ref class workshop {

	public:
		property int id;
		property int idCreador;
		property String^ tittle;
		property String^ topic;
		property List<user^>^ listaOrganizer;
		property String^ descripcion;
		property int capacity;
		property List<user^>^ listaParticipantes;
		property List<Session^>^ listaSesiones;
		
	public:

		workshop(int id, String^ tittle, String^ topic, String^ descripcion);

	};
}

