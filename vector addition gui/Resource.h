//vector data storage
struct Vector
{
	double magnitude{};
	double xmagnitude{};
	double ymagnitude{};
	double degree{};
	short xdir{};
	short ydir{};
};

//vector array expand
Vector * vectorarrayexpand(Vector * array, int arraysize, int arrayincrease)
{
	Vector * newarray = new Vector[arraysize + arrayincrease];
	for (int i{ 0 }; i < arraysize; i++){
		//set old values
		newarray[i] = array[i];

	}
	delete[] array;
	return newarray;
}

// vectors
int vectors_size{ 0 };
Vector * vectors = new Vector[0];