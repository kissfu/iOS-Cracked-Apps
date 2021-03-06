//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface CTH5URLCommand : NSObject
{
    NSString *_callbackTagName;
    NSString *_className;
    NSString *_methodName;
    NSDictionary *_argumentsDict;
}

+ (id)commandFromUrlString:(id)arg1;
@property(readonly, nonatomic) NSDictionary *argumentsDict; // @synthesize argumentsDict=_argumentsDict;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *callbackTagName; // @synthesize callbackTagName=_callbackTagName;
- (void).cxx_destruct;
- (id)initWithCallbackTagName:(id)arg1 className:(id)arg2 methodName:(id)arg3 argumentsDict:(id)arg4;

@end

