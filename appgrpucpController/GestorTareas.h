#pragma once
namespace appgrpucpController
{
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace appgrpucpModel;
	using namespace System::Data::OracleClient;
	

	public ref class GestorTareas
	{
	private:
		List<Tarea^>^ listaTareas;
		OracleConnection^ conexion;
	public:
		GestorTareas();
		void abrirConexionDB();
		void cerrarConexionDB();

		void agregarTareaDB(Tarea^ objTarea);
		void modificarTareaDB(int id, Tarea^ objTarea);
		void eliminarTareaDB(int id);

	};

    

}

