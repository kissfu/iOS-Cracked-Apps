//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

#import "NSCoding.h"

@class NSArray<Optional><TRFlightInfoModel>;

@interface TRFlightInfosModel : TRBaseModel <NSCoding>
{
    NSArray<Optional><TRFlightInfoModel> *_flight_info;
}

+ (id)baseFlightModels:(id)arg1;
@property(retain, nonatomic) NSArray<Optional><TRFlightInfoModel> *flight_info; // @synthesize flight_info=_flight_info;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

