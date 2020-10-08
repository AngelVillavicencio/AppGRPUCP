#include "pch.h"
#include "Tarea.h"
using namespace appgrpucpModel;
Tarea::Tarea(int id, String^ descripcion, String^ estado)
{
    this->id = id;
    this->descripcion = descripcion;
    this->estado = estado;

}
