//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface HLFeedBackDO : NSObject
{
    NSString *_feedBackType;
    NSMutableArray *_feedBackImageURLArray;
    NSString *_feedBackContent;
}

@property(retain, nonatomic) NSString *feedBackContent; // @synthesize feedBackContent=_feedBackContent;
@property(retain, nonatomic) NSMutableArray *feedBackImageURLArray; // @synthesize feedBackImageURLArray=_feedBackImageURLArray;
@property(retain, nonatomic) NSString *feedBackType; // @synthesize feedBackType=_feedBackType;
- (void).cxx_destruct;

@end
