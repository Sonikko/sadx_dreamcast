ObjectFunc(OF_E0, 0x450370); // RING   
ObjectFunc(OF_E1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF_E2, 0x71CE60); // ZONE
ObjectFunc(OF_E3, 0x71CD50); // PALM
ObjectFunc(OF_E4, 0x71CBC0); // COCONUT
ObjectFunc(OF_E5, 0x71CA70); // FLAG
ObjectFunc(OF_E6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF_E7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF_E8, 0x71C2E0); // START MARK
ObjectFunc(OF_E9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF_E10, 0x71C5F0); // BUGLE
ObjectFunc(OF_E11, 0x71C3D0); // SCOOP
ObjectFunc(OF_E12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF_E13, 0x71C320); // ISLET
ObjectFunc(OF_E14, 0x7A9C60); // HINT BOX
ObjectFunc(OF_E15, 0x71C180); // CHEER CHAO
ObjectFunc(OF_E16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF_E17, 0x71BEA0); // CRACKER
ObjectFunc(OF_E18, 0x71BBB0); // BUTTERFLY
SETObjData setdata_e = {};

void LoadObjects_E()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.57f;
		ent->Position.y = -0.01f;
		ent->Position.z = 24.55f;
		ent->Rotation.y = 0xA000;
	}
	obj = LoadObject((LoadObj)6, 3, OF_E1); // ENTRY BUTTON
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2020.59f;
		ent->Position.z = -0.68f;
		ent->Rotation.y = 0x4000;
	}
	
	obj = LoadObject((LoadObj)2, 3, OF_E0); // RING   
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}
	
	obj = LoadObject((LoadObj)2, 3, OF_E14); // HINT BOX
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2030.57f;
		ent->Position.y = 21;
		ent->Position.z = -49.3f;
		ent->Rotation.y = 0x5F46;
		ent->Scale.x = 25;
		ent->Scale.y = 10;
		ent->Scale.z = 8;
	}
	
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.36f;
		ent->Position.y = -0.01f;
		ent->Position.z = -24.22f;
		ent->Rotation.y = 0xD000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2124.17f;
		ent->Position.y = -0.01f;
		ent->Position.z = -16.59f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2123.7f;
		ent->Position.y = -0.01f;
		ent->Position.z = 15.79f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2058.16f;
		ent->Position.y = -0.01f;
		ent->Position.z = 50.15f;
		ent->Rotation.y = 0x8FAD;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2060.85f;
		ent->Position.y = -0.01f;
		ent->Position.z = -49.82f;
		ent->Rotation.y = 0xEFAD;
	}
}
