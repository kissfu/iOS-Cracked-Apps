//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface NMCountDownLabel : UILabel
{
    _Bool _isEnglishCountHalf;
    long long _maxCount;
    long long _countOffset;
}

+ (long long)stringCount:(id)arg1 transformEmoji:(_Bool)arg2 isEnglishCountHalf:(_Bool)arg3;
+ (long long)stringLength:(id)arg1 isEnglishCountHalf:(_Bool)arg2;
@property(nonatomic) long long countOffset; // @synthesize countOffset=_countOffset;
@property(nonatomic) _Bool isEnglishCountHalf; // @synthesize isEnglishCountHalf=_isEnglishCountHalf;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (long long)stringLength:(id)arg1;
- (void)setCountWithString:(id)arg1 transformEmoji:(_Bool)arg2;
- (void)setCount:(long long)arg1;
- (long long)count;
- (id)initWithMaxCount:(long long)arg1;

@end

