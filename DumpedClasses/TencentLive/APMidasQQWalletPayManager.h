//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APMidasQQWalletPayManager : NSObject
{
    CDUnknownBlockType _retBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType retBlock; // @synthesize retBlock=_retBlock;
- (void).cxx_destruct;
- (_Bool)isSupportQQWalletApi;
- (void)payWithPartner:(id)arg1 appId:(id)arg2 tokenId:(id)arg3 nonce:(id)arg4 sign:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)registerApp:(id)arg1;
- (_Bool)handleApplication:(id)arg1 openUrl:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;

@end
