//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CTFlightDataManager : NSObject
{
    double _lastServiceTime;
    NSMutableDictionary *_dicAirportData;
    NSMutableDictionary *_dicTimeZone;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *dicTimeZone; // @synthesize dicTimeZone=_dicTimeZone;
@property(retain, nonatomic) NSMutableDictionary *dicAirportData; // @synthesize dicAirportData=_dicAirportData;
@property double lastServiceTime; // @synthesize lastServiceTime=_lastServiceTime;
- (void).cxx_destruct;
- (void)setTimeZone:(id)arg1 forCity:(id)arg2;
- (id)getTimeZoneForCityWithoutDefault:(id)arg1;
- (id)getTimeZoneForCity:(id)arg1;
- (id)getFlightAirportNameByAirportCode:(id)arg1;
- (void)preloadAirportData;
- (id)init;
- (void)dealloc;

@end
