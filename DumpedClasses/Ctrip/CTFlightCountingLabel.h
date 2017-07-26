//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString, NSTimer;

@interface CTFlightCountingLabel : UILabel
{
    NSString *_format;
    long long _method;
    double _animationDuration;
    CDUnknownBlockType _formatBlock;
    CDUnknownBlockType _attributedFormatBlock;
    CDUnknownBlockType _completionBlock;
    double _startingValue;
    double _destinationValue;
    double _progress;
    double _lastUpdate;
    double _totalTime;
    double _easingRate;
    NSTimer *_timer;
    id <CTFlightLabelCounter> _counter;
}

@property(retain, nonatomic) id <CTFlightLabelCounter> counter; // @synthesize counter=_counter;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property double easingRate; // @synthesize easingRate=_easingRate;
@property double totalTime; // @synthesize totalTime=_totalTime;
@property double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property double progress; // @synthesize progress=_progress;
@property double destinationValue; // @synthesize destinationValue=_destinationValue;
@property double startingValue; // @synthesize startingValue=_startingValue;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType attributedFormatBlock; // @synthesize attributedFormatBlock=_attributedFormatBlock;
@property(copy, nonatomic) CDUnknownBlockType formatBlock; // @synthesize formatBlock=_formatBlock;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (double)currentValue;
- (void)runCompletionBlock;
- (void)setTextValue:(double)arg1;
- (void)updateValue:(id)arg1;
- (void)countFrom:(double)arg1 to:(double)arg2 withDuration:(double)arg3;

@end
