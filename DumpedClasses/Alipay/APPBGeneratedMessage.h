//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSURLResponse;

@interface APPBGeneratedMessage : PBGeneratedMessage
{
    NSURLResponse *_response;
}

@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)allResponseHeaderFields;
- (void)setUnknownFields:(id)arg1;
- (id)unknownFields;
- (_Bool)parseUnknownField:(id)arg1 unknownFields:(id)arg2 extensionRegistry:(id)arg3 tag:(int)arg4;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)mergeFromCodedInputStream:(id)arg1;
- (void)mergeFromData:(id)arg1;

@end
