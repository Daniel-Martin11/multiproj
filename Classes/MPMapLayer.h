#ifndef HelloCpp_MPMapLayer_h
#define HelloCpp_MPMapLayer_h

#include "cocos2d.h"

USING_NS_CC;

class MPMapLayer : public cocos2d::CCLayer
{
public:
	CREATE_FUNC(MPMapLayer);
    
	virtual bool init();
    
    void titleCallback(CCObject* pSender);
    
private:
    static void antiAliasMap(CCTMXTiledMap * map);
};

#endif
