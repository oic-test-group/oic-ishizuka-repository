//
//  Coment.h
//  oic_niconico_project
//
//  Created by ishizuka-k on 2015/02/06.
//
//

#pragma onec

#include "cocos2d.h"

USING_NS_CC;

class Coment:public Node
{
public:
    Coment();
    ~Coment();
    static Coment* create(std::string coment,int size,Color4B color);
    bool init(std::string coment,int size,Color4B color);
    void update(float delta);
    enum{
        SMALL,
        NOMAL,
        BIG,
        RANDAM
    };
private:
    void setString(std::string coment);
    Label *m_pComent;
    std::string m_sComent;
    
};
