//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FeedbackReportData : NSObject
{
    NSString *_viewName;
    NSString *_bizCode;
    NSString *_bizMsg;
    NSString *_bizUrl;
    NSDictionary *_extParams;
}

@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *bizUrl; // @synthesize bizUrl=_bizUrl;
@property(retain, nonatomic) NSString *bizMsg; // @synthesize bizMsg=_bizMsg;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(retain, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
- (void).cxx_destruct;

@end
