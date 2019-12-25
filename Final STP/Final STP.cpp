#include "BasicVoice.h"
#include "MaleVoice.h"
#include "FemaleVoice.h"

int main()
{

	BasicVoice* b1 = NULL;


	b1 = new MaleVoice;
	int choice;
	do {
		cout << "1 to Output in Male Voice \n2 to Output in Female Voice\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			b1 = new MaleVoice; //  we create a new malevoice object.
			b1->setSpeech();
			b1->outSpeech();
			delete b1; //after outputing that voice , we delete that object
			break;
		case 2:
			b1 = new FemaleVoice;// we create a new femalevoice
			b1->setSpeech();
			b1->outSpeech();
			delete b1;//after outputing that voice , we delete that object
			break;
		case 3:
			b1 = new FemaleVoice;
			b1->byeSpeech();
			b1->outSpeech();
			delete b1;
			break;
		default:
			break;
		}
	} while (choice != 3);
	system("pause");
	return 0;
}