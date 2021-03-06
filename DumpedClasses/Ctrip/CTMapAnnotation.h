//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSDictionary, NSString, UIView;

@interface CTMapAnnotation : NSObject <MKAnnotation>
{
    _Bool canShowCallout;
    _Bool canShowRightCalloutAccessoryView;
    _Bool _isFirstView;
    int animateType;
    int _type;
    unsigned long long pinColor;
    NSString *_sID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_display;
    NSString *_comment;
    NSDictionary *_bakeInformation;
    NSString *_leftAccessoryImageName;
    UIView *_leftAccessoryView;
    UIView *_rightAccessoryView;
    struct CLLocationCoordinate2D _coordinate;
}

+ (id)annotation;
+ (id)convertAnotationsToGoogleMapAnotations:(id)arg1;
@property(nonatomic) _Bool isFirstView; // @synthesize isFirstView=_isFirstView;
@property(retain, nonatomic) UIView *rightAccessoryView; // @synthesize rightAccessoryView=_rightAccessoryView;
@property(retain, nonatomic) UIView *leftAccessoryView; // @synthesize leftAccessoryView=_leftAccessoryView;
@property(copy, nonatomic) NSString *leftAccessoryImageName; // @synthesize leftAccessoryImageName=_leftAccessoryImageName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *bakeInformation; // @synthesize bakeInformation=_bakeInformation;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *display; // @synthesize display=_display;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sID; // @synthesize sID=_sID;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) _Bool canShowRightCalloutAccessoryView; // @synthesize canShowRightCalloutAccessoryView;
@property(nonatomic) _Bool canShowCallout; // @synthesize canShowCallout;
@property(nonatomic) int animateType; // @synthesize animateType;
@property(nonatomic) unsigned long long pinColor; // @synthesize pinColor;
- (void).cxx_destruct;
- (void)initBaseView;
- (void)initBaseData;
- (id)init;
- (id)convertToGoogleMapAnotation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

