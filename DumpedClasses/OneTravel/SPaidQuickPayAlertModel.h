//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPaidAlertModel.h"

@class NSString;

@interface SPaidQuickPayAlertModel : SPaidAlertModel
{
    unsigned long long _quickPayType;
    long long _productLine;
    NSString *_subTitle;
    NSString *_remindMsg;
    NSString *_detail;
}

@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *remindMsg; // @synthesize remindMsg=_remindMsg;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) long long productLine; // @synthesize productLine=_productLine;
@property(nonatomic) unsigned long long quickPayType; // @synthesize quickPayType=_quickPayType;
- (void).cxx_destruct;

@end

