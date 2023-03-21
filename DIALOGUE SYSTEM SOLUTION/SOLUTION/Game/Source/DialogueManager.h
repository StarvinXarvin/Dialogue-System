#ifndef __DIALOGUEMANAGER_H__
#define __DIALOGUEMANAGER_H__

#include <iostream>
#include <queue>

#include "Module.h"
#include "GuiControl.h"

#include "List.h"
#include <SDL_ttf/include/SDL_ttf.h>

using namespace std;

class Dialogue {

public:

	Dialogue(){
		sentenceList = new List<SString>;
	}
	Dialogue(List<SString>* sentences) {
		sentenceList = sentences;
	}
	~Dialogue(){}

public:
	List<SString>* sentenceList;

};

enum DialogueProgress {

	GREETING,
	QUESTION,
	ANSWERA,
	ANSWERB,
	GREETINGA,
	GREETINGB

};

class DialogueManager : public Module {

public:

	DialogueManager();

	virtual ~DialogueManager();

	// Called before the first frame
	bool Start();

	bool Update(float dt);

	bool Draw(SString s);

	// Called before quitting
	bool CleanUp();

	bool DrawTextbox();

	bool DrawText(SString s, uint yoffset);

	bool SetDialogue(Dialogue* dialogue);

	bool UpdateDialogue();

	bool ResetDialogue();

public:

	bool dialogueEnabled;
	ListItem<SString>* sentenceQueue;
	SString playerName;
	uint rows = 3;
	SDL_Rect textbox;
	int fontId;
	DialogueProgress progress;
	int questionEnabled;

	Dialogue firstQuestion;
	Dialogue firstOption;
	Dialogue answerA;
	Dialogue answerB;
	Dialogue firstQuestionA;
	Dialogue firstQuestionB;

};

#endif // __DIALOGUEMANAGER_H__
