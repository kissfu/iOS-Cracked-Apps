//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTProtocol.h"

@class NSString;

@protocol MTNetworkProxyProtocol <MTProtocol>
- (void)reinitMvProxy;
- (void)reinit;
- (void)grabBandwidth:(long long)arg1 forClient:(int)arg2;
- (void)releaseBandwidthForClient:(int)arg1;
- (NSString *)getProxyUrlWithUrl:(NSString *)arg1 withType:(long long)arg2;
@end
