//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseModel.h"

@class DBShareModel<Optional>, DCBlueBarApiModel<Optional>, DCIncreaseThankPriceModel<Optional>, DCNoteInfoModel<Optional>, DCOrderListAdModel<Optional>, DCOrderSlowSendModel<Optional>, DCPOrderInfoModel<Optional>, DCPWDHeaderExtraInfoApiModel<Optional>, DCPWDOpenGuideApiModel<Optional>, DCTravelInfoModel<Optional>, NSArray<Optional><DCPWDCancelOrderModel>, NSArray<Optional><DCRouteOrderListSectionModel>, NSString<Optional>;

@interface DCPWDModel : DCBaseModel
{
    NSString<Optional> *_title;
    DCNoteInfoModel<Optional> *_title_desc_top;
    NSString<Optional> *_is_show_sort;
    NSArray<Optional><DCPWDCancelOrderModel> *_terminate_actions;
    DCNoteInfoModel<Optional> *_wait_text;
    NSString<Optional> *_wait_icon;
    NSString<Optional> *_route_button_status;
    DBShareModel<Optional> *_share;
    DCIncreaseThankPriceModel<Optional> *_increase;
    DCPOrderInfoModel<Optional> *_order_info;
    DCTravelInfoModel<Optional> *_travel_info;
    DCOrderListAdModel<Optional> *_list_ad;
    DCOrderSlowSendModel<Optional> *_low_right_icon;
    NSArray<Optional><DCRouteOrderListSectionModel> *_section_list;
    DCPWDHeaderExtraInfoApiModel<Optional> *_header_extra_info;
    NSString<Optional> *_model_type;
    NSString<Optional> *_model_status;
    NSString<Optional> *_is_station;
    DCNoteInfoModel<Optional> *_header_desc;
    DCNoteInfoModel<Optional> *_to_desc;
    DCBlueBarApiModel<Optional> *_tab_tip;
    DCPWDOpenGuideApiModel<Optional> *_open_model;
    DCNoteInfoModel<Optional> *_price_note_info;
}

@property(copy, nonatomic) DCNoteInfoModel<Optional> *price_note_info; // @synthesize price_note_info=_price_note_info;
@property(copy, nonatomic) DCPWDOpenGuideApiModel<Optional> *open_model; // @synthesize open_model=_open_model;
@property(copy, nonatomic) DCBlueBarApiModel<Optional> *tab_tip; // @synthesize tab_tip=_tab_tip;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *to_desc; // @synthesize to_desc=_to_desc;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *header_desc; // @synthesize header_desc=_header_desc;
@property(copy, nonatomic) NSString<Optional> *is_station; // @synthesize is_station=_is_station;
@property(copy, nonatomic) NSString<Optional> *model_status; // @synthesize model_status=_model_status;
@property(copy, nonatomic) NSString<Optional> *model_type; // @synthesize model_type=_model_type;
@property(copy, nonatomic) DCPWDHeaderExtraInfoApiModel<Optional> *header_extra_info; // @synthesize header_extra_info=_header_extra_info;
@property(copy, nonatomic) NSArray<Optional><DCRouteOrderListSectionModel> *section_list; // @synthesize section_list=_section_list;
@property(copy, nonatomic) DCOrderSlowSendModel<Optional> *low_right_icon; // @synthesize low_right_icon=_low_right_icon;
@property(copy, nonatomic) DCOrderListAdModel<Optional> *list_ad; // @synthesize list_ad=_list_ad;
@property(copy, nonatomic) DCTravelInfoModel<Optional> *travel_info; // @synthesize travel_info=_travel_info;
@property(copy, nonatomic) DCPOrderInfoModel<Optional> *order_info; // @synthesize order_info=_order_info;
@property(copy, nonatomic) DCIncreaseThankPriceModel<Optional> *increase; // @synthesize increase=_increase;
@property(copy, nonatomic) DBShareModel<Optional> *share; // @synthesize share=_share;
@property(copy, nonatomic) NSString<Optional> *route_button_status; // @synthesize route_button_status=_route_button_status;
@property(copy, nonatomic) NSString<Optional> *wait_icon; // @synthesize wait_icon=_wait_icon;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *wait_text; // @synthesize wait_text=_wait_text;
@property(copy, nonatomic) NSArray<Optional><DCPWDCancelOrderModel> *terminate_actions; // @synthesize terminate_actions=_terminate_actions;
@property(copy, nonatomic) NSString<Optional> *is_show_sort; // @synthesize is_show_sort=_is_show_sort;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *title_desc_top; // @synthesize title_desc_top=_title_desc_top;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

