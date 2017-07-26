//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WBBaseMediaObject, WBImageObject;

@interface WBMessageObject : NSObject
{
    NSString *text;
    WBImageObject *imageObject;
    WBBaseMediaObject *mediaObject;
    long long _msgType;
}

+ (id)messageWithDictionary:(id)arg1;
+ (id)dictionaryWithMessage:(id)arg1;
+ (id)message;
@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) WBBaseMediaObject *mediaObject; // @synthesize mediaObject;
@property(retain, nonatomic) WBImageObject *imageObject; // @synthesize imageObject;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void).cxx_destruct;
- (id)validate;

@end
