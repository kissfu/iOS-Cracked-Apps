//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FalconAudioProcessor : NSObject
{
}

+ (void)releaseEngine;
+ (id)getFeature:(int *)arg1 featurelength:(int *)arg2;
+ (void)insertData:(id)arg1;
+ (_Bool)init:(int)arg1 delay:(float)arg2 clip:(float)arg3 inter:(float)arg4;

@end
