//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSofaBaseModel.h"

@class SSofaStartAndEndTimeModel<Optional>;

@interface SSofaWorkingAndWeekendModel : SSofaBaseModel
{
    SSofaStartAndEndTimeModel<Optional> *_morning;
    SSofaStartAndEndTimeModel<Optional> *_afternoon;
    SSofaStartAndEndTimeModel<Optional> *_allDay;
}

@property(retain, nonatomic) SSofaStartAndEndTimeModel<Optional> *allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) SSofaStartAndEndTimeModel<Optional> *afternoon; // @synthesize afternoon=_afternoon;
@property(retain, nonatomic) SSofaStartAndEndTimeModel<Optional> *morning; // @synthesize morning=_morning;
- (void).cxx_destruct;

@end

