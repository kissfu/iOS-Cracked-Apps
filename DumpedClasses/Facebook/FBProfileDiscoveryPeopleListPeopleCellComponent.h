//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@protocol FBProfileDiscoveryPeopleListPeopleCellSectionComponentToolbox;

@interface FBProfileDiscoveryPeopleListPeopleCellComponent : CKCompositeComponent
{
    unsigned long long _index;
    id <FBProfileDiscoveryPeopleListPeopleCellSectionComponentToolbox> _toolbox;
}

+ (id)newWithPerson:(id)arg1 index:(unsigned long long)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)didTapFriendsButton:(id)arg1 person:(id)arg2 button:(id)arg3;
- (void)didTapCell;

@end

