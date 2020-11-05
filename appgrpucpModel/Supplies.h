#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace appgrpucpModel {
	public ref class Supplies
	{
		property String^ Name;
		property String^ Description;
		property DateTime^ Link_Date_Update;
		property String^ WebPage;
		property double Cost;
	};
}
