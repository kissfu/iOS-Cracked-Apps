//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SDDJEvaluateDidCommentModel : NSObject
{
    long long _star;
    NSMutableArray *_tagList;
    NSString *_context;
}

@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) long long star; // @synthesize star=_star;
- (void).cxx_destruct;
- (id)init;

@end
