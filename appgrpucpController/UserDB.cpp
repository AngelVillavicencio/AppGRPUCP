#include "pch.h"
#include "UserDB.h"

void appgrpucpController::UserDB::PersistToBinaryFile()
{
	Stream^ stream = File::Open("users.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, Userlist);
	stream->Close();
}

void appgrpucpController::UserDB::LoadFromBinaryFile()
{
	if (File::Exists("users.bin")) {
		Stream^ stream = File::Open("users.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		Userlist=(List<user^>^)bFormatter->Deserialize(stream);
		stream->Close();
	}
}
