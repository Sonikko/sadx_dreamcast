#include <SADXModLoader.h>

ObjectFunc(OF0, 0x450370); // RING   
ObjectFunc(OF1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF2, 0x71CE60); // ZONE
ObjectFunc(OF3, 0x71CD50); // PALM
ObjectFunc(OF4, 0x71CBC0); // COCONUT
ObjectFunc(OF5, 0x71CA70); // FLAG
ObjectFunc(OF6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF8, 0x71C2E0); // START MARK
ObjectFunc(OF9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF10, 0x71C5F0); // BUGLE
ObjectFunc(OF11, 0x71C3D0); // SCOOP
ObjectFunc(OF12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF13, 0x71C320); // ISLET
ObjectFunc(OF14, 0x7A9C60); // HINT BOX
ObjectFunc(OF15, 0x71C180); // CHEER CHAO
ObjectFunc(OF16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF17, 0x71BEA0); // CRACKER
ObjectFunc(OF18, 0x71BBB0); // BUTTERFLY
void LoadObjects()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.62f;
		ent->Position.y = 60.06f;
		ent->Position.z = 96.41f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -553.07f;
		ent->Position.y = 62.06f;
		ent->Position.z = 88.41f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.8f;
		ent->Position.y = 61.68f;
		ent->Position.z = 117.21f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -571.19f;
		ent->Position.y = 62.06f;
		ent->Position.z = 99.27f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x900B;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.1f;
		ent->Position.y = 84.24f;
		ent->Position.z = 313.43f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 359.58f;
		ent->Position.y = 84.24f;
		ent->Position.z = 310.29f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -575.26f;
		ent->Position.y = 64.24f;
		ent->Position.z = 131.18f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 2;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 145.95f;
		ent->Position.y = 74.52f;
		ent->Position.z = 16.97f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 270.15f;
		ent->Position.y = 16.09f;
		ent->Position.z = 192.81f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 272.95f;
		ent->Position.y = 12.09f;
		ent->Position.z = 198.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 292.24f;
		ent->Position.y = 16.09f;
		ent->Position.z = 258.31f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 303.46f;
		ent->Position.y = 16.09f;
		ent->Position.z = 268.26f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.44f;
		ent->Position.y = 87.09f;
		ent->Position.z = 120.53f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -334.02f;
		ent->Position.y = 87.09f;
		ent->Position.z = 159.52f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -339.12f;
		ent->Position.y = 87.09f;
		ent->Position.z = 161.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.18f;
		ent->Position.y = 74.06f;
		ent->Position.z = 13.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 120.53f;
		ent->Position.y = 74.06f;
		ent->Position.z = -85.6f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 69.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 74.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 150.22f;
		ent->Position.y = 69.06f;
		ent->Position.z = 8.92f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 153.12f;
		ent->Position.y = 72.06f;
		ent->Position.z = 9.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -426.22f;
		ent->Position.y = 66.06f;
		ent->Position.z = -0.59f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -438.55f;
		ent->Position.y = 66.06f;
		ent->Position.z = -27.28f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.88f;
		ent->Position.y = 66.06f;
		ent->Position.z = 5.3f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.1f;
		ent->Position.y = 64.06f;
		ent->Position.z = 96.66f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -564.52f;
		ent->Position.y = 66.06f;
		ent->Position.z = 78.22f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -567.8f;
		ent->Position.y = 66.06f;
		ent->Position.z = 82;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -577.52f;
		ent->Position.y = 70.06f;
		ent->Position.z = 145.06f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.84f;
		ent->Position.y = 72.34f;
		ent->Position.z = -82.51f;
		ent->Rotation.y = 0xE66C;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.06f;
		ent->Position.y = 91.32f;
		ent->Position.z = 2.56f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 166.62f;
		ent->Position.y = 81.32f;
		ent->Position.z = 12.07f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 327;
		ent->Position.y = 93.32f;
		ent->Position.z = 279.54f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 110.78f;
		ent->Position.y = 73.24f;
		ent->Position.z = 4.63f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.01f;
		ent->Position.y = 81.24f;
		ent->Position.z = -86.08f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.55f;
		ent->Position.y = 85.24f;
		ent->Position.z = 266.41f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 335.19f;
		ent->Position.y = 85.24f;
		ent->Position.z = 273.38f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 350.48f;
		ent->Position.y = 84.24f;
		ent->Position.z = 324.19f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -447.05f;
		ent->Position.y = 67.24f;
		ent->Position.z = 4.23f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -476.47f;
		ent->Position.y = 63.24f;
		ent->Position.z = -17.07f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 2;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.26f;
		ent->Position.y = 67.24f;
		ent->Position.z = 101.4f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.2f;
		ent->Position.y = 67.24f;
		ent->Position.z = 94.82f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 241.64f;
		ent->Position.y = 77.96f;
		ent->Position.z = 324;
		ent->Rotation.y = 0x5D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.82f;
		ent->Position.y = 60.06f;
		ent->Position.z = 95.91f;
		ent->Rotation.y = 0x30D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.67f;
		ent->Position.y = 60.06f;
		ent->Position.z = 117.43f;
		ent->Rotation.y = 0x40D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.56f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.93f;
		ent->Rotation.y = 0x50D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.71f;
		ent->Position.y = 77.96f;
		ent->Position.z = 358.07f;
		ent->Rotation.y = 0x85D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.58f;
		ent->Position.y = 80.26f;
		ent->Position.z = 354.14f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 316.52f;
		ent->Position.y = 80.26f;
		ent->Position.z = 345.95f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 345.86f;
		ent->Position.y = 80.26f;
		ent->Position.z = 331.87f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -514.71f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.62f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 364.51f;
		ent->Position.y = 80.26f;
		ent->Position.z = 304.91f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 382.32f;
		ent->Position.y = 80.26f;
		ent->Position.z = 280.68f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -212.91f;
		ent->Position.y = 19.36f;
		ent->Position.z = 233.91f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -215.88f;
		ent->Position.y = 20.06f;
		ent->Position.z = 245.54f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -504.34f;
		ent->Position.y = 60.06f;
		ent->Position.z = 107.87f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -103.82f;
		ent->Position.y = 10;
		ent->Position.z = 370.34f;
		ent->Rotation.y = 0x1000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 15;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -86.57f;
		ent->Position.y = 10;
		ent->Position.z = 392.97f;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 10.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -52.01f;
		ent->Position.y = 10;
		ent->Position.z = 384.09f;
		ent->Rotation.y = 0x7000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.6f;
		ent->Scale.y = 20.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -67.99f;
		ent->Position.y = 10;
		ent->Position.z = 337.77f;
		ent->Rotation.y = 0xD000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.6f;
		ent->Scale.y = 20.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -97.47f;
		ent->Position.y = 10;
		ent->Position.z = 343.87f;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 10.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 99.18f;
		ent->Position.y = 9.43f;
		ent->Position.z = 434.54f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 136.94f;
		ent->Position.y = 9.43f;
		ent->Position.z = 430.7f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -6.47f;
		ent->Position.y = 9.32f;
		ent->Position.z = 452.66f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.09f;
		ent->Position.y = 9.32f;
		ent->Position.z = 446.52f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -45.91f;
		ent->Position.y = 9.32f;
		ent->Position.z = 456.07f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -76.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 448.95f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -90.31f;
		ent->Position.y = 10.32f;
		ent->Position.z = 197.29f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 167.08f;
		ent->Position.y = 66.32f;
		ent->Position.z = 18.05f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.69f;
		ent->Position.y = 66.32f;
		ent->Position.z = -95.93f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 281.43f;
		ent->Position.y = 9.32f;
		ent->Position.z = 205.1f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -115.33f;
		ent->Position.y = 10.32f;
		ent->Position.z = 219.45f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -117.82f;
		ent->Position.y = 9.32f;
		ent->Position.z = 421.35f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.02f;
		ent->Position.y = 9.32f;
		ent->Position.z = 395.44f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.8f;
		ent->Position.y = 10.32f;
		ent->Position.z = 244.79f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -151.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 353.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -155.19f;
		ent->Position.y = 9.32f;
		ent->Position.z = 304.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -156.55f;
		ent->Position.y = 9.32f;
		ent->Position.z = 270.97f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -355.08f;
		ent->Position.y = 81.32f;
		ent->Position.z = 162.38f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -357.57f;
		ent->Position.y = 81.32f;
		ent->Position.z = 119.57f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 56.58f;
		ent->Position.y = 6.06f;
		ent->Position.z = 519.36f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.07f;
		ent->Position.y = 6.06f;
		ent->Position.z = 491.5f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 78.39f;
		ent->Position.y = 10.06f;
		ent->Position.z = 86;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -32.34f;
		ent->Position.y = 10.06f;
		ent->Position.z = 53.35f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 251.87f;
		ent->Position.y = 22.06f;
		ent->Position.z = 369.26f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -210.18f;
		ent->Position.y = 5.06f;
		ent->Position.z = 241.57f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -433.52f;
		ent->Position.y = 60.06f;
		ent->Position.z = -25.01f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -502.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.83f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -506.86f;
		ent->Position.y = 60.06f;
		ent->Position.z = 98.34f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -427.08f;
		ent->Position.y = 60.06f;
		ent->Position.z = -3.42f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -437.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = -28.54f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -439.89f;
		ent->Position.y = 60.06f;
		ent->Position.z = -24.73f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -422.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = -0.21f;
		ent->Rotation.y = 0x8BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -323.11f;
		ent->Position.y = 82.63f;
		ent->Position.z = 127.87f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -330.92f;
		ent->Position.y = 82.63f;
		ent->Position.z = 155.05f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 93.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -562.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.22f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -568.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -265.66f;
		ent->Position.y = 82.63f;
		ent->Position.z = 223.59f;
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -321.1f;
		ent->Position.y = 82.63f;
		ent->Position.z = 125.65f;
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.94f;
		ent->Position.y = 83.03f;
		ent->Position.z = 157.57f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -501.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.69f;
		ent->Rotation.y = 0xF04C;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -503.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -507.48f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.55f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.9f;
		ent->Position.y = 83.03f;
		ent->Position.z = 155.52f;
		ent->Rotation.y = 0xF4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.91f;
		ent->Position.y = 80.44f;
		ent->Position.z = 265.07f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0x9C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.07f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.95f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.64f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.68f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xEC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	/*obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -555.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 79.23f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -557.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.18f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.71f;
		ent->Position.y = 60.68f;
		ent->Position.z = 126.16f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -554.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.63f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -565.7f;
		ent->Position.y = 60.06f;
		ent->Position.z = 109.13f;
		ent->Rotation.y = 0x8E0B;
	}*/
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 325.75f;
		ent->Position.y = 80.44f;
		ent->Position.z = 284.61f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.7f;
		ent->Position.y = 80.24f;
		ent->Position.z = 312.08f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -453.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.75f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -461.8f;
		ent->Position.y = 60.06f;
		ent->Position.z = -15.1f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -474.18f;
		ent->Position.y = 60.06f;
		ent->Position.z = -17.84f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -324.56f;
		ent->Position.y = 82.98f;
		ent->Position.z = 124.2f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -336.82f;
		ent->Position.y = 81.98f;
		ent->Position.z = 126.13f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.83f;
		ent->Position.y = 81.98f;
		ent->Position.z = 152.45f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -348.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 156.59f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.41f;
		ent->Position.y = 66.52f;
		ent->Position.z = -87.69f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 301.31f;
		ent->Position.y = 80.24f;
		ent->Position.z = 346.04f;
		ent->Rotation.y = 0x1C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 352.41f;
		ent->Position.y = 80.24f;
		ent->Position.z = 322.5f;
		ent->Rotation.y = 0x1C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -540.12f;
		ent->Position.y = 60.06f;
		ent->Position.z = 61.46f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -344.42f;
		ent->Position.y = 82.03f;
		ent->Position.z = 154.74f;
		ent->Rotation.y = 0x34B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 349.32f;
		ent->Position.y = 80.24f;
		ent->Position.z = 320.12f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 356.18f;
		ent->Position.y = 80.24f;
		ent->Position.z = 314.67f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 304.46f;
		ent->Position.y = 80.24f;
		ent->Position.z = 347.8f;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.49f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.98f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 323.16f;
		ent->Position.y = 80.24f;
		ent->Position.z = 343.05f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 347.63f;
		ent->Position.y = 80.24f;
		ent->Position.z = 323.49f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 152.16f;
		ent->Position.y = 65.33f;
		ent->Position.z = 7.23f;
		ent->Rotation.y = 0x86A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.98f;
		ent->Position.y = 80.44f;
		ent->Position.z = 306.97f;
		ent->Rotation.y = 0x8E3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -452.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 1.3f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -469.66f;
		ent->Position.y = 60.06f;
		ent->Position.z = -14.86f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.54f;
		ent->Position.y = 81.98f;
		ent->Position.z = 124.19f;
		ent->Rotation.y = 0x9DFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 149.52f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.97f;
		ent->Rotation.y = 0xABA8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -509.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 108.93f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 99.33f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -516.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.05f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.25f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -566.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 150.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.42f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.44f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.37f;
		ent->Position.y = 64.33f;
		ent->Position.z = 7.11f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 154.89f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.88f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.41f;
		ent->Position.y = 82.98f;
		ent->Position.z = 125.73f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.61f;
		ent->Position.y = 81.98f;
		ent->Position.z = 123.12f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 294.49f;
		ent->Position.y = 80.44f;
		ent->Position.z = 304.36f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 318.76f;
		ent->Position.y = 80.44f;
		ent->Position.z = 289.63f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -343.15f;
		ent->Position.y = 82.03f;
		ent->Position.z = 152.94f;
		ent->Rotation.y = 0xD4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -322.44f;
		ent->Position.y = 83.03f;
		ent->Position.z = 121.98f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -331.28f;
		ent->Position.y = 82.03f;
		ent->Position.z = 123.9f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -337.96f;
		ent->Position.y = 82.03f;
		ent->Position.z = 153.24f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -338.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.73f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.9f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.21f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -353.78f;
		ent->Position.y = 81.98f;
		ent->Position.z = 155.43f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 116.96f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.43f;
		ent->Position.y = 60.06f;
		ent->Position.z = 152.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.94f;
		ent->Position.y = 60.06f;
		ent->Position.z = 91.74f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -510.92f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.15f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -526.96f;
		ent->Position.y = 60.06f;
		ent->Position.z = 164.17f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.02f;
		ent->Position.y = 60.06f;
		ent->Position.z = 159.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -552.06f;
		ent->Position.y = 60.06f;
		ent->Position.z = 74.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -556.91f;
		ent->Position.y = 60.06f;
		ent->Position.z = 85.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 72.83f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.64f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.86f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 324.94f;
		ent->Position.y = 80.44f;
		ent->Position.z = 281.09f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 328.46f;
		ent->Position.y = 80.44f;
		ent->Position.z = 280.29f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xCC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 121.59f;
		ent->Position.y = 66.52f;
		ent->Position.z = -88.68f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x359B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 132.53f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.62f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x44A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.47f;
		ent->Position.y = 67.33f;
		ent->Position.z = -89.7f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x54A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 129.67f;
		ent->Position.y = 64.33f;
		ent->Position.z = -83.74f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 138.2f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.16f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.65f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.7f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 141.72f;
		ent->Position.y = 67.52f;
		ent->Position.z = 12.16f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 123.09f;
		ent->Position.y = 64.52f;
		ent->Position.z = 8.18f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 146.45f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.6f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 114.38f;
		ent->Position.y = 66.52f;
		ent->Position.z = 11.91f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x659B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 313.68f;
		ent->Position.y = 80.24f;
		ent->Position.z = 345.49f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 353.74f;
		ent->Position.y = 80.24f;
		ent->Position.z = 317.12f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 366.88f;
		ent->Position.y = 80.24f;
		ent->Position.z = 300.5f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 312.64f;
		ent->Position.y = 80.37f;
		ent->Position.z = 151.66f;
		ent->Scale.x = 30;
		ent->Scale.y = 0;
		ent->Scale.z = 200;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.76f;
		ent->Position.y = 60;
		ent->Position.z = 97.08f;
		ent->Scale.x = 50;
		ent->Scale.y = 0;
		ent->Scale.z = 200;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -4.34f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.65f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.28f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.9f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.11f;
		ent->Position.y = 65.34f;
		ent->Position.z = -98.31f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 35.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.83f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.6f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 68.51f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.87f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -40.98f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.23f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -41.89f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.77f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.12f;
		ent->Position.y = 65.34f;
		ent->Position.z = -99.01f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.99f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 135.93f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.46f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.47f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.22f;
		ent->Position.y = 9.32f;
		ent->Position.z = 442.37f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 172.18f;
		ent->Position.y = 9.32f;
		ent->Position.z = 422.01f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 213.56f;
		ent->Position.y = 9.32f;
		ent->Position.z = 414.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 296.23f;
		ent->Position.y = 9.32f;
		ent->Position.z = 257.22f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 240.82f;
		ent->Position.y = -0.58f;
		ent->Position.z = 195.57f;
		ent->Rotation.y = 0xF581;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 263.54f;
		ent->Position.y = -0.58f;
		ent->Position.z = 283.33f;
		ent->Rotation.y = 0xF581;
	}
	obj = LoadObject((LoadObj)2, 3, OF8); // START MARK
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.08f;
		ent->Position.y = 10.06f;
		ent->Position.z = 230.36f;
		ent->Rotation.y = 0x900;
	}
}