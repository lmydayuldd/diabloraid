//
//  EnemyFactory.h
//  diablo
//
//  Created by Kosuke Takami on 13/09/14.
//
//

#ifndef __diablo__EnemyFactory__
#define __diablo__EnemyFactory__

#include <iostream>
#include "Enemy.h"
#include "EnemyMaster.h"
#include "Floor.h"
#include "FloorEnemyMapMaster.h"

class EnemyFactory{
public:
    static Enemy* getEnemyPanel(Floor* floor); //エネミーパネルを生成して返す。
};

#endif /* defined(__diablo__EnemyFactory__) */
