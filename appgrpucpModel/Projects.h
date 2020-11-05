#pragma once
#include "Supplies.h"

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {
	public ref class Projects
	{
		property String^ Id;
		property String^ Name;
		property String^ Description;
		property DateTime^ TimeInit;
		property DateTime^ TimeEnd;
		property double Invertion;
		property List<Supplies^>^ Supply;
	};
}
