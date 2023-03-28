////////////////////////////////////////////////////////////////////////////////
// Filename: cube_modelclass.cpp
////////////////////////////////////////////////////////////////////////////////
#include "cube_modelclass.h"


CubeModelClass::CubeModelClass():IndexModelClass()
{
}


CubeModelClass::CubeModelClass(const CubeModelClass& other)
{
}


CubeModelClass::~CubeModelClass()
{
}


bool CubeModelClass::InitializeBuffers(ID3D11Device* device)
{
	HRESULT result;
//
// Process the vertex buffer
//
	VertexType* vertices;
	D3D11_BUFFER_DESC vertexBufferDesc;
    D3D11_SUBRESOURCE_DATA vertexData;

	// *****************************A primitive house***************************************
	// Set the number of vertices in the vertex array.
	int vCount = 180;
	SetVertexCount(vCount);

	// Create the vertex array.
	vertices = new VertexType[vCount];
	if(!vertices)
	{
		return false;
	}

	// Load the vertex array with data.
	//raudona
	vertices[0].position = D3DXVECTOR3(-0.7f, -0.7f, -0.5f);  
	vertices[0].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[1].position = D3DXVECTOR3(-0.7f,  1.2f, -0.5f);  
	vertices[1].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[2].position = D3DXVECTOR3(0.7f, -0.7f, -0.5f);  
	vertices[2].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[3].position = D3DXVECTOR3(0.7f,  1.2f, -0.5f);  
	vertices[3].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	//geltona
	vertices[4].position = D3DXVECTOR3(0.7f, -0.7f, -0.5f);  
	vertices[4].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[5].position = D3DXVECTOR3(0.7f,  1.2f, -0.5f);  
	vertices[5].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[6].position = D3DXVECTOR3(0.7f, -0.7f,  0.5f);  
	vertices[6].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[7].position = D3DXVECTOR3(0.7f,  0.9f,  0.5f);  
	vertices[7].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	//zydra
	vertices[8].position = D3DXVECTOR3(0.7f, -0.7f,  0.5f);  
	vertices[8].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[9].position = D3DXVECTOR3(0.7f,  0.9f,  0.5f);  
	vertices[9].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[10].position = D3DXVECTOR3(-0.7f, -0.7f,  0.5f);  
	vertices[10].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[11].position = D3DXVECTOR3(-0.7f,  0.9f,  0.5f);  
	vertices[11].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	//melyna
	vertices[12].position = D3DXVECTOR3(-0.7f, -0.7f,  0.5f);  
	vertices[12].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[13].position = D3DXVECTOR3(-0.7f,  0.9f,  0.5f);  
	vertices[13].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[14].position = D3DXVECTOR3(-0.7f, -0.7f, -0.5f);  
	vertices[14].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[15].position = D3DXVECTOR3(-0.7f,  1.2f, -0.5f);  
	vertices[15].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	//juoda
	vertices[16].position = D3DXVECTOR3(-0.7f,  1.2f, -0.5f);  
	vertices[16].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[17].position = D3DXVECTOR3(-0.7f,  0.9f,  0.5f);  
	vertices[17].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[18].position = D3DXVECTOR3(0.7f,  1.2f, -0.5f);  
	vertices[18].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[19].position = D3DXVECTOR3(0.7f,  0.9f,  0.5f);  
	vertices[19].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	//ruzava
 	vertices[20].position = D3DXVECTOR3(0.7f, -0.7f, -0.5f);  
	vertices[20].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[21].position = D3DXVECTOR3(0.7f, -0.7f,  0.5f);  
	vertices[21].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[22].position = D3DXVECTOR3(-0.7f, -0.7f, -0.5f);  
	vertices[22].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[23].position = D3DXVECTOR3(-0.7f, -0.7f,  0.5f);  
	vertices[23].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//stogas - apatinis 
	vertices[24].position = D3DXVECTOR3(0.8f, 1.23f, -0.6f);
	vertices[24].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[25].position = D3DXVECTOR3(0.8f, 0.88f, 0.6f);
	vertices[25].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[26].position = D3DXVECTOR3(-0.8f, 1.23f, -0.6f);
	vertices[26].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[27].position = D3DXVECTOR3(-0.8f, 0.88f, 0.6f);
	vertices[27].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);

	//stogo sienele - raudona 

	vertices[28].position = D3DXVECTOR3(0.8f, 1.4f, -0.6f);
	vertices[28].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[29].position = D3DXVECTOR3(0.8f, 1.23f, -0.6f);
	vertices[29].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[30].position = D3DXVECTOR3(-0.8f, 1.4f, -0.6f);
	vertices[30].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[31].position = D3DXVECTOR3(-0.8f, 1.23f, -0.6f);
	vertices[31].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	//stogo sienele - geltona

	vertices[32].position = D3DXVECTOR3(0.8f, 1.4f, -0.6f);
	vertices[32].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[33].position = D3DXVECTOR3(0.8f, 1.05f, 0.6f);
	vertices[33].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[34].position = D3DXVECTOR3(0.8f, 1.23f, -0.6f);
	vertices[34].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[35].position = D3DXVECTOR3(0.8f, 0.88f, 0.6f);
	vertices[35].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);

	//stogo sienele - zydra

	vertices[36].position = D3DXVECTOR3(-0.8f, 1.05f, 0.6f);
	vertices[36].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[37].position = D3DXVECTOR3(-0.8f, 0.88f, 0.6f);
	vertices[37].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[38].position = D3DXVECTOR3(0.8f, 1.05f, 0.6f);
	vertices[38].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);
	vertices[39].position = D3DXVECTOR3(0.8f, 0.88f, 0.6f);
	vertices[39].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 1.0f);

	// stogo sienele - melyna
	
	vertices[40].position = D3DXVECTOR3(-0.8f, 0.88f, 0.6f);
	vertices[40].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[41].position = D3DXVECTOR3(-0.8f, 1.05f, 0.6f);
	vertices[41].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[42].position = D3DXVECTOR3(-0.8f, 1.23f, -0.6f);
	vertices[42].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[43].position = D3DXVECTOR3(-0.8f, 1.4f, -0.6f);
	vertices[43].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);

	//stogo virsus

	vertices[44].position = D3DXVECTOR3(-0.8f, 1.4f, -0.6f);
	vertices[44].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[45].position = D3DXVECTOR3(-0.8f, 1.05f, 0.6f);
	vertices[45].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[46].position = D3DXVECTOR3(0.8f, 1.4f, -0.6f);
	vertices[46].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[47].position = D3DXVECTOR3(0.8f, 1.05f, 0.6f);
	vertices[47].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);

	//desiniojo namo priekis - melynas

	vertices[48].position = D3DXVECTOR3(-0.4f, -0.7f, -0.5f);
	vertices[48].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[49].position = D3DXVECTOR3(-0.4f, 0.88f, -0.5f);
	vertices[49].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[50].position = D3DXVECTOR3(-0.4f, -0.7f, -2.0f);
	vertices[50].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[51].position = D3DXVECTOR3(-0.4f, 0.5f, -2.0f);
	vertices[51].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);

	//desiniojo namo raudona siena

	vertices[52].position = D3DXVECTOR3(-0.4f, -0.7f, -2.0f);
	vertices[52].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[53].position = D3DXVECTOR3(-0.4f, 0.5f, -2.0f);
	vertices[53].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[54].position = D3DXVECTOR3(0.7f, -0.7f, -2.0f);
	vertices[54].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[55].position = D3DXVECTOR3(0.7f, 0.5f, -2.0f);
	vertices[55].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	//desiniojo namo galas - geltonas

	vertices[56].position = D3DXVECTOR3(0.7f, -0.7f, -2.0f);
	vertices[56].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[57].position = D3DXVECTOR3(0.7f, 0.5f, -2.0f);
	vertices[57].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[58].position = D3DXVECTOR3(0.7f, -0.7f, -0.5f);
	vertices[58].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[59].position = D3DXVECTOR3(0.7f, 0.88f, -0.5f);
	vertices[59].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);

	//grindys - ruzavos

	vertices[60].position = D3DXVECTOR3(0.7f, -0.7f, -2.0f);
	vertices[60].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[61].position = D3DXVECTOR3(0.7f, -0.7f, -0.5f);
	vertices[61].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[62].position = D3DXVECTOR3(-0.4f, -0.7f, -2.0f);
	vertices[62].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[63].position = D3DXVECTOR3(-0.4f, -0.7f, -0.5f);
	vertices[63].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//stogas - apatinis desiniojo

	vertices[64].position = D3DXVECTOR3(0.8f, 0.48f, -2.1f);
	vertices[64].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[65].position = D3DXVECTOR3(0.8f, 0.88f, -0.5f);
	vertices[65].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[66].position = D3DXVECTOR3(-0.5f, 0.48f, -2.1f);
	vertices[66].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[67].position = D3DXVECTOR3(-0.5f, 0.88f, -0.5f);
	vertices[67].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);

	//stogo sienele - melyna

	vertices[68].position = D3DXVECTOR3(-0.5f, 0.88f, -0.5f);
	vertices[68].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[69].position = D3DXVECTOR3(-0.5f, 1.05f, -0.5f);
	vertices[69].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[70].position = D3DXVECTOR3(-0.5f, 0.48f, -2.1f);
	vertices[70].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[71].position = D3DXVECTOR3(-0.5f, 0.65f, -2.1f);
	vertices[71].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);

	//stogo sienele - raudona

	vertices[72].position = D3DXVECTOR3(-0.5f, 0.48f, -2.1f);
	vertices[72].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[73].position = D3DXVECTOR3(-0.5f, 0.65f, -2.1f);
	vertices[73].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[74].position = D3DXVECTOR3(0.8f, 0.48f, -2.1f);
	vertices[74].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[75].position = D3DXVECTOR3(0.8f, 0.65f, -2.1f);
	vertices[75].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	//stogo sienele - geltona

	vertices[76].position = D3DXVECTOR3(0.8f, 0.48f, -2.1f);
	vertices[76].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[77].position = D3DXVECTOR3(0.8f, 0.65f, -2.1f);
	vertices[77].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[78].position = D3DXVECTOR3(0.8f, 0.88f, -0.5f);
	vertices[78].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);
	vertices[79].position = D3DXVECTOR3(0.8f, 1.05f, -0.5f);
	vertices[79].color = D3DXVECTOR4(1.0f, 1.0f, 0.0f, 1.0f);

	//mini juodas kvadraciukas

	vertices[80].position = D3DXVECTOR3(0.8f, 0.88f, -0.5f);
	vertices[80].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[81].position = D3DXVECTOR3(0.8f, 1.05f, -0.5f);
	vertices[81].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[82].position = D3DXVECTOR3(0.7f, 0.88f, -0.5f);
	vertices[82].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[83].position = D3DXVECTOR3(0.7f, 1.05f, -0.5f);
	vertices[83].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);

	//desiniojo namuko stogas

	vertices[84].position = D3DXVECTOR3(-0.5f, 0.65f, -2.1f);
	vertices[84].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[85].position = D3DXVECTOR3(-0.5f, 1.05f, -0.5f);
	vertices[85].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[86].position = D3DXVECTOR3(0.8f, 0.65f, -2.1f);
	vertices[86].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[87].position = D3DXVECTOR3(0.8f, 1.05f, -0.5f);
	vertices[87].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);

	//paprastos durys

	vertices[88].position = D3DXVECTOR3(-0.45f, -0.7f, -1.0f);
	vertices[88].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[89].position = D3DXVECTOR3(-0.45f, 0.2f, -1.0f);
	vertices[89].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[90].position = D3DXVECTOR3(-0.45f, -0.7f, -1.5f);
	vertices[90].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[91].position = D3DXVECTOR3(-0.45f, 0.2f, -1.5f);
	vertices[91].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	//duru sienele - desine

	vertices[92].position = D3DXVECTOR3(0.7f, -0.7f, -1.5f);
	vertices[92].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[93].position = D3DXVECTOR3(0.7f, 0.2f, -1.5f);
	vertices[93].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[94].position = D3DXVECTOR3(-0.45f, -0.7f, -1.0f);
	vertices[94].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[95].position = D3DXVECTOR3(-0.45f, 0.2f, -1.0f);
	vertices[95].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//duru sienele - kaire
	
	vertices[96].position = D3DXVECTOR3(-0.45f, -0.7f, -1.5f);
	vertices[96].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[97].position = D3DXVECTOR3(-0.45f, 0.2f, -1.5f);
	vertices[97].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[98].position = D3DXVECTOR3(0.7f, -0.7f, -1.0f);
	vertices[98].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[99].position = D3DXVECTOR3(0.7f, 0.2f, -1.0f);
	vertices[99].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//duru sienele - virsus

	vertices[100].position = D3DXVECTOR3(-0.45f, 0.2f, -1.5f);
	vertices[100].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[101].position = D3DXVECTOR3(-0.45f, 0.2f, -1.0f);
	vertices[101].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[102].position = D3DXVECTOR3(0.7f, 0.2f, -1.5f);
	vertices[102].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[103].position = D3DXVECTOR3(0.7f, 0.2f, -1.0f);
	vertices[103].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//kaminas

	vertices[104].position = D3DXVECTOR3(-0.1f, 1.05f, 0.3f);
	vertices[104].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[105].position = D3DXVECTOR3(-0.1f, 1.5f, 0.3f);
	vertices[105].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 0.0f);
	vertices[106].position = D3DXVECTOR3(-0.1f, 1.05f, 0.0f);
	vertices[106].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[107].position = D3DXVECTOR3(-0.1f, 1.5f, 0.0f);
	vertices[107].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[108].position = D3DXVECTOR3(0.3f, 1.05f, 0.0f);
	vertices[108].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[109].position = D3DXVECTOR3(0.3f, 1.5f, 0.0f);
	vertices[109].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[110].position = D3DXVECTOR3(0.3f, 1.05f, 0.3f);
	vertices[110].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[111].position = D3DXVECTOR3(0.3f, 1.5f, 0.3f);
	vertices[111].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[112].position = D3DXVECTOR3(-0.1f, 1.23f, 0.0f);
	vertices[112].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[113].position = D3DXVECTOR3(-0.1f, 1.5f, 0.0f);
	vertices[113].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[114].position = D3DXVECTOR3(0.3f, 1.23f, 0.0f);
	vertices[114].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[115].position = D3DXVECTOR3(0.3f, 1.5f, 0.0f);
	vertices[115].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[116].position = D3DXVECTOR3(0.3f, 1.23f, 0.3f);
	vertices[116].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[117].position = D3DXVECTOR3(0.3f, 1.5f, 0.3f);
	vertices[117].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[118].position = D3DXVECTOR3(-0.1f, 1.23f, 0.3f);
	vertices[118].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[119].position = D3DXVECTOR3(-0.1f, 1.5f, 0.3f);
	vertices[119].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);


	//kamino virsus

	vertices[120].position = D3DXVECTOR3(-0.2f, 1.5f, 0.4f);
	vertices[120].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[121].position = D3DXVECTOR3(-0.2f, 1.65f, 0.4f);
	vertices[121].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 0.0f);
	vertices[122].position = D3DXVECTOR3(-0.2f, 1.5f, -0.1f);
	vertices[122].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[123].position = D3DXVECTOR3(-0.2f, 1.65f, -0.1f);
	vertices[123].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[124].position = D3DXVECTOR3(0.4f, 1.5f, -0.1f);
	vertices[124].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[125].position = D3DXVECTOR3(0.4f, 1.65f, -0.1f);
	vertices[125].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 0.0f);
	vertices[126].position = D3DXVECTOR3(0.4f, 1.5f, 0.4f);
	vertices[126].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[127].position = D3DXVECTOR3(0.4f, 1.65f, 0.4f);
	vertices[127].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[128].position = D3DXVECTOR3(-0.2f, 1.5f, -0.1f);
	vertices[128].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[129].position = D3DXVECTOR3(-0.2f, 1.65f, -0.1f);
	vertices[129].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[130].position = D3DXVECTOR3(0.4f, 1.5f, -0.1f);
	vertices[130].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[131].position = D3DXVECTOR3(0.4f, 1.65f, -0.1f);
	vertices[131].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);

	vertices[132].position = D3DXVECTOR3(0.4f, 1.5f, 0.4f);
	vertices[132].color = D3DXVECTOR4(0.0f, 0.0f, 0.0f, 1.0f);
	vertices[133].position = D3DXVECTOR3(0.4f, 1.65f, 0.4f);
	vertices[133].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[134].position = D3DXVECTOR3(-0.2f, 1.5f, 0.4f);
	vertices[134].color = D3DXVECTOR4(0.1f, 0.0f, 0.0f, 1.0f);
	vertices[135].position = D3DXVECTOR3(-0.2f, 1.65f, 0.4f);
	vertices[135].color = D3DXVECTOR4(0.0f, 1.0f, 0.0f, 1.0f);
	
	vertices[136].position = D3DXVECTOR3(-0.2f, 1.5f, 0.4f);
	vertices[136].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[137].position = D3DXVECTOR3(-0.2f, 1.5f, -0.1f);
	vertices[137].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[138].position = D3DXVECTOR3(0.4f, 1.5f, 0.4f);
	vertices[138].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);
	vertices[139].position = D3DXVECTOR3(0.4f, 1.5f, -0.1f);
	vertices[139].color = D3DXVECTOR4(0.0f, 0.0f, 1.0f, 1.0f);

	vertices[140].position = D3DXVECTOR3(-0.2f, 1.65f, -0.1f);
	vertices[140].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[141].position = D3DXVECTOR3(-0.2f, 1.65f, 0.0f);
	vertices[141].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[142].position = D3DXVECTOR3(0.4f, 1.65f, -0.1f);
	vertices[142].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[143].position = D3DXVECTOR3(0.4f, 1.65f, 0.0f);
	vertices[143].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	vertices[144].position = D3DXVECTOR3(-0.2f, 1.65f, 0.3f);
	vertices[144].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[145].position = D3DXVECTOR3(-0.2f, 1.65f, 0.4f);
	vertices[145].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[146].position = D3DXVECTOR3(0.4f, 1.65f, 0.3f);
	vertices[146].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[147].position = D3DXVECTOR3(0.4f, 1.65f, 0.4f);
	vertices[147].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	vertices[148].position = D3DXVECTOR3(0.3f, 1.65f, 0.0f);
	vertices[148].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[149].position = D3DXVECTOR3(0.3f, 1.65f, 0.3f);
	vertices[149].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[150].position = D3DXVECTOR3(0.4f, 1.65f, 0.0f);
	vertices[150].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[151].position = D3DXVECTOR3(0.4f, 1.65f, 0.3f);
	vertices[151].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	vertices[152].position = D3DXVECTOR3(-0.2f, 1.65f, 0.0f);
	vertices[152].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[153].position = D3DXVECTOR3(-0.2f, 1.65f, 0.3f);
	vertices[153].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[154].position = D3DXVECTOR3(-0.1f, 1.65f, 0.0f);
	vertices[154].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);
	vertices[155].position = D3DXVECTOR3(-0.1f, 1.65f, 0.3f);
	vertices[155].color = D3DXVECTOR4(1.0f, 0.0f, 0.0f, 1.0f);

	//langas

	vertices[156].position = D3DXVECTOR3(-0.75f, -0.1f, 0.2f);
	vertices[156].color = D3DXVECTOR4(1.0f, 1.0f, 1.0f, 0.5f);
	vertices[157].position = D3DXVECTOR3(-0.75f, 0.5f, 0.2f);
	vertices[157].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 0.5f);
	vertices[158].position = D3DXVECTOR3(-0.75f, -0.1f, -0.2f);
	vertices[158].color = D3DXVECTOR4(1.0f, 1.0f, 1.0f, 0.5f);
	vertices[159].position = D3DXVECTOR3(-0.75f, 0.5f, -0.2f);
	vertices[159].color = D3DXVECTOR4(0.0f, 1.0f, 1.0f, 0.5f);

	//desine

	vertices[160].position = D3DXVECTOR3(-0.75f, -0.1f, -0.2f);
	vertices[160].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[161].position = D3DXVECTOR3(-0.75f, 0.5f, -0.2f);
	vertices[161].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[162].position = D3DXVECTOR3(-0.7f, -0.1f, -0.2f);
	vertices[162].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[163].position = D3DXVECTOR3(-0.7f, 0.5f, -0.2f);
	vertices[163].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//lango sienele - kaire

	vertices[164].position = D3DXVECTOR3(-0.7f, -0.1f, 0.2f);
	vertices[164].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[165].position = D3DXVECTOR3(-0.7f, 0.5f, 0.2f);
	vertices[165].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[166].position = D3DXVECTOR3(-0.75f, -0.1f, 0.2f);
	vertices[166].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[167].position = D3DXVECTOR3(-0.75f, 0.5f, 0.2f);
	vertices[167].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	//lango sienele - virsus

	vertices[168].position = D3DXVECTOR3(-0.7f, 0.5f, 0.2f);
	vertices[168].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[169].position = D3DXVECTOR3(-0.7f, 0.5f, -0.2f);
	vertices[169].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[170].position = D3DXVECTOR3(-0.75f, 0.5f, 0.2f);
	vertices[170].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[171].position = D3DXVECTOR3(-0.75f, 0.5f, -0.2f);
	vertices[171].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	 //apacia
	vertices[172].position = D3DXVECTOR3(-0.7f, -0.1f, -0.2f);
	vertices[172].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[173].position = D3DXVECTOR3(-0.7f, -0.1f, 0.2f);
	vertices[173].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[174].position = D3DXVECTOR3(-0.75f, -0.1f, -0.2f);
	vertices[174].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);
	vertices[175].position = D3DXVECTOR3(-0.75f, -0.1f, 0.2f);
	vertices[175].color = D3DXVECTOR4(1.0f, 0.0f, 1.0f, 1.0f);

	// Set up the description of the static vertex buffer.
    vertexBufferDesc.Usage = D3D11_USAGE_DEFAULT;
    vertexBufferDesc.ByteWidth = sizeof(VertexType) * vCount;
    vertexBufferDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
    vertexBufferDesc.CPUAccessFlags = 0;
    vertexBufferDesc.MiscFlags = 0;
	vertexBufferDesc.StructureByteStride = 0;

	// Give the subresource structure a pointer to the vertex data.
	ZeroMemory( &vertexData, sizeof( vertexData ) );
    vertexData.pSysMem = vertices;
	vertexData.SysMemPitch = 0;
	vertexData.SysMemSlicePitch = 0;

	// Now create the vertex buffer.
    result = device->CreateBuffer(&vertexBufferDesc, &vertexData, &m_vertexBuffer);
	if(FAILED(result))
	{
		return false;
	}

	// Release the array now that the vertex buffer has been created and loaded.
	delete [] vertices;
	vertices = 0;

//
// Process the index buffer	
//
	unsigned long* indices;
	D3D11_BUFFER_DESC indexBufferDesc;
	D3D11_SUBRESOURCE_DATA indexData;

	// Set the number of indices in the index array.
	int iCount = 264;
	SetIndexCount(iCount);

	// Create the index array.
	indices = new unsigned long[iCount];
	if(!indices)
	{
		return false;
	}
	// Load the index array with data.
	
	indices[0] = 0;  
	indices[1] = 1;  
	indices[2] = 2;  
	indices[3] = 2;  
	indices[4] = 1;  
	indices[5] = 3; 

	indices[6] = 4;  
	indices[7] = 5;  
	indices[8] = 6;  
	indices[9] = 6;  
	indices[10] = 5;  
	indices[11] = 7; 

	indices[12] = 8;  
	indices[13] = 9;  
	indices[14] = 10;  
	indices[15] = 10;  
	indices[16] = 9;  
	indices[17] = 11; 

	indices[18] = 12;  
	indices[19] = 13;  
	indices[20] = 14;  
	indices[21] = 14;  
	indices[22] = 13;  
	indices[23] = 15; 

	indices[24] = 16;  
	indices[25] = 17;  
	indices[26] = 18;  
	indices[27] = 18;  
	indices[28] = 17;  
	indices[29] = 19; 		

	indices[30] = 20;  
	indices[31] = 21;  
	indices[32] = 22;  
	indices[33] = 22;  
	indices[34] = 21;  
	indices[35] = 23;

	indices[36] = 24;
	indices[37] = 25;
	indices[38] = 26;
	indices[39] = 26;
	indices[40] = 25;
	indices[41] = 27;

	indices[42] = 28;
	indices[43] = 29;
	indices[44] = 30;
	indices[45] = 30;
	indices[46] = 29;
	indices[47] = 31;

	indices[48] = 32;
	indices[49] = 33;
	indices[50] = 34;
	indices[51] = 34;
	indices[52] = 33;
	indices[53] = 35;

	indices[54] = 36;
	indices[55] = 37;
	indices[56] = 38;
	indices[57] = 38;
	indices[58] = 37;
	indices[59] = 39;

	indices[60] = 40;
	indices[61] = 41;
	indices[62] = 42;
	indices[63] = 42;
	indices[64] = 41;
	indices[65] = 43;

	indices[66] = 44;
	indices[67] = 45;
	indices[68] = 46;
	indices[69] = 46;
	indices[70] = 45;
	indices[71] = 47;

	indices[72] = 48;
	indices[73] = 49;
	indices[74] = 50;
	indices[75] = 50;
	indices[76] = 49;
	indices[77] = 51;

	indices[78] = 52;
	indices[79] = 53;
	indices[80] = 54;
	indices[81] = 54;
	indices[82] = 53;
	indices[83] = 55;

	indices[84] = 56;
	indices[85] = 57;
	indices[86] = 58;
	indices[87] = 58;
	indices[88] = 57;
	indices[89] = 59;

	indices[90] = 60;
	indices[91] = 61;
	indices[92] = 62;
	indices[93] = 62;
	indices[94] = 61;
	indices[95] = 63;

	indices[96] = 64;
	indices[97] = 65;
	indices[98] = 66;
	indices[99] = 66;
	indices[100] = 65;
	indices[101] = 67;

	indices[102] = 68;
	indices[103] = 69;
	indices[104] = 70;
	indices[105] = 70;
	indices[106] = 69;
	indices[107] = 71;

	indices[108] = 72;
	indices[109] = 73;
	indices[110] = 74;
	indices[111] = 74;
	indices[112] = 73;
	indices[113] = 75;

	indices[114] = 76;
	indices[115] = 77;
	indices[116] = 78;
	indices[117] = 78;
	indices[118] = 77;
	indices[119] = 79;

	indices[120] = 80;
	indices[121] = 81;
	indices[122] = 82;
	indices[123] = 82;
	indices[124] = 81;
	indices[125] = 83;

	indices[126] = 84;
	indices[127] = 85;
	indices[128] = 86;
	indices[129] = 86;
	indices[130] = 85;
	indices[131] = 87;

	indices[132] = 88;
	indices[133] = 89;
	indices[134] = 90;
	indices[135] = 90;
	indices[136] = 89;
	indices[137] = 91;

	indices[138] = 92;
	indices[139] = 93;
	indices[140] = 94;
	indices[141] = 94;
	indices[142] = 93;
	indices[143] = 95;


	indices[144] = 96;
	indices[145] = 97;
	indices[146] = 98;
	indices[147] = 98;
	indices[148] = 97;
	indices[149] = 99;

	indices[150] = 100;
	indices[151] = 101;
	indices[152] = 102;
	indices[153] = 102;
	indices[154] = 101;
	indices[155] = 103;

	indices[156] = 104;
	indices[157] = 105;
	indices[158] = 106;
	indices[159] = 106;
	indices[160] = 105;
	indices[161] = 107;

	indices[162] = 108;
	indices[163] = 109;
	indices[164] = 110;
	indices[165] = 110;
	indices[166] = 109;
	indices[167] = 111;

	indices[168] = 112;
	indices[169] = 113;
	indices[170] = 114;
	indices[171] = 114;
	indices[172] = 113;
	indices[173] = 115;
	
	indices[174] = 116;
	indices[175] = 117;
	indices[176] = 118;
	indices[177] = 118;
	indices[178] = 117;
	indices[179] = 119;

	indices[180] = 120;
	indices[181] = 121;
	indices[182] = 122;
	indices[183] = 122;
	indices[184] = 121;
	indices[185] = 123;

	indices[186] = 124;
	indices[187] = 125;
	indices[188] = 126;
	indices[189] = 126;
	indices[190] = 125;
	indices[191] = 127;

	indices[192] = 128;
	indices[193] = 129;
	indices[194] = 130;
	indices[195] = 130;
	indices[196] = 129;
	indices[197] = 131;

	indices[198] = 132;
	indices[199] = 133;
	indices[200] = 134;
	indices[201] = 134;
	indices[202] = 133;
	indices[203] = 135;

	indices[204] = 136;
	indices[205] = 137;
	indices[206] = 138;
	indices[207] = 138;
	indices[208] = 137;
	indices[209] = 139;

	indices[210] = 140;
	indices[211] = 141;
	indices[212] = 142;
	indices[213] = 142;
	indices[214] = 141;
	indices[215] = 143;

	indices[216] = 144;
	indices[217] = 145;
	indices[218] = 146;
	indices[219] = 146;
	indices[220] = 145;
	indices[221] = 147;

	indices[222] = 148;
	indices[223] = 149;
	indices[224] = 150;
	indices[225] = 150;
	indices[226] = 149;
	indices[227] = 151;

	indices[228] = 152;
	indices[229] = 153;
	indices[230] = 154;
	indices[231] = 154;
	indices[232] = 153;
	indices[233] = 155;

	indices[234] = 156;
	indices[235] = 157;
	indices[236] = 158;
	indices[237] = 158;
	indices[238] = 157;
	indices[239] = 159;

	indices[240] = 160;
	indices[241] = 161;
	indices[242] = 162;
	indices[243] = 162;
	indices[244] = 161;
	indices[245] = 163;

	indices[246] = 164;
	indices[247] = 165;
	indices[248] = 166;
	indices[249] = 166;
	indices[250] = 165;
	indices[251] = 167;

	indices[252] = 168;
	indices[253] = 169;
	indices[254] = 170;
	indices[255] = 170;
	indices[256] = 169;
	indices[257] = 171;

	indices[258] = 172;
	indices[259] = 173;
	indices[260] = 174;
	indices[261] = 174;
	indices[262] = 173;
	indices[263] = 175;

	// Set up the description of the static index buffer.
    indexBufferDesc.Usage = D3D11_USAGE_DEFAULT;
    indexBufferDesc.ByteWidth = sizeof(unsigned long) * iCount;
    indexBufferDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;
    indexBufferDesc.CPUAccessFlags = 0;
    indexBufferDesc.MiscFlags = 0;
	indexBufferDesc.StructureByteStride = 0;

	// Give the subresource structure a pointer to the index data.
    indexData.pSysMem = indices;
	indexData.SysMemPitch = 0;
	indexData.SysMemSlicePitch = 0;

	// Create the index buffer.
	result = device->CreateBuffer(&indexBufferDesc, &indexData, &m_indexBuffer);
	if(FAILED(result))
	{
		return false;
	}

	// Release the array now that the vertex buffer has been created and loaded.
	delete [] indices;
	indices = 0;

	return true;
}


void CubeModelClass::Render(ID3D11DeviceContext* deviceContext)
{
	//Update the world transformations
	UINT  iTime  = timeGetTime() % 6000;
	float fAngle = iTime * 2 * D3DX_PI / 6000.0f;
	D3DXMATRIX rotMatrixX, rotMatrixY, transMatrix, scaleMatrix;
	D3DXMatrixRotationX(&rotMatrixX, fAngle );
	D3DXMatrixRotationY(&rotMatrixY, fAngle );
	D3DXMatrixTranslation(&transMatrix, 0.0f,4.0f,0.0f);
	D3DXMatrixScaling(&scaleMatrix, 1.5f, 1.5f, 1.5f);
	//SetModelWorldMatrix(rotMatrixY * transMatrix);
	//SetModelWorldMatrix(rotMatrixX * transMatrix);
	SetModelWorldMatrix(rotMatrixX * rotMatrixY * transMatrix);
	//SetModelWorldMatrix(transMatrix); 
	
	//SetModelWorldMatrix(scaleMatrix *rotMatrixY*transMatrix);

	// Put the vertex and index buffers on the graphics pipeline to prepare them for drawing.
	RenderBuffers(deviceContext);

	return;
}


void CubeModelClass::RenderBuffers(ID3D11DeviceContext* deviceContext)
{
	unsigned int stride;
	unsigned int offset;

	// Set vertex buffer stride and offset.
	stride = sizeof(VertexType); 
	offset = 0;
    
	// Set the vertex buffer to active in the input assembler so it can be rendered.
	deviceContext->IASetVertexBuffers(0, 1, &m_vertexBuffer, &stride, &offset);

    // Set the index buffer to active in the input assembler so it can be rendered.
	deviceContext->IASetIndexBuffer(m_indexBuffer, DXGI_FORMAT_R32_UINT, 0);

    // Set the type of primitive that should be rendered from this vertex buffer, in this case triangles.
	deviceContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	// render primitives
	deviceContext->DrawIndexed(GetIndexCount(), 0, 0);

	return;
}