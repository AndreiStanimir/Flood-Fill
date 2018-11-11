// Flood Fill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <queue>
#include <fstream>

using namesapce std;

struct Point
{
	int x, y;
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}

};
bool matrice[100][100], m;
int val[100][100];
int indX[] = { -1,1,0,0 };
int indY[] = { 0,0,1,-1 };
void Citire()
{
	int i, j;
	ifstream fin("a.txt");
	fin >> m;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
			fin >> m[i][j];
	}
}

void BFS(Point p, int culoare)
{
	queue<Point> coada;

	coada.push(p);
	while (!coada.empty())
	{
		for (int i = 0; i < 4; i++)
		{
			if (matrice[p.x + indX[i]][p.y + indY[i])
				coada.push(new Point(p.x + indX[i], p.y + indY[i]);
		}
	}
}
int main()
{
	return 0;
}

