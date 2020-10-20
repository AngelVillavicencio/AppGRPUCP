#include "pch.h"
#include "user.h"
using namespace appgrpucpModel;
user::user(int id, String^ name, String^ email, String^ usuario, String^ contrasena)
{
	this->id = id;
	this->name = name;
	this->email = email;
	this->usuario = usuario;
	this->contrasena = contrasena;

}

user::user(String^ name, String^ email, String^ usuario, String^ contrasena)
{
	this->name = name;
	this->email = email;
	this->usuario = usuario;
	this->contrasena = contrasena;
}
