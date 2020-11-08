#pragma once
#include "UserDB.h"
namespace appgrpucpController
{
	
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace appgrpucpModel;
	using namespace System::Data::SqlClient;
	using namespace System::IO;
	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	[Serializable]
	public ref class GestorUsuario {
	
		public:
			static UserDB^ userDB = gcnew UserDB();
			List<user^>^ listaUsuario;
			SqlConnection^ conexion;

		public:
			GestorUsuario();
			//AÑADIR USUARIO A LA LISTA
			void agregarUser(user^ objusuario);
			void openConexion();
			void cerrarConexion();

			static void adduser(user^ usuario);
		static List<user^>^ queryuser();

	};



}

