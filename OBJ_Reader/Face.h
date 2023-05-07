#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include <vector>

class Face
{
public:
	Face() = default;

	Face(int a, int b, int c);

	Face(int a, int b, int c, int d);

	void AddVertices(int a, int b, int c);

	void AddVertices(int a, int b, int c, int d);

	std::vector<int>& GetVerticesIndexes() { return this->verticesIndexes; }

private:
	std::vector<int> verticesIndexes;
};

#endif