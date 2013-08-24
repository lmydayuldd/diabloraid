//
//  PanelSprite.h
//  diablo
//
//  Created by Kosuke Takami on 13/08/17.
//
//

#ifndef __diablo__PanelSprite__
#define __diablo__PanelSprite__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class PanelSprite : public cocos2d::CCSprite
{
    float _deltaY;
    float _velocity;
    bool _willRemoved; //消去されるflag
    CCRect _touchRect;
public:
    PanelSprite(void);
    ~PanelSprite(void);
    
    static PanelSprite* createWithSpriteFrameName(const char *pszSpriteFrameName);
    void setRemoved();
    bool isRemoved();
    void setDeltaY(float deltaY);
    void setPosition(const CCPoint& pos);
    bool move();
    CCRect getTouchRect();
};
#endif /* defined(__diablo__PanelSprite__) */
