//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NMToplist : NSObject
{
    int _type;
    NSString *_imageUrl;
    NSString *_name;
    NSString *_updateTip;
    NSString *_toplistType;
    long long _position;
    NSObject *_mainObject;
    NSArray *_detailInfo;
}

@property(retain, nonatomic) NSArray *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSObject *mainObject; // @synthesize mainObject=_mainObject;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *toplistType; // @synthesize toplistType=_toplistType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *updateTip; // @synthesize updateTip=_updateTip;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)fillRewardSongsToplistWithDictionary:(id)arg1;
- (void)fillUserToplistWithDictionary:(id)arg1;
- (void)fillArtistToplistWithDictionary:(id)arg1;
- (void)fillSongToplistWithDictionary:(id)arg1;
- (void)fillWithDictionay:(id)arg1 type:(int)arg2;
- (id)initWithDictionay:(id)arg1 type:(int)arg2;

@end
