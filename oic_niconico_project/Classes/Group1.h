//
//  Group1.h
//  oic_niconico_project
//
//  Created by ishizuka-k on 2015/02/07.
//
//

#pragma onec

#include "cocos2d.h"

USING_NS_CC;

class Group1:public Node
{
public:
    Group1();
    ~Group1();
    static Group1* create(Point pos);
    bool init(Point pos);

private:
    void menuCallback(cocos2d::Ref* pSender);
    void Member1();
    void Member2();
    void Member3();
    void Member4();
    void Member5();
    void Member6();
    MenuItemLabel *m_pButton;
};
