//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SElderTaxiVoiceControl : NSObject
{
}

+ (id)getAppParam;
+ (_Bool)isValidVoiceCarInfo:(id)arg1 withKey:(id)arg2;
+ (id)recognitionFinishAndProvideData:(id)arg1 nbestStr:(id)arg2;
+ (void)recognitionLoadingVoiceData:(id)arg1 dataBlock:(CDUnknownBlockType)arg2;
+ (void)stopVoiceCar;
+ (long long)startDidiVoiceCarWithDelegate:(id)arg1;
+ (void)showRequestRecoderAlert;
+ (void)startVoiceCar:(id)arg1;

@end

