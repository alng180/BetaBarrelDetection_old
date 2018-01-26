#include <omp.h>	// OpenMP
#include <amp.h>	// MS Accelerated Massive Parallelism library

#include <iostream>
#include <chrono>
#include <cstdlib>

#include "MRC.h"

#define POPULATION 100
#define GENERATIONS 100
#define MUTATIONRATE 10

int main(int argc, char *argv[]) {
	srand(time(NULL));

	if (argc < 2 || argc > 3) {
		std::cerr << argv[0] << "usage: mrcFileName threshold (helixMrcFile)";
		return 0;
	}

	bool helixMrc = false;

	std::string helixFile = "";
	std::string mrcFile = "";

	if (argc == 3) {
		helixMrc = true;
		helixFile = argv[3];
	}

	// get variables
	mrcFile = argv[1];
	double threshold = std::stod(argv[2]);

	// 
	clock_t c_start = clock();

	MRC mrc;
	mrc.readFile(mrcFile);

	Preprocessing
}