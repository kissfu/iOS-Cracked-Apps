//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface QLMomentPublishDraftItem : NSObject <NSCoding>
{
    NSMutableArray *_photoList;
    NSString *_textContent;
}

@property(retain, nonatomic) NSString *textContent; // @synthesize textContent=_textContent;
@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
