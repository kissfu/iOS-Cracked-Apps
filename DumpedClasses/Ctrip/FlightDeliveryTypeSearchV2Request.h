//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightDeliveryTypeSearchV2Request : CTBusinessBean
{
    int _serviceVersion;
    int _tripType;
    NSString *_productID;
    NSString *_policyID;
    NSString *_transactionNo;
    NSString *_gUID;
    NSString *_memcacheKey;
}

@property(copy, nonatomic) NSString *memcacheKey; // @synthesize memcacheKey=_memcacheKey;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID=_gUID;
@property(copy, nonatomic) NSString *transactionNo; // @synthesize transactionNo=_transactionNo;
@property(copy, nonatomic) NSString *policyID; // @synthesize policyID=_policyID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

