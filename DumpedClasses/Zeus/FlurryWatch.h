//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryWatch : NSObject
{
}

+ (void)logWatchError:(id)arg1 message:(id)arg2 error:(id)arg3;
+ (void)logWatchError:(id)arg1 message:(id)arg2 exception:(id)arg3;
+ (int)logWatchEvent:(id)arg1 withParameters:(id)arg2;
+ (int)logWatchEvent:(id)arg1;
+ (struct dispatch_queue_s *)queue;
+ (id)apiKey;

@end

