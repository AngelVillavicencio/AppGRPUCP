#pragma once
namespace appgrpucpModel 
{
	using namespace System;

	[Serializable]
	public ref class user 
	{
	public:
		property int id;
		property bool admin;
		property int codigoU;
		property String^ firstName;
		property String^ lastName;
		property String^ genre;
		property String^ email;
		property String^ phoneNumber;
		property String^ emailPucp;
		property String^ career;
		property String^ charge;
		//falta definir photo
		property String^ Entrydate;
		property String^ BirthDate;
		property String^ userName;
		property String^ password;
		property String^ contactEmergencyName;  /*contacto de emergencia*/
		property String^ contactEmergencyRelation;
		property String^ contactEmergencyNumber;
		
	public:
		/*constructores*/
		user();
		user(int id, String^ name, String^ email, String^ usuario, String^ password); // mostrar
		user(String^ name, String^ email, String^ usuario, String^ password);// create
	};


}