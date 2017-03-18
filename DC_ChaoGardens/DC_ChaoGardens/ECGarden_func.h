#include <SADXModLoader.h>

ObjectFunc(EC_OF0, 0x00450370); // RING   
ObjectFunc(EC_OF4, 0x004D4770); // CYLINDER
ObjectFunc(EC_OF5, 0x004D47E0); // CUBE    
ObjectFunc(EC_OF6, 0x004D4700); // SPHERE  
ObjectFunc(EC_OF17, 0x004D4850); // WALL  
SETObjData setdata = {};

void LoadObjects_EC()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata.Distance = 900000.0f;
	obj = LoadObject((LoadObj)2, 5, EC_OF0); // RING   
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.67f;
		ent->Position.y = 127.82f;
		ent->Position.z = -71.72f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 390.2f;
		ent->Position.y = 127.82f;
		ent->Position.z = -7.15f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -37.11f;
		ent->Position.y = 127.82f;
		ent->Position.z = 317.58f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x8000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -95.87f;
		ent->Position.y = 131.76f;
		ent->Position.z = -412.96f;
		ent->Rotation.x = 0xF998;
		ent->Rotation.z = 0x39;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 346.28f;
		ent->Position.y = 143.29f;
		ent->Position.z = -368.84f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -739.39f;
		ent->Position.y = 173.29f;
		ent->Position.z = 582.25f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -310.78f;
		ent->Position.y = 123.49f;
		ent->Position.z = 307.03f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x6000;
		ent->Rotation.z = 0xD;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 282.64f;
		ent->Position.y = 125.94f;
		ent->Position.z = 195.99f;
		ent->Rotation.x = 3;
		ent->Rotation.y = 0xA000;
		ent->Rotation.z = 0xFFFB;
		ent->Scale.x = 200;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 7.41f;
		ent->Position.y = 37.28f;
		ent->Position.z = -95.28f;
		ent->Rotation.x = 0xFDB2;
		ent->Rotation.y = 0xC84B;
		ent->Rotation.z = 0xF2A3;
		ent->Scale.x = 0.2f;
		ent->Scale.y = 11;
		ent->Scale.z = 16;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4.5f;
		ent->Position.y = -17.51f;
		ent->Position.z = 291.97f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 6.21f;
		ent->Position.y = -2.51f;
		ent->Position.z = 271.61f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 28;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 12.55f;
		ent->Position.y = -17.51f;
		ent->Position.z = 254.17f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.08f;
		ent->Position.y = -17.51f;
		ent->Position.z = 263.49f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.72f;
		ent->Position.y = -17.51f;
		ent->Position.z = 282.83f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.31f;
		ent->Position.y = -14.51f;
		ent->Position.z = 277.56f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -26.82f;
		ent->Position.y = -34.51f;
		ent->Position.z = 264.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -16;
		ent->Position.y = -45.51f;
		ent->Position.z = 284.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 303.39f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 28.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 301.81f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 41.81f;
		ent->Position.y = -45.51f;
		ent->Position.z = 287.06f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.55f;
		ent->Position.y = -45.51f;
		ent->Position.z = 257.45f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.11f;
		ent->Position.y = -10.44f;
		ent->Position.z = 246.73f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -2.56f;
		ent->Position.y = 15.56f;
		ent->Position.z = 252.81f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.66f;
		ent->Position.y = 1.56f;
		ent->Position.z = 244.57f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.54f;
		ent->Position.y = -18.44f;
		ent->Position.z = 237.08f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -1.48f;
		ent->Position.y = -39.44f;
		ent->Position.z = 236.55f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -23.27f;
		ent->Position.y = -39.44f;
		ent->Position.z = 242.14f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.23f;
		ent->Position.y = 5.56f;
		ent->Position.z = 270.19f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 4;
		ent->Scale.y = 20;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -61.47f;
		ent->Position.y = 68.49f;
		ent->Position.z = 7.38f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 35;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.24f;
		ent->Position.y = -10.51f;
		ent->Position.z = 291.29f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 70;
		ent->Scale.y = 53;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 233.22f;
		ent->Position.y = -25.39f;
		ent->Position.z = -188.52f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 55;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 288.51f;
		ent->Position.y = -4.39f;
		ent->Position.z = -211.6f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 45;
		ent->Scale.y = 53;
	}
}
