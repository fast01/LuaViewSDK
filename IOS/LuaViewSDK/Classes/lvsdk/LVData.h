//
//  LVData.h
//  LVSDK
//
//  Created by dongxicheng on 2/6/15.
//  Copyright (c) 2015 dongxicheng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LVHeads.h"


//LVData
@interface LVData : NSObject<LVProtocal, LVClassProtocal>

@property(nonatomic,weak) LView* lv_lview;
@property(nonatomic,assign) LVUserDataInfo* lv_userData;

@property(nonatomic,strong) NSMutableData* data;//真实的数据

-(id) init:(lua_State*) l;
+(int) lvClassDefine:(lua_State *)L globalName:(NSString*) globalName;

+(int) createDataObject:(lua_State *)L  data:(NSData*) data;

@end
