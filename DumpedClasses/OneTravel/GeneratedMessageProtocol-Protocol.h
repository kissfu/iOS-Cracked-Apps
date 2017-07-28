//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBMessage.h"

@class NSData, NSInputStream, PBCodedInputStream, PBExtensionRegistry;

@protocol GeneratedMessageProtocol <PBMessage>
+ (id <GeneratedMessageProtocol>)parseFromCodedInputStream:(PBCodedInputStream *)arg1 extensionRegistry:(PBExtensionRegistry *)arg2;
+ (id <GeneratedMessageProtocol>)parseFromCodedInputStream:(PBCodedInputStream *)arg1;
+ (id <GeneratedMessageProtocol>)parseFromInputStream:(NSInputStream *)arg1 extensionRegistry:(PBExtensionRegistry *)arg2;
+ (id <GeneratedMessageProtocol>)parseFromInputStream:(NSInputStream *)arg1;
+ (id <GeneratedMessageProtocol>)parseFromData:(NSData *)arg1 extensionRegistry:(PBExtensionRegistry *)arg2;
+ (id <GeneratedMessageProtocol>)parseFromData:(NSData *)arg1;
@end
