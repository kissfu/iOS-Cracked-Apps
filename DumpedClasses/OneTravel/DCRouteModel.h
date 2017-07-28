//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface DCRouteModel : TRBaseModel
{
    NSString<Optional> *_from_lat;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_route_id;
    NSString<Optional> *_from_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_from_city_id;
    NSString<Optional> *_to_name;
    NSString<Optional> *_to_address;
    NSString<Optional> *_route_status;
    NSString<Optional> *_is_timeout;
    NSString<Optional> *_departure_time;
    NSString<Optional> *_seat_count;
    NSString<Optional> *_sameCity;
    NSString<Optional> *_page_source;
    NSString<Optional> *_date_id;
    NSString<Optional> *_setup_time;
    NSString<Optional> *_to_city_id;
    NSString<Optional> *_business_area;
    NSNumber<Optional> *_first_round_trip_time;
    NSNumber<Optional> *_is_round_trip;
    NSString<Optional> *_round_trip_id;
    NSNumber<Optional> *_is_creatorder_deal;
    NSString<Optional> *_old_route_id;
    NSString<Optional> *_starting_poi_id;
    NSString<Optional> *_dest_poi_id;
    NSString<Optional> *_timezone;
}

@property(copy, nonatomic) NSString<Optional> *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString<Optional> *dest_poi_id; // @synthesize dest_poi_id=_dest_poi_id;
@property(copy, nonatomic) NSString<Optional> *starting_poi_id; // @synthesize starting_poi_id=_starting_poi_id;
@property(copy, nonatomic) NSString<Optional> *old_route_id; // @synthesize old_route_id=_old_route_id;
@property(copy, nonatomic) NSNumber<Optional> *is_creatorder_deal; // @synthesize is_creatorder_deal=_is_creatorder_deal;
@property(copy, nonatomic) NSString<Optional> *round_trip_id; // @synthesize round_trip_id=_round_trip_id;
@property(copy, nonatomic) NSNumber<Optional> *is_round_trip; // @synthesize is_round_trip=_is_round_trip;
@property(copy, nonatomic) NSNumber<Optional> *first_round_trip_time; // @synthesize first_round_trip_time=_first_round_trip_time;
@property(copy, nonatomic) NSString<Optional> *business_area; // @synthesize business_area=_business_area;
@property(copy, nonatomic) NSString<Optional> *to_city_id; // @synthesize to_city_id=_to_city_id;
@property(copy, nonatomic) NSString<Optional> *setup_time; // @synthesize setup_time=_setup_time;
@property(copy, nonatomic) NSString<Optional> *date_id; // @synthesize date_id=_date_id;
@property(copy, nonatomic) NSString<Optional> *page_source; // @synthesize page_source=_page_source;
@property(copy, nonatomic) NSString<Optional> *sameCity; // @synthesize sameCity=_sameCity;
@property(copy, nonatomic) NSString<Optional> *seat_count; // @synthesize seat_count=_seat_count;
@property(copy, nonatomic) NSString<Optional> *departure_time; // @synthesize departure_time=_departure_time;
@property(copy, nonatomic) NSString<Optional> *is_timeout; // @synthesize is_timeout=_is_timeout;
@property(copy, nonatomic) NSString<Optional> *route_status; // @synthesize route_status=_route_status;
@property(copy, nonatomic) NSString<Optional> *to_address; // @synthesize to_address=_to_address;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_city_id; // @synthesize from_city_id=_from_city_id;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
@property(copy, nonatomic) NSString<Optional> *route_id; // @synthesize route_id=_route_id;
@property(copy, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(copy, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(copy, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(copy, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
