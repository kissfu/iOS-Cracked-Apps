//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightSimilarNearAirportSearchRequest : CTBusinessBean
{
    int serviceVersion;
    NSString *keyword;
    int searchMode;
    int channelType;
    long long flag;
}

@property(nonatomic) long long flag; // @synthesize flag;
@property(nonatomic) int channelType; // @synthesize channelType;
@property(nonatomic) int searchMode; // @synthesize searchMode;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

