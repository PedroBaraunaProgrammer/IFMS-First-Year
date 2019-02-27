//include the biblitec.
#include <stdio.h>
int main()
{
	//create variables.
	float note1,note2,note3,result;
	
	//get the note1.
	printf ("put a note1 :");
	scanf ("%f",note1);
	
	//get the note2.
	printf ("put a note2 :");
	scanf ("%f",note2);
	
	//get the note3.
	printf ("put a note3 :");
	scanf ("%f",note3);
	
	//calculate of avarage.
	result = (note1 + note2 + note3) / 3;
	
	//print the final note
	printf ("you final avarage is : %f",result);
}
