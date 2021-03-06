//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCELiveShowRoomEntranceInfo;

@interface QLJCELiveShowRoomInfo : JceObjectV2
{
    _Bool jcev2_p_0_r_hasShowRoom;
    QLJCELiveShowRoomEntranceInfo *jcev2_p_1_o_entranceInfo;
    NSString *jcev2_p_2_o_backgroundImageUrl;
    NSString *jcev2_p_3_o_dollsH5Url;
    NSString *jcev2_p_4_o_playIntroductionH5Url;
    NSString *jcev2_p_5_o_storeRedDotPollKey;
    NSString *jcev2_p_6_o_storeH5Url;
    NSString *jcev2_p_7_o_rankTitle;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_rankTitle, setter=setJce_rankTitle:) NSString *jcev2_p_7_o_rankTitle; // @synthesize jcev2_p_7_o_rankTitle;
@property(retain, nonatomic, getter=jce_storeH5Url, setter=setJce_storeH5Url:) NSString *jcev2_p_6_o_storeH5Url; // @synthesize jcev2_p_6_o_storeH5Url;
@property(retain, nonatomic, getter=jce_storeRedDotPollKey, setter=setJce_storeRedDotPollKey:) NSString *jcev2_p_5_o_storeRedDotPollKey; // @synthesize jcev2_p_5_o_storeRedDotPollKey;
@property(retain, nonatomic, getter=jce_playIntroductionH5Url, setter=setJce_playIntroductionH5Url:) NSString *jcev2_p_4_o_playIntroductionH5Url; // @synthesize jcev2_p_4_o_playIntroductionH5Url;
@property(retain, nonatomic, getter=jce_dollsH5Url, setter=setJce_dollsH5Url:) NSString *jcev2_p_3_o_dollsH5Url; // @synthesize jcev2_p_3_o_dollsH5Url;
@property(retain, nonatomic, getter=jce_backgroundImageUrl, setter=setJce_backgroundImageUrl:) NSString *jcev2_p_2_o_backgroundImageUrl; // @synthesize jcev2_p_2_o_backgroundImageUrl;
@property(retain, nonatomic, getter=jce_entranceInfo, setter=setJce_entranceInfo:) QLJCELiveShowRoomEntranceInfo *jcev2_p_1_o_entranceInfo; // @synthesize jcev2_p_1_o_entranceInfo;
@property(nonatomic, getter=jce_hasShowRoom, setter=setJce_hasShowRoom:) _Bool jcev2_p_0_r_hasShowRoom; // @synthesize jcev2_p_0_r_hasShowRoom;
- (void).cxx_destruct;
- (id)init;

@end

