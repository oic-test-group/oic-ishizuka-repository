#ifndef __NicoScene_SCENE_H__
#define __NicoScene_SCENE_H__

#include "cocos2d.h"

class NicoScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    void update(float delta);
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(NicoScene);
};

#endif // __NicoScene_SCENE_H__
