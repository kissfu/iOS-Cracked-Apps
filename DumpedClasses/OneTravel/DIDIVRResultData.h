//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface DIDIVRResultData : NSObject
{
    NSString *_sid;
    NSMutableArray *_audioResultData;
    NSMutableArray *_audioResultUncertainData;
    NSString *_message;
    long long status;
    NSString *corpus_no;
    long long idx;
    NSString *_globalKey;
    long long resType;
    id _commandData;
    NSString *_corpus_no;
}

@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) id commandData; // @synthesize commandData=_commandData;
@property(nonatomic) long long resType; // @synthesize resType;
@property(retain, nonatomic) NSString *globalKey; // @synthesize globalKey=_globalKey;
@property(nonatomic) long long idx; // @synthesize idx;
@property(retain, nonatomic) NSString *corpus_no; // @synthesize corpus_no=_corpus_no;
@property(nonatomic) long long status; // @synthesize status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSMutableArray *audioResultUncertainData; // @synthesize audioResultUncertainData=_audioResultUncertainData;
@property(retain, nonatomic) NSMutableArray *audioResultData; // @synthesize audioResultData=_audioResultData;
- (void).cxx_destruct;
- (id)init;

@end

