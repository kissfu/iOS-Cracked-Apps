//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface DISocketDataTaxi : NSObject
{
    NSTimer *_passengerLocationTimer;
    NSTimer *_pollingNearDriversTimer;
    NSTimer *_pollOneDrieversTimer;
    CDUnknownBlockType _taxiBlcok;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType taxiBlcok; // @synthesize taxiBlcok=_taxiBlcok;
@property(retain, nonatomic) NSTimer *pollOneDrieversTimer; // @synthesize pollOneDrieversTimer=_pollOneDrieversTimer;
@property(retain, nonatomic) NSTimer *pollingNearDriversTimer; // @synthesize pollingNearDriversTimer=_pollingNearDriversTimer;
@property(retain, nonatomic) NSTimer *passengerLocationTimer; // @synthesize passengerLocationTimer=_passengerLocationTimer;
- (void).cxx_destruct;

@end

