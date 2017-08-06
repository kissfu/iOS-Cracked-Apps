//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DDLogger-Protocol.h"

@class NSString;
@protocol DDLogFormatter;

@interface DDAbstractLogger : NSObject <DDLogger>
{
    id <DDLogFormatter> formatter;
    struct dispatch_queue_s *loggerQueue;
}

- (void).cxx_destruct;
- (_Bool)isOnInternalLoggerQueue;
- (_Bool)isOnGlobalLoggingQueue;
- (id)loggerName;
- (struct dispatch_queue_s *)loggerQueue;
- (void)setLogFormatter:(id)arg1;
- (id)logFormatter;
- (void)logMessage:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
