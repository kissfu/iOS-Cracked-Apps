//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DDXMLElement, NSData, NSString;

@protocol IXMPPCompressor <NSObject>
- (NSData *)unzip:(NSData *)arg1;
- (NSData *)zip:(NSData *)arg1;
- (_Bool)isSetupCompressionSuccess:(DDXMLElement *)arg1;
- (_Bool)isSetupCompressionSuccessNode:(DDXMLElement *)arg1;
- (NSString *)setupCompressionFailureReason:(DDXMLElement *)arg1;
- (_Bool)isSetupCompressionFailureReasonNode:(DDXMLElement *)arg1;
- (_Bool)isSupportCompression:(DDXMLElement *)arg1;
- (_Bool)isSupportCompressionNode:(DDXMLElement *)arg1;
- (DDXMLElement *)generateCompressionRequest;
@end
