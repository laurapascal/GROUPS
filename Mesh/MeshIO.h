#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Mesh.h"

class MeshIO
{
public:
	MeshIO(void);
	~MeshIO(void);
	virtual void read(const char *filename);
	void save(const char *filename, Mesh *mesh);
	int nVertex(void);
	int nNormal(void);
	int nFace(void);
	bool hasNormal(void);
	const float *vertex(int id);
	const float *normal(int id);
	const int *face(int id);

protected:
	void initArray(void);

protected:
	int m_nVertex;
	int m_nFace;
	int m_nNormal;
	float *m_vertex;
	float *m_normal;
	int *m_face;
	bool m_hasNormal;
};
