//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface QQThirdAppMsgModel : NSObject
{
    NSString *_productID;
    NSString *_thirdAppID;
    NSString *_title;
    NSString *_brief;
    NSURL *_imageURL;
    NSString *_summary;
    NSString *_price;
    NSString *_priceUnit;
    NSString *_msgActionType;
    NSURL *_msgActionURL;
    NSString *_source;
    NSURL *_iconURL;
    NSString *_srcActionType;
    NSString *_actionData;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *actionData; // @dynamic actionData;
@property(retain, nonatomic) NSString *brief; // @dynamic brief;
@property(retain, nonatomic) NSURL *iconURL; // @dynamic iconURL;
@property(retain, nonatomic) NSURL *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) NSString *msgActionType; // @dynamic msgActionType;
@property(retain, nonatomic) NSURL *msgActionURL; // @dynamic msgActionURL;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *priceUnit; // @dynamic priceUnit;
@property(retain, nonatomic) NSString *productID; // @dynamic productID;
@property(retain, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) NSString *srcActionType; // @dynamic srcActionType;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;
@property(retain, nonatomic) NSString *thirdAppID; // @dynamic thirdAppID;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

