//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MQPCrashHandler : NSObject
{
    CDUnknownBlockType _handler;
}

+ (void)stopTrack;
+ (void)beginTrackWithHandler:(CDUnknownBlockType)arg1;
+ (void)crashedReason:(id)arg1 andDesc:(id)arg2;
+ (id)shared;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;

@end
