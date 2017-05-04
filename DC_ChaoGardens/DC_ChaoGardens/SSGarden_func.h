ObjectFunc(OF_SS0, 0x00450370); // RING   
ObjectFunc(OF_SS1, 0x007212A0); // TREE   
ObjectFunc(OF_SS2, 0xC918E36); // FLOWER 
ObjectFunc(OF_SS3, 0xC919760); // VMS 
ObjectFunc(OF_SS4, 0x004D4770); // CYLINDER
ObjectFunc(OF_SS5, 0x004D47E0); // CUBE    
ObjectFunc(OF_SS6, 0x004D4700); // SPHERE 
ObjectFunc(OF_SS7, 0xC918FC8); // WARP EC
ObjectFunc(OF_SS8, 0xC919090); // WARP MR
ObjectFunc(OF_SS9, 0x00639380); //  O AR_ELE
ObjectFunc(OF_SS10, 0xCB80760); //  O AR_FUN
ObjectFunc(OF_SS11, 0x0072AB50); //  O AR_DOOR
ObjectFunc(OF_SS12, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS13, 0xC9089B0); // GD GRDUND
ObjectFunc(OF_SS14, 0xC9089E2); // GD_WATER
ObjectFunc(OF_SS15, 0xC908A14); // GD ROAD
ObjectFunc(OF_SS16, 0xC908A46); // GD FLY
ObjectFunc(OF_SS17, 0xC908A78); // GD CLIFF
ObjectFunc(OF_SS18, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS19, 0xC902DD2); // CAM COLLI
ObjectFunc(OF_SS20, 0x004D4850); // WALL  
ObjectFunc(OF_SS21, 0x007A9C60); // HINT BOX
void LoadObjects_SS()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
	ent = obj->Data1;
	ent->Position.x = 183.03f;
	ent->Position.y = 8.56f;
	ent->Position.z = -133.44f;
	ent->Rotation.x = 0;
	ent->Rotation.y = 0xD7B8;
	ent->Rotation.z = 0;
	ent->Scale.x = -7.2f;
	ent->Scale.y = 5.9f;
	ent->Scale.z = -3.1f;
	}
	obj = LoadObject((LoadObj)6, 3, OF_SS9); //  O AR_ELE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -0.03f;
		ent->Position.y = 0;
		ent->Position.z = 240.02f;
		ent->Rotation.y = 0x8000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -198.53f;
		ent->Position.y = 28.2f;
		ent->Position.z = 143.8f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 41.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -200;
		ent->Position.y = 22.4f;
		ent->Position.z = -154.68f;
		ent->Rotation.y = 0xA79D;
		ent->Scale.y = 63;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 140.1f;
		ent->Position.y = 27.57f;
		ent->Position.z = -115.15f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 9;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 159.97f;
		ent->Position.y = 25.57f;
		ent->Position.z = -94.95f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 190.26f;
		ent->Position.y = 25.57f;
		ent->Position.z = -82.9f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 127.7f;
		ent->Position.y = 28;
		ent->Position.z = -143.78f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.99f;
		ent->Position.y = 19.57f;
		ent->Position.z = -68;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.14f;
		ent->Position.y = 24;
		ent->Position.z = -141.14f;
		ent->Rotation.y = 0xD129;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -188.91f;
		ent->Position.y = 19.1f;
		ent->Position.z = 92.19f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -161.85f;
		ent->Position.y = 19.1f;
		ent->Position.z = 107.06f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -146.93f;
		ent->Position.y = 19.1f;
		ent->Position.z = 134.07f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30.02f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.73f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.4f;
		ent->Position.y = 1.4f;
		ent->Position.z = -104.45f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -6.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -113.24f;
		ent->Position.y = 19.57f;
		ent->Position.z = -104.18f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -187.18f;
		ent->Position.y = 20;
		ent->Position.z = -103.74f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30;
		ent->Position.y = 17.89f;
		ent->Position.z = -155.12f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 199.05f;
		ent->Position.y = 37.55f;
		ent->Position.z = -154.36f;
		ent->Rotation.y = 0x1F94;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 30.4f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS21); // HINT BOX
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -82.32f;
		ent->Position.y = 20;
		ent->Position.z = -46.21f;
		ent->Rotation.y = 0x63ED;
		ent->Scale.x = 40;
		ent->Scale.y = 10;
		ent->Scale.z = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 197.89f;
		ent->Position.y = 32.56f;
		ent->Position.z = 141.83f;
		ent->Rotation.y = 0xD9A;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 40.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.39f;
		ent->Position.y = -1.6f;
		ent->Position.z = -104.29f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -2.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.68f;
		ent->Position.y = 17.89f;
		ent->Position.z = -156.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3.33f;
		ent->Position.y = -11;
		ent->Position.z = 94.38f;
		ent->Rotation.y = 0xC3ED;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -174.97f;
		ent->Position.y = -6;
		ent->Position.z = 126.1f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 1;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 105.04f;
		ent->Position.y = -6;
		ent->Position.z = 48.67f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.04f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.99f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 10.14f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -9.86f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
}
