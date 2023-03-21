#include "DialogueManager.h"
#include "App.h"
#include "Textures.h"
#include "Window.h"
#include "GuiButton.h"
#include "Audio.h"
#include "Fonts.h"
#include <SDL_ttf/include/SDL_ttf.h>

DialogueManager::DialogueManager() :Module()
{
	name.Create("dialogueManager");
}

DialogueManager::~DialogueManager() {}

bool DialogueManager::Start()
{

	uint w, h;
	app->win->GetWindowSize(w, h);
	int x = w;
	int y = h;
	textbox = { x / 2 - 450, y / 2, 900, 200 };
	progress = GREETING;

	playerName = "CORNELLIUS";

	//NOTE: Given the size of the font and dialogue box, the maximum length of a sentence is 54 (MAX_CHARACTERS_IN_LINE)

	//TODO 5: Substitute "Traveler" by "playerName"
	firstQuestion.sentenceList->Add((SString)"GREETINGS, " + playerName + "! I SEE YOU ARE VERY TIRED FROM YOUR ADVENTURES.");
	//
	firstQuestion.sentenceList->Add("MAY I INTEREST YOU IN A GLASS OF MILK, COOKIES AND A BALL OF YOUR FAVORITE ICE CREAM FLAVOR? OR PERHAPS YOU WOULD RATHER GO TO BED ALREADY, SIR?");

	firstOption.sentenceList->Add("/PRESS 1/ FOOD");
	firstOption.sentenceList->Add("/PRESS 2/ BED");

	answerA.sentenceList->Add("PERFECT! I WILL PREPARE YOUR FOOD RIGHT AWAY, SIR.");

	answerB.sentenceList->Add("GREAT! LET ME GET THE KEY TO YOUR ROOM AND YOU WILL BE ALL SET, SIR.");

	firstQuestionA.sentenceList->Add(playerName + ", SIR, PLEASE ALLOW ME SOME TIME TO PREPARE THE DISHES!");
	firstQuestionA.sentenceList->Add("THERE IS A STOOL OVER THERER FOR YOU TO WAIT ON.");

	firstQuestionB.sentenceList->Add("IN A MINUTE, SIR!");
	firstQuestionB.sentenceList->Add("THE PREVIOUS HOST LEFT RATHER QUICKLY, I DO NOT KNOW WHERE THE MAN LEFT THOSE DARN KEYS!");

	fontId = app->fonts->Load("Assets/Fonts/defaultfont.png", "!,_./0123456789;?ABCDEFGHIJKLMNOPQRSTUVWXYZ ", 1);

	sentenceQueue = firstQuestion.sentenceList->start;

	return true;
}

bool DialogueManager::Update(float dt)
{

	if (dialogueEnabled) {
		//TODO 2: Draw the Textbox and the Text in front of it
		DrawTextbox();
		DrawText(sentenceQueue->data, 0);
		//
	}

	if (questionEnabled) {
		//TODO 2: Draw the Text of option 1 and 2
		DrawText(firstOption.sentenceList->start->data, 80);
		DrawText(firstOption.sentenceList->start->next->data, 100);
		//

		//TODO 3: Detect if 1 or 2 are being pressed, and for each case, set the progress stage we are in and update the dialogue
		if (app->input->GetKey(SDL_SCANCODE_1) == KEY_DOWN) {
			progress = ANSWERA;
			UpdateDialogue();
		}

		if (app->input->GetKey(SDL_SCANCODE_2) == KEY_DOWN) {
			progress = ANSWERB;
			UpdateDialogue();
		}
		//
	}
	else if(app->input->GetKey(SDL_SCANCODE_SPACE) == KEY_DOWN && dialogueEnabled) {
		UpdateDialogue();
	}

	return true;
}

bool DialogueManager::DrawTextbox() {
	app->render->DrawRectangle({ textbox.x - 10, textbox.y - 10, textbox.w + 20, textbox.h + 20 }, 255, 255, 255, 255, true, false);
	app->render->DrawRectangle(textbox, 50, 50, 50, 255, true, false);

	return true;
}

bool DialogueManager::DrawText(SString s, uint yoffset){

		for (int i = 0; i <= s.GetCapacity(); i += MAX_CHARACTERS_IN_LINE) {
			if (s.GetCapacity() > MAX_CHARACTERS_IN_LINE) {
				SString s1 = s;
				for (int i = MAX_CHARACTERS_IN_LINE-1; i >= 0; i--) {
					if (s.GetString()[i] == ' ') {
						s.Cut(0, i);
						s1.Cut(i+1);
						break;
					}
				}
				app->fonts->BlitText(textbox.x + 20, textbox.y + 20 + 20*(i/ MAX_CHARACTERS_IN_LINE) + yoffset, fontId, s1.GetString(), false);
			}
			else {
				app->fonts->BlitText(textbox.x + 20, textbox.y + 20 + 20 * (i / MAX_CHARACTERS_IN_LINE) + yoffset, fontId, s.GetString(), false);
			}
		}

	return true;

}

bool DialogueManager::SetDialogue(Dialogue dialogue) {

	sentenceQueue = dialogue.sentenceList->start;

	return true;
}

bool DialogueManager::UpdateDialogue() {

	//This first if moves the dialogue list forward until it reaches the end
	//When it reaches the end, it checks the switch statement to know what to do next
	if (sentenceQueue->next != nullptr) {
		sentenceQueue = sentenceQueue->next;
	}
	else {
		switch (progress) {
			//TODO 4: Write each case
		case GREETING:
			questionEnabled = true;
			break;
		case ANSWERA:
			SetDialogue(answerA);
			questionEnabled = false;
			progress = GREETINGA;
			break;
		case ANSWERB:
			SetDialogue(answerB);
			questionEnabled = false;
			progress = GREETINGB;
			break;
		case GREETINGA:
			SetDialogue(firstQuestionA);
			dialogueEnabled = false;
			break;
		case GREETINGB:
			SetDialogue(firstQuestionB);
			dialogueEnabled = false;
			break;
			//
		}
	}

	return true;
}

bool DialogueManager::ResetDialogue() {
	progress = GREETING;
	sentenceQueue = firstQuestion.sentenceList->start;
	questionEnabled = false;
	dialogueEnabled = false;

	return true;
}

bool DialogueManager::CleanUp()
{

	return true;
}



