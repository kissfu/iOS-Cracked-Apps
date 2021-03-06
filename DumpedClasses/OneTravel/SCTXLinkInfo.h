//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, GPBInt64Array, GPBUInt32Array, NSMutableArray, NSString, SCTXDiffGeoPoints;

@interface SCTXLinkInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32Array *directionsArray; // @dynamic directionsArray;
@property(readonly, nonatomic) unsigned long long directionsArray_Count; // @dynamic directionsArray_Count;
@property(retain, nonatomic) GPBInt32Array *funClassArray; // @dynamic funClassArray;
@property(readonly, nonatomic) unsigned long long funClassArray_Count; // @dynamic funClassArray_Count;
@property(nonatomic) _Bool hasLinkId; // @dynamic hasLinkId;
@property(nonatomic) _Bool hasPoints; // @dynamic hasPoints;
@property(nonatomic) _Bool hasRoadName; // @dynamic hasRoadName;
@property(retain, nonatomic) NSMutableArray *kindArray; // @dynamic kindArray;
@property(readonly, nonatomic) unsigned long long kindArray_Count; // @dynamic kindArray_Count;
@property(nonatomic) long long linkId; // @dynamic linkId;
@property(retain, nonatomic) SCTXDiffGeoPoints *points; // @dynamic points;
@property(retain, nonatomic) GPBInt64Array *roadLinkListArray; // @dynamic roadLinkListArray;
@property(readonly, nonatomic) unsigned long long roadLinkListArray_Count; // @dynamic roadLinkListArray_Count;
@property(copy, nonatomic) NSString *roadName; // @dynamic roadName;
@property(retain, nonatomic) GPBInt32Array *spdClassArray; // @dynamic spdClassArray;
@property(readonly, nonatomic) unsigned long long spdClassArray_Count; // @dynamic spdClassArray_Count;

@end

