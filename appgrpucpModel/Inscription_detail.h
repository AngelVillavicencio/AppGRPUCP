#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {

	public ref class Inscription_detail
	{
	public:
		property long Id;
		property long WorkShopId;
		property char Status;
		property bool Done;
		property String^ Observations;
		//property List<User^>^ Attendances;
	};

}




