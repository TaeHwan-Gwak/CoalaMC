#include <CoalaMOD.h>

#include <stdio.h>

#pragma comment(lib, "CoalaMOD.lib")

#include <math.h>

int main() {

	double pi = 3.14159265358979323846;

	BlockID my_stone = createBlock(BLOCK_SAND_STONE);


	int i, j, k;

	int px, py, pz;

	getPlayerLocation(&px, &py, &pz);

	double dir = getPlayerDirection();

	double radian = dir * pi / 180.;

	int dx = -50 * sin(radian);

	int dz = 50 * cos(radian);

	px += dx;

	pz += dz;



	printf("%d %d %d", px, py, pz);

	for (i = 1; i < 14; i++) {

		for (j = i - 13; j < 14 - i; j++) {

			for (k = i - 13; k < 14 - i; k++) {

				locateBlock(my_stone, px + j, py + i, pz + k);

			}

		}

	}

}