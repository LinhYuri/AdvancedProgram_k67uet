#pragma once

#include "gUtils.h"
#include "gGallery.h"
#include "gSound.h"
#include "gScore.h"
#include "gMenu.h"

class gGame : gUtils{
public:
    struct input {
        enum type { QUIT, PLAY, NONE, PAUSE};
        type Type;
    };
    input userInput;
    gBird bird;
    gTree tree;
    gSound sound;
    gBackground background;
    gScore gScore;

    
    gGame();

    ~gGame();

    bool initGraphic();

    bool isQuit() {
        return quit; 
    }

    bool isDie() {
        return die;
    }

    void setDie(bool tmp);

    void takeInput();
    void display();
    void releaseGraphic();
    void renderReady();
    void renderTextScore();
    void renderYourScore();
    void renderBestScore();
    void renderPauseTab();
    void renderGameOver();
    bool checkResume();
    bool checkRestart();
    bool checkQuit_Paused();
    bool checkReplay();
    bool checkQuit_GameOver();
    void Restart();
    
    void run(bool running, bool isMenu, bool isPause, bool isSound);
    void close();

private: 
    int bestScore;
};