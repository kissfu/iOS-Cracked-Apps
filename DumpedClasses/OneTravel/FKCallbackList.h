//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FKCallbackList : NSObject
{
    NSMutableDictionary *_callbacks;
}

@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
- (void).cxx_destruct;
- (CDUnknownBlockType)getCallback:(id)arg1;
- (id)setCallback:(CDUnknownBlockType)arg1;
- (id)init;

@end
