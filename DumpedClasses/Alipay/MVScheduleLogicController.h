//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MVScheduleListViewController;

@interface MVScheduleLogicController : NSObject
{
    MVScheduleListViewController *_viewVC;
}

@property(nonatomic) __weak MVScheduleListViewController *viewVC; // @synthesize viewVC=_viewVC;
- (void).cxx_destruct;
- (void)startSeatPickWithSchedule:(id)arg1 showName:(id)arg2 showId:(id)arg3 cinemaName:(id)arg4 cinemaModel:(id)arg5 endorseOrderId:(id)arg6;
- (void)gotoNormalSeatPick:(id)arg1 showName:(id)arg2 showId:(id)arg3 cinemaName:(id)arg4 endorseOrderId:(id)arg5;
- (id)getWandaUrl:(id)arg1 showName:(id)arg2 showId:(id)arg3 cinemaName:(id)arg4;
- (void)gotoWanDaWorkflow:(id)arg1 showName:(id)arg2 showId:(id)arg3 cinemaName:(id)arg4;

@end
