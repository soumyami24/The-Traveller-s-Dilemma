
# 🕰️ The Traveller's Dilemma
Welcome to The Traveller's Dilemma, a text-based adventure game written in C. You are a physicist who, after a failed experiment with Einstein's Theory of Relativity, is cursed by the God of the Universe. To repay your debt for disturbing the natural order, you must survive five pivotal moments in history, known as epochs.
This game challenges you with riddles, moral choices, and interconnected storylines where your decisions have lasting consequences. With only three lives, you must navigate through time, solve ciphers, and choose your path wisely to avoid being erased from existence.
## ✨ Features
* **Five Unique Eras**: Journey through Ancient Egypt (1300 BCE), the Viking Age (900 CE), Samurai Japan (1582 CE), a dystopian AI future (2099 CE), and the fateful voyage of the Titanic (1912 CE).
* **Dynamic Companion System:** Your choices can lead you to recruit Tariq, a companion whose presence alters puzzles, character interactions, and story outcomes in later eras.
* **Interconnected Storyline:** Clues, characters, and artifacts from one era reappear in others, creating a cohesive and branching narrative.
* **Moral and Philosophical Choices:** The game forces you to make difficult decisions, such as sacrificing a life to save a companion or preserving a tragic historical event to maintain the timeline.
* **Challenging Riddles and Ciphers:** Test your intellect with a series of ciphers and riddles that must be solved to progress. Correct answers must be in all capital letters.
* **AI Coding Puzzles:** In the AI Wars era, you must write and compile simple C code to bypass security systems, adding a unique programming challenge to the game.
## Prerequisites
* A C compiler, such as GCC (MinGW for Windows).
* On Windows, the winmm library is required for sound.
* Sound files (.wav) must be in the same directory as the executable.

## Setup
* Before playing, you must create a few empty files in the same directory as the game executable for the AI Wars era challenges:

* player1.exe
* player2.exe
* output1.txt
* output2.txt

## Compilation
Open your terminal or command prompt and compile the source code.
* **On Windows (with MinGW):**
gcc tds.c -o travellers_dilemma -lwinmm

* **On Linux/macOS (sound functions will need modification):**
gcc tds.c -o travellers_dilemma

## How to Play
When given a choice, enter the corresponding number.

For all ciphers and riddles, your answer must be in CAPITAL LETTERS with no spaces, or it will be marked as incorrect.

## Contact

Created by **Soumya** - Feel free to reach out!
