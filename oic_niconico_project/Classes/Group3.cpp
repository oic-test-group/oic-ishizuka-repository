//
//  Group3.cpp
//  oic_niconico_project
//
//  Created by ishizuka-k on 2015/02/07.
//
//

#include "Coment.h"
#include "Group3.h"

Group3::Group3()
{

}

Group3::~Group3()
{

}

Group3* Group3::create(Point pos)
{
    Group3* pGroup3 = new Group3;

    if ( pGroup3->init(pos) ) {
        return pGroup3;
    }

    return nullptr;
}

bool Group3::init(Point pos)
{
    //ウィンドウサイズ取得
    Size winSize = Director::getInstance()->getWinSize();

    Label* pLabel = Label::createWithSystemFont("Group3", "Arial",36 );

    m_pButton = MenuItemLabel::create(pLabel, CC_CALLBACK_1(Group3::menuCallback,this));

    m_pButton->setPosition(pos);

    auto menu = Menu::create(m_pButton, NULL);
    menu->setPosition(Vec2::ZERO);

    this->addChild(menu);

    return true;
}

/**
 menuCallback関数に
 自分が編集したMember関数を下記の用に追加する。
 void Group4::menuCallback(cocos2d::Ref *pSender)
 {
    Member1();
 }
 */
void Group3::menuCallback(cocos2d::Ref *pSender)
{
    Member1();
    Member2();
    Member3();
    Member4();
    Member5();
    Member6();
}

/**
 個人のコメントを生成
 Coment::create("コメントの文字列",文字のサイズ,文字の色)
 文字列の指定方法
 "文字列"
 文字のサイズの指定方法
 Coment::NOMAL      //普通のサイズ
 Coment::SMALL      //小さめのサイズ
 Coment::BIG        //大きめのサイズ
 Coment::RANDAM     //上３つからランダムで表示
 文字の色の指定方法
 Color4B::WHITE     //白
 Color4B::YELLOW    //黄色
 Color4B::RED       //赤
 Color4B::BLUE      //青
 Color4B::GREEN     //緑
 指定方法以外のものを入力するとエラーになってしまうので
 プルリクエストの際にリーダーがチェックして間違っている場合は承認しない
 */
void Group3::Member1()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::BLUE);
    this->addChild(pComent);
}

void Group3::Member2()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::WHITE);
    this->addChild(pComent);
}

void Group3::Member3()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::WHITE);
    this->addChild(pComent);
}

void Group3::Member4()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::WHITE);
    this->addChild(pComent);
}

void Group3::Member5()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::WHITE);
    this->addChild(pComent);
}

void Group3::Member6()
{
    //コメント生成
    Coment* pComent = Coment::create("Group3", Coment::NOMAL,Color4B::WHITE);
    this->addChild(pComent);
}