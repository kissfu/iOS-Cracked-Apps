//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCOrderFeedbackModel<Optional>;

@interface DCOrderPageInfoModel : JSONModel
{
    DCOrderFeedbackModel<Optional> *_feedback;
}

@property(copy, nonatomic) DCOrderFeedbackModel<Optional> *feedback; // @synthesize feedback=_feedback;
- (void).cxx_destruct;

@end

