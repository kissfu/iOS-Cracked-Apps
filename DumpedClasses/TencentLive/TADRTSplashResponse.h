//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TADBaseResponse.h"

@class NSString;

@interface TADRTSplashResponse : TADBaseResponse
{
    NSString *_selectedOrderId;
    NSString *_dateStr;
    NSString *_loc;
}

@property(copy, nonatomic) NSString *loc; // @synthesize loc=_loc;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(copy, nonatomic) NSString *selectedOrderId; // @synthesize selectedOrderId=_selectedOrderId;
- (void).cxx_destruct;
- (id)selectedSplashAdItem;
- (id)initWithResponse:(id)arg1;

@end

