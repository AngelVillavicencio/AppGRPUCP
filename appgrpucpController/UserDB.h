#pragma once

namespace appgrpucpController
{

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace appgrpucpModel;
	using namespace System::Data::SqlClient; 
	using namespace System::IO;
	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;


	[Serializable]
	public ref class UserDB {
		public:
			List<user^>^ Userlist = gcnew List<user^>();
			void PersistToBinaryFile();
			void LoadFromBinaryFile();
	};
}
