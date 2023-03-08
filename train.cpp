#include <iostream>
#include <stdlib.h>

double randomUniform(double &low, double &high)
{
	double range = high - low; 
	double div = RAND_MAX / range;
	return low + rand() / div;
}

int main()
{
	FILE *train = fopen("mnist/mnist_train.csv", "r");
	char line[10000];

	while (fgets(line, 100, train) != NULL)
	{
	}

	fclose(train);

}