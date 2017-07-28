//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ONESocketConnectConfig : NSObject
{
    NSString *_phone;
    NSString *_token;
    NSString *_pushIP;
    NSString *_pushPort;
    NSString *_fileIP;
    NSString *_filePort;
    CDUnknownBlockType _succeedBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
@property(copy, nonatomic) NSString *filePort; // @synthesize filePort=_filePort;
@property(copy, nonatomic) NSString *fileIP; // @synthesize fileIP=_fileIP;
@property(copy, nonatomic) NSString *pushPort; // @synthesize pushPort=_pushPort;
@property(copy, nonatomic) NSString *pushIP; // @synthesize pushIP=_pushIP;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;

@end
