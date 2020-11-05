#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {
	public ref class Session
	{
		property long Id;
		property long Principal_Id;
		property DateTime^ Dates;
		property float Duration;
		property List<long>^ Assistant_Advisers;
		property String^ Observations;
		property List<String^>^ Requirements;

	};
}
