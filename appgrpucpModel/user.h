#pragma once
namespace appgrpucpModel 
{
	using namespace System;
	public ref class user 
	{
	public:
		int id;
		bool admin;
		int codigoU;
		String^ firstName;
		String^ lastName;
		String^ genre;
		String^ email;
		String^ phoneNumber;
		String^ emailPucp;
		//falta definir photo
		String^ career;
		String^ cargo;
		String^ Entrydate;
		String^ BirthDate;
		String^ userName;
		String^ contrasena;
		/*contacto de emergencia*/
		String^ contactEmergencyName;
		String^ contactEmergencyRelation;
		String^ contactEmergencyNumber;
		
	public:
		/*constructores*/
		user(int id, String^ name, String^ email, String^ usuario, String^ contrasena); // mostrar
		user(String^ name, String^ email, String^ usuario, String^ contrasena);// create
	};


}