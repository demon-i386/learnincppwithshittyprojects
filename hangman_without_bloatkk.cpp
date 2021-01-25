
// a hangman without bloat (only 1 letter and word)


#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <limits.h>
#include <string.h>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>

using namespace std;
std::string word= "aviao";

char letter[0];
int error;

int main(int argc, char *argv[]){
	cout << "letter?????????12221: ";
	cin >> letter;


	for(int x = 0; x < strlen(word.c_str()); x++){
		if(word.at(x) == letter[0]){
			cout << "wow ur a god in this game lmao ur really god, want a medal?: " << word[x] << endl;
			break;
		}
		else{
			cout << "lmao ur n00b fuckoff please: " <<  letter[0] << endl;
			error+=1;
			break;
		}
	}
}
