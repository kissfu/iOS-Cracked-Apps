//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTRequestModel.h"

@class NSNumber, NSString;

@interface WDWendaIcimageLoadmoreRequestModel : TTRequestModel
{
    NSString *_term;
    NSNumber *_offset;
    NSNumber *_count;
}

@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSString *term; // @synthesize term=_term;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end
