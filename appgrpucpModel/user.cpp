#include "pch.h"
#include "user.h"
using namespace appgrpucpModel;
user::user(int id, String^ name, String^ email, String^ usuario, String^ contrasena)
{
	this->id = id;
	this->firstName = name;
	this->email = email;
	this->userName = usuario;
	this->contrasena = contrasena;

}

user::user(String^ name, String^ email, String^ usuario, String^ contrasena)
{
	this->firstName = name;
	this->email = email;
	this->userName = usuario;
	this->contrasena = contrasena;
}
