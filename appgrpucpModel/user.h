#pragma once
namespace appgrpucpModel 
{
	using namespace System;
	public ref class user 
	{
	public:
		int id;
		String^ name;
		String^ email;
		String^ usuario;
		String^ contrasena;
		
	public:
		user(int id, String^ name, String^ email, String^ usuario, String^ contrasena); // mostrar
		user(String^ name, String^ email, String^ usuario, String^ contrasena);// create
	};


}