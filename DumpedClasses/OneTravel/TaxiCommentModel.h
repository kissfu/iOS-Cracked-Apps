//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSArray<Optional><TaxiCommentDriverTagModel>, NSNumber<Optional>, NSString<Optional>;

@interface TaxiCommentModel : TaxiBaseModel
{
    NSNumber<Optional> *_pcomplainttype;
    NSString<Optional> *_pcomplaint;
    NSNumber<Optional> *_close;
    NSNumber<Optional> *_is_cmt;
    NSString<Optional> *_cmt_content;
    NSNumber<Optional> *_cmt_style;
    NSString<Optional> *_cmt_level;
    NSNumber<Optional> *_score1;
    NSArray<Optional><TaxiCommentDriverTagModel> *_real_cmt_tags;
    NSString<Optional> *_score1_title;
    NSNumber<Optional> *_terminatetype;
    NSString<Optional> *_terminatecontent;
    NSNumber<Optional> *_driver_cancel;
    NSString<Optional> *_complaint_title;
    NSNumber<Optional> *_is_complaint;
    NSNumber<Optional> *_complaint_invalid;
    NSString<Optional> *_complaint_invalid_reason;
    NSString<Optional> *_complaint;
    NSString<Optional> *_complaint_type;
    NSString<Optional> *_taxiCancelDetail;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *taxiCancelDetail; // @synthesize taxiCancelDetail=_taxiCancelDetail;
@property(copy, nonatomic) NSString<Optional> *complaint_type; // @synthesize complaint_type=_complaint_type;
@property(copy, nonatomic) NSString<Optional> *complaint; // @synthesize complaint=_complaint;
@property(copy, nonatomic) NSString<Optional> *complaint_invalid_reason; // @synthesize complaint_invalid_reason=_complaint_invalid_reason;
@property(retain, nonatomic) NSNumber<Optional> *complaint_invalid; // @synthesize complaint_invalid=_complaint_invalid;
@property(retain, nonatomic) NSNumber<Optional> *is_complaint; // @synthesize is_complaint=_is_complaint;
@property(copy, nonatomic) NSString<Optional> *complaint_title; // @synthesize complaint_title=_complaint_title;
@property(retain, nonatomic) NSNumber<Optional> *driver_cancel; // @synthesize driver_cancel=_driver_cancel;
@property(copy, nonatomic) NSString<Optional> *terminatecontent; // @synthesize terminatecontent=_terminatecontent;
@property(retain, nonatomic) NSNumber<Optional> *terminatetype; // @synthesize terminatetype=_terminatetype;
@property(copy, nonatomic) NSString<Optional> *score1_title; // @synthesize score1_title=_score1_title;
@property(copy, nonatomic) NSArray<Optional><TaxiCommentDriverTagModel> *real_cmt_tags; // @synthesize real_cmt_tags=_real_cmt_tags;
@property(retain, nonatomic) NSNumber<Optional> *score1; // @synthesize score1=_score1;
@property(copy, nonatomic) NSString<Optional> *cmt_level; // @synthesize cmt_level=_cmt_level;
@property(retain, nonatomic) NSNumber<Optional> *cmt_style; // @synthesize cmt_style=_cmt_style;
@property(copy, nonatomic) NSString<Optional> *cmt_content; // @synthesize cmt_content=_cmt_content;
@property(retain, nonatomic) NSNumber<Optional> *is_cmt; // @synthesize is_cmt=_is_cmt;
@property(retain, nonatomic) NSNumber<Optional> *close; // @synthesize close=_close;
@property(copy, nonatomic) NSString<Optional> *pcomplaint; // @synthesize pcomplaint=_pcomplaint;
@property(retain, nonatomic) NSNumber<Optional> *pcomplainttype; // @synthesize pcomplainttype=_pcomplainttype;
- (void).cxx_destruct;

@end

