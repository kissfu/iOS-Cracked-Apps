//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMLog.h"

@class NSString;

@interface NVMErrorLog : NVMLog
{
    NSString *_errorName;
}

+ (id)errorLogWithName:(id)arg1 params:(id)arg2;
@property(retain, nonatomic) NSString *errorName; // @synthesize errorName=_errorName;
- (void).cxx_destruct;
- (id)childDetailLog;
- (id)init;

@end
