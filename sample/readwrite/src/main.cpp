#include "Annotation_Include.h"


int main (int argc, char **argv)
{
	// read
	{
		Annotation::Data d;

		d.read("..\\..\\data\\test_read.txt");
	}

	// write
	{
		Annotation::Data d("sample image", 640, 480, 3, "sample database");

		d.getCoordinatesX() = 1;
		d.getCoordinatesY() = 1;

		d.getComments().push_back("This is a sample annotation file.");

		d.getElements().push_back(Annotation::Element("PASperson", "person", 10, 11, 12, 13));
		d.getElements().push_back(Annotation::Element("PAScar", "car", 20, 21, 22, 23));

		d.write("..\\..\\data\\test_write.txt");
	}

	return 0;
}

