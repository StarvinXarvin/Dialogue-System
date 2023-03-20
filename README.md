# Dialog System

### Links

[Webpage](https://starvinxarvin.github.io/Dialog-System/)

[Presentation](https://docs.google.com/presentation/d/1tNQS8tJNmZ-b04g73FLQbTXMgvRYhUNoxCiMK42VSF0/edit?usp=sharing)
       
## What are dialog systems?

Dialog systems are a crucial element of most videogames. Like in books or movies, dialogue is one of the primary ways of informing the viewer of how the world before their eyes is, or how the characters involved are. However, in videogames, there is an extra layer to dialogue: The viewer can directly engage with it. The player embodies the character or characters themselves.

Let’s get more specific. 

Dialog systems have been present since the early days. They were a way to convey information to the player. Instead of having some random faceless UI telling you what to do, they had a tiny person giving you advice on how to do your quest. However, there are two types of general dialogue systems: Linear dialogue and branching dialogue.

### Linear dialogue

 A very good example of this is the original _The Legend of Zelda (1986)_, where you would often encounter characters that would shortly engage with you, without expecting a response. These small bits of dialogue give tips to the player while simultaneously adding to the worldbuilding of the game.
 
![zelda1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/zelda1.jpg)

![Zelda2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Zelda2.gif)
 
One could assume that linear dialogue is something of the past, since hardware was still primitive and memory was scarce, not allowing storing many lines of dialogue, but linear dialogue is still present in many games nowadays. Actual best-selling triple A games like _Grand Theft Auto V (2013)_. 

Although there are some points in the story where dialogue branches out, 90% of this game’s dialogue is linear. There are no text boxes, it’s all voice acting, but it’s still a linear dialogue system. Characters often fall into conversations while driving to a mission, sometimes they get phone calls or there may be an interaction with some street NPC after you “accidentally” blow up their car.

![Gta1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Gta1.jpg)

![Gta2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Gta2.jpg)
 
### Branching dialogue 

Branching dialogue differs from linear dialogue in the player’s ability to choose different options during an exchange. How much the player can change the route of the conversation, and even the game, depends on how complex this branching dialogue is. 

Dialogue can be made infinitely complex, therefore the amount of options and outcomes of a videogame’s dialogue widely varies. 

Let’s take an example of a very simple branching dialogue system with Rockstar’s _Red Dead Redemption 2(2018)_.
 
![Rdr1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Rdr1.jpg)

![Rdr2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Rdr2.jpg)

![Rdr3](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Rdr3.jpg)
 
In this game, we play as Arthur Morgan, a ninteenth century northamerican bandit, whose development throughout the game is reconsidering the ethics of his criminal lifestyle, and realizing that the crew he has been in his whole life is slowly showing its true colors, as well as falling apart. Given that this game is a prequel to _Red Dead Redemption (2010)_, the game’s ending regardless of your choices must be very similar, so the dialog system of this game does not allow for much freedom. Your actions do influence some moments of the game, but they don’t really do much in the grand scheme of things. In a smaller scale, though, when interacting with an NPC, you often get the option to be nice, be a jerk, or straight up threatening to rob them. In those situations, what you pick decides if you are going to get a bullet through your skull or not. 

Now, a game with multiple complex dialogue options would be _Fallout New Vegas (2010)_, often praised by its smart writing and characterisation. 
 
![fallout1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/fallout1.jpg)

![fallout2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/fallout2.png)

In this game, dialog does two things right: First, it gives a lot of personality to both the main character and the side characters, leading to fun interactions and engaging into the story. And secondly, it affects and is affected by your stats. Using certain dialogue options may increase stats, and high stats may also make you more likely to get out of a tough situation using only words.

Now, for another example, here is a game that had a protagonist of few words yet managed to have quite an intricate and extensive dialogue tree: _Undertale (2015)_. 

_Undertale_ is also famous for having charming and witty dialogue, but dialogue choices don’t really matter at the end of the game. What does matter are your actions. Killing certain characters, entering certain areas or doing certain puzzles leads to new exchanges with characters that add to both the replayability value and the worldbuilding. The game has 3 main routes, but in one of them, the neutral run, which is also the one with the most variation within it, has more than 20 different dialogue strings. For example here, in the same route, Sans may give you an uplifting farewell or actively threatening you if you ever cross paths with him again. 
 
![Undertale1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Undertale1.png)

![Undertale2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Undertale2.png)

![Undertale3](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Undertale3.png)
 
### Unusual dialogue approaches

Whenever I think of a game with a dialogue like I have never seen before, I think of _Façade (2006)_. 

_Façade_ consists of you, the player, visiting a couple for dinner. But the thing is, you don’t have dialogue options. You can actually write anything you want, and they will try to understand you, although 99% of time it will end with them fighting. There are ways to win the game, but you have to carefully think what you are going to say to them. But it’s always fun to start rambling and see how these two react to you and to one another.
 
![Facade1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Facade1.gif)

![Facade2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Facade2.gif)

Another, less bizarre, approach is the one of _Dinner with an Owl (2021)_. 

In this game, you visit the house of the Eerie “Mr Brown”, a man you initially went to discuss business with, but he is an anthropomorphic owl. He lives with some other people, but they seem rather uncomfortable. You start talking to them, and they tell you that Mr Brown is dangerous, so you end up grabbing a knife and killing him. However, when you kill him, you become an owl yourself. And the next day, another employee arrives, and you play as him. Basically, the game traps you in a loop that you need to get out of, and the only way to get out is by talking to all the NPCs to figure out what you need to do. By exploring dialogue options, you end up discovering how to exit the house and free the people in it.  
 
![owl1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/owl1.jpg)

![owl2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/owl2.gif)

Finally, after having talked about different dialogue approaches, let’s focus on one.

## In-depth branching dialogue
To learn how branching dialogue works, we need to introduce the concept of “Dialogue Tree”

![tree1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/tree1.png)

A dialogue tree is a structure of texts that, on each decision, branch out to further the dialogue, revealing new information and often returning to previous points of the conversation.

A dialogue tree is the skeleton that any branching dialogue must follow, it helps illustrate the logic and path that it must operate within. 

Now, to illustrate better how a branching dialogue works, let’s do a small version ourselves. Here is the dialogue tree of the code I have prepared for you. 

![tree2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/tree2.png)
 
What this tree is going to do is:

It will start in “beginning”. After beginning, it will go to the “options”, where the player will have to trigger “option A” or “option B”. Whichever they pick, they will lead to their respective “endings”, and they will also alter the “beginning” node. Therefore, whenever you start the conversation again you will get a different dialogue that leads to no options. 

Let’s get into the code:

This code is structured in “TODOs”. Basically, the reader will be commanded a task that they should try to do by themselves, but if they cannot, each TODO is followed by a picture displaying the solution, and the repository itself has a working visual studio project with the solution to all TODOs. 

First of all, let’s explain the code. The only files that will be needed are DialogueManager.cpp, DialogueManager.h and GuiButton.cpp.

![claseDialogo](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/claseDialogo.png)
 
The “Dialogue” class has a list of strings, which will be the sentences that will be displayed. In this code, space will be used to further the dialogue and change the sentence. When we reach the end of the list, the dialogue ends, and after it, one of three things can happen: The textbox closes and the dialogue ends, we are presented with a selection of options, or another dialogue takes its place. 

We manage all of these dialogues in the dialogue manager. There, we have declared a bunch of dialogues that we will use in the interaction we are going to code. 
 
![DeclaracionDialogo1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/DeclaracionDialogo1.png)

![DeclaracionDialogo2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/DeclaracionDialogo2.png)

In  the dialogue manager, we also have some auxiliary variables and functions, all declared in dialogueManager.h and then defined in dialogueManager.cpp
 
![variablesManager](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/variablesManager.png)

![metodosManager](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/metodosManager.png)
 
Now, let’s start with the TODOs. 
### TODO 1 [Button.cpp]: 
The first step should be setting the dialogue triggers. 
* Button with ID = 1 should enable dialogue
* Button with ID = 2 should reset dialogue
* Hint: Check DialogueManager.h for potential variables or functions with similar names.

![todo1](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/todo1.png)
 
### TODO 2 [DialogueManager.cpp]:
The second step should be drawing the textbox and the text through the renderer, which is already implemented in the app with its own functions. 
* First If statement, the textbox and the current dialogue text should be drawn. 
* Second if statement, in case of a question, the options should be drawn under the current text.
* Hint: Keep in mind this options are not inside the senteceQueue. 
 
![todo2](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/todo2.png)

### TODO 3: [DialogueManager.cpp]:
The third step would be implementing the ability to choose between two options. 
* We will use the keys 1 and 2, detect each input
* For each case, set the progress data type (dialogueProgress enum) to its respective stage and then update the dialogue.
 
![todo3](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/todo3.png)

### TODO 4: [DialogueManager.cpp]:
The fourth step would be implementing each progress case. 
* The first greeting should enable the question state
* The answer cases should set the dialogue to their respective answer dialogues, disable question state and advance the progress stage to the 
  altered “greeting” stage
* The greeting stages should set the dialogue to their respective greeting dialogues, and since they are the final frontier, they should disable 
  dialogue. 

![todo4](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/todo4.png)
 
### TODO 5: [DialogueManager.cpp]:
The final step is substituting the “TRAVELER” in the first “firstQuestion” string by the name of the player (“playerName”).
* Hint: + operator works with strings

![todo5](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/todo5.png)
 
### FINAL RESULT
After all of this is done, the end result should perform the dialog tree formation expressed in the drawing we saw before and it should look like this.
 
![Resultado%20final](https://github.com/StarvinXarvin/Dialog-System/blob/main/docs/Resultado%20final.png)

## POTENTIAL IMPROVEMENTS

Something that would work better for more extensive dialogue systems with more intricate connections and stage progressions would be actual tree data types composed of nodes with parent, child and siblings that can be traveled more easily. With a small dialogue like this, a switch works fine and is faster to do, but on the long term, perhaps a tree would be the wisest option.

Another thing that is worth noting is that the progress stage and the dialogue that is currently set in the sentenceQueue could be saved in a .xml file so that the progress is kept once you close and reopen the program. 

### Small issues
* "firstOption" should be deleted in the CleanUp of DialogueManager.cpp
* Dialogues are set to pointers, but should be set as regular dialogues to prevent memory leaks

## WEBGOGRAPHY

https://www.gamedeveloper.com/design/defining-dialogue-systems

https://en.wikipedia.org/wiki/Dialogue_tree

https://avilgor.github.io/DialogSystem/

https://atenea.upc.edu/pluginfile.php/4743894/mod_resource/content/1/Project%209%20-%20Fonts.pdf

https://atenea.upc.edu/pluginfile.php/5152584/mod_resource/content/1/L15_GUI_System.pdf

https://www.youtube.com/watch?v=_nRzoTzeyxU&ab_channel=Brackeys


      
      
 
