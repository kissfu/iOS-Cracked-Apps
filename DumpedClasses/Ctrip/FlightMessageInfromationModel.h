//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightMessageInfromationModel : CTBusinessBean
{
    int messageType;
    int messageShowType;
    NSString *messageTitle;
    NSString *messageContent;
    NSString *messageUrl;
    NSMutableArray *messageExtentInfoList;
    NSString *campaignCategory;
}

@property(copy, nonatomic) NSString *campaignCategory; // @synthesize campaignCategory;
@property(retain, nonatomic) NSMutableArray *messageExtentInfoList; // @synthesize messageExtentInfoList;
@property(copy, nonatomic) NSString *messageUrl; // @synthesize messageUrl;
@property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent;
@property(copy, nonatomic) NSString *messageTitle; // @synthesize messageTitle;
@property(nonatomic) int messageShowType; // @synthesize messageShowType;
@property(nonatomic) int messageType; // @synthesize messageType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

