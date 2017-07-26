//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTFioSearchExtension : CTJSONModel
{
    int _segmentID;
    int _SeatGrade;
    NSString *_dCityCode;
    NSString *_aCityCode;
    NSString *_departTime;
    NSString *_arriveTime;
    NSString *_flightNo;
    NSString *_airlineCode;
    NSString *_departAirportCode;
    NSString *_arriveAirportCode;
    NSString *_departBuildingShortName;
    NSString *_arriveBuildingShortName;
}

@property(copy, nonatomic) NSString *arriveBuildingShortName; // @synthesize arriveBuildingShortName=_arriveBuildingShortName;
@property(copy, nonatomic) NSString *departBuildingShortName; // @synthesize departBuildingShortName=_departBuildingShortName;
@property(copy, nonatomic) NSString *arriveAirportCode; // @synthesize arriveAirportCode=_arriveAirportCode;
@property(copy, nonatomic) NSString *departAirportCode; // @synthesize departAirportCode=_departAirportCode;
@property(nonatomic) int SeatGrade; // @synthesize SeatGrade=_SeatGrade;
@property(copy, nonatomic) NSString *airlineCode; // @synthesize airlineCode=_airlineCode;
@property(copy, nonatomic) NSString *flightNo; // @synthesize flightNo=_flightNo;
@property(copy, nonatomic) NSString *arriveTime; // @synthesize arriveTime=_arriveTime;
@property(copy, nonatomic) NSString *departTime; // @synthesize departTime=_departTime;
@property(copy, nonatomic) NSString *aCityCode; // @synthesize aCityCode=_aCityCode;
@property(copy, nonatomic) NSString *dCityCode; // @synthesize dCityCode=_dCityCode;
@property(nonatomic) int segmentID; // @synthesize segmentID=_segmentID;
- (void).cxx_destruct;
- (id)init;

@end
