//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class MQPSharePayChannelView;

@interface ImmPayPluginSharePay : ImmPayEventPlugin
{
    MQPSharePayChannelView *_channelView;
}

+ (void)load;
@property(retain, nonatomic) MQPSharePayChannelView *channelView; // @synthesize channelView=_channelView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadQRCodeWithDict:(id)arg1;
- (void)loadSocialView:(id)arg1 params:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end
