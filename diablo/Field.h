//
//  Field.h
//  diablo
//
//  Created by Kosuke Takami on 13/08/18.
//
//

#ifndef __diablo__Field__
#define __diablo__Field__

#include <iostream>
#include "cocos2d.h"
#include "PanelSprite.h"
using namespace cocos2d;

class Field {
    const float PANEL_SIZE = 64;
    const float PANEL_SCALE = 0.8;
    CCLayer* _parentLayer;
    CCArray* _panelNames;
    CCArray* _panels;
    CCArray* _removedPanels;
    CCArray* _touchedPanels; //タッチされたパネルを順に格納する。
    PanelSprite* _lastPanel;
    PanelSprite* _currentPanel;
    std::string _touchedPanelName;
    bool _moveState;
public:
    Field(CCLayer *parentLayer);
    ~Field(void);
    
    CCArray* createInitialField();
    CCArray* getPanels();
    void onTouchMove(CCTouch* touch);
    void onTouchStart(CCTouch* touch);
    void onTouchEnd(CCTouch* touch);
    void showDirections(); //今まさに消えんとしているパネルの上に、方向を表示する。
    bool getOnTurn();
    void onTurnStart();
    void onTurnEnd();
    CCArray* getRemovedPanels();
    void setRemovedPanel(CCPoint* point);
    void setMoves();
    PanelSprite* createPanel(int indexX, int indexY);
    void removePanels();
    void restockPanels();
    void movePanels();
    void closeUp();
};

#endif /* defined(__diablo__Field__) */
