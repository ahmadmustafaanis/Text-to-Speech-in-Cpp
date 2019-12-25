#include "MaleVoice.h"

void MaleVoice::setSpeech()
{
	if (SUCCEEDED(hr))
	{
		cout << "Enter text:\n";
		cin.ignore(1, '\n');
		getline(wcin, input);
	}
	else
	{
		cout << "NOt Initalized";
		exit(-1);
	}
	system("cls");
	//int choice;
	cout << "At What Speed you want to Play your Voice\n1 for Normal \n2 for -2x\n3 for 2x";
	cin >> choice;
	
	if (choice == 2)
		hr = pVoice->Speak((L"<rate absspeed='-2'>" + input).c_str(), 0, NULL);
	else if (choice == 3)
		hr = pVoice->Speak((L"<rate absspeed='2'>" + input).c_str(), 0, NULL);
	else
		hr = pVoice->Speak(input.c_str(), 0, NULL);
	/*    HRESULT Speak(
   LPCWSTR       *pwcs,pwcs
[in, string] Pointer to the null-terminated text string (possibly containing XML markup) to be synthesized. This value can be NULL when dwFlags is set to SPF_PURGEBEFORESPEAK indicating that any remaining data to be synthesized should be discarded. If dwFlags is set to SPF_IS_FILENAME, this value should point to a null-terminated, fully qualified path to a file.
   DWORD          dwFlags,dwFlags
[in] Flags used to control the rendering process for this call. The flag values are contained in the SPEAKFLAGS enumeration.
   ULONG         *pulStreamNumber
   [out] Pointer to a ULONG which receives the current input stream number associated with this Speak request. Each time a string is spoken, an associated stream number is returned. Events queued back to the application related to this string will contain this number. If NULL, no value is passed back.

);

*/
}

void MaleVoice::outSpeech()
{
	pVoice->Release();
	pVoice = NULL;
	::CoUninitialize();

}

void MaleVoice::byeSpeech()
{
}
