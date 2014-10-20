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

//vector array delete
Vector * vectorarragdelete(Vector * array, int arraysize, int elementtodelete)
{
	Vector * newarray = new Vector[arraysize - 1];
	bool deleted { false };
	for (int i{ 0 }; i < arraysize - 1; i++){
		//if the element has not been deleted
		if (deleted == false){
			if (elementtodelete == i){
				deleted = true;
			}
			else{
				newarray[i] = array[i];
			}
		}
		//if the element has been deleted
		if (deleted == true){
			newarray[i] = array[i + 1];
		}
	}
	delete[] array;
	return newarray;

}


// vectors
int vectors_size{ 0 };
Vector * vectors = new Vector[0];