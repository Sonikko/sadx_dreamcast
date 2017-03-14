ObjectFunc(OF_MR0, 0x00450370); // RING   
ObjectFunc(OF_MR4, 0x004D4770); // CYLINDER
ObjectFunc(OF_MR5, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR6, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR18, 0x004D4850); // WALL  
void LoadObjects_MR()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)2, 3, OF_MR0); // RING   
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}
	/*obj = LoadObject((LoadObj)3, 3, OF_MR3); // VMS
	if (obj)
	{
	ent = obj->Data1;
	ent->Position.x = 239.4137f;
	ent->Position.y = 15.10273f;
	ent->Position.z = -45.98477f;
	ent->Rotation.x = 0xFFDC;
	ent->Rotation.y = 0xC1A8;
	ent->Rotation.z = 0xFFF2;
	}*/
	obj = LoadObject((LoadObj)2, 3, OF_MR4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -59.70407f;
		ent->Position.y = 18.73046f;
		ent->Position.z = 27.76984f;
		ent->Rotation.y = 0x7B9B;
		ent->Scale.x = 12;
		ent->Scale.y = 10;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR5); // CUBE    
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -42.037f;
		ent->Position.y = 31.1112f;
		ent->Position.z = -123.4606f;
		ent->Rotation.x = 0xFFEE;
		ent->Rotation.y = 0xC24E;
		ent->Rotation.z = 0xFFF1;
		ent->Scale.x = 8;
		ent->Scale.y = 3;
		ent->Scale.z = 16;
	}
}
