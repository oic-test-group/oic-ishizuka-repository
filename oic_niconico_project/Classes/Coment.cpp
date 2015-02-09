//
//  Coment.cpp
//  oic_niconico_project
//
//  Created by ishizuka-k on 2015/02/06.
//
//

#include "Coment.h"

Coment::Coment()
{

}

Coment::~Coment()
{

}

Coment* Coment::create(std::string coment,int size,Color4B color)
{
    Coment* pComent = new Coment;

    if ( pComent->init(coment,size,color) ) {
        return pComent;
    }

    return nullptr;
}

bool Coment::init(std::string coment,int size,Color4B color)
{
    //ウィンドウサイズ取得
    Size winSize = Director::getInstance()->getWinSize();
    float fontSize = 0;

    //コメントのサイズ指定
    switch (size) {
        case Coment::SMALL:
            fontSize = 24;
            break;
        case Coment::NOMAL:
            fontSize = 48;
            break;
        case Coment::BIG:
            fontSize = 96;
            break;
        case Coment::RANDAM:
        {
            int randam[3] = {24,36,72};
            fontSize = randam[rand()%3];
            break;
        }
        default:
            fontSize = 36;
            break;
    }

    //コメント作成
    m_pComent = Label::createWithSystemFont(coment, "Arial",fontSize );

    //色指定
    m_pComent->setTextColor(color);

    //コメントの高さ指定
    float fHigh = m_pComent->getContentSize().height*0.5f+rand()%(int)(winSize.height-m_pComent->getContentSize().height*0.5f);

    //位置指定
    m_pComent->setPosition(winSize.width+m_pComent->getContentSize().width*0.5f, fHigh);

    //画面端から端までのアニメーション
    m_pComent->runAction(MoveTo::create(2.5f, Vec2(0-m_pComent->getContentSize().width*0.5f, fHigh)));

    this->addChild(m_pComent);
    this->scheduleUpdate();

    return true;
}

void Coment::update(float delta)
{
    //アニメーションが終わったら削除
    if ( m_pComent->getNumberOfRunningActions() == 0 ) {
        this->removeFromParentAndCleanup(true);
    }
}