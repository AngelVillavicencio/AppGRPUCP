#include "pch.h"
#include "GestorTareas.h"
using namespace appgrpucpController;
GestorTareas::GestorTareas()
{
    this->listaTareas = gcnew List<Tarea^>();
    String^ connectionString = "DATA SOURCE=grpucpDB; PASSWORD=Iamthefuture23; USER ID=System ;";
    this->conexion = gcnew OracleConnection(connectionString);
}
void GestorTareas::abrirConexionDB()
{
    
    this->conexion->Open();
    
}

void GestorTareas::cerrarConexionDB()
{
    this->conexion->Close();
}

void GestorTareas::agregarTareaDB(Tarea^ objTarea)
{
    
}

void GestorTareas::modificarTareaDB(int id, Tarea^ objTarea)
{
    
}

void GestorTareas::eliminarTareaDB(int id)
{
    
}
