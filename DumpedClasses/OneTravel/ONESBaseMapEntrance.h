//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONESBaseMapEntranceProtocol.h"

@class DGPPointAnnotation, NSArray, NSMutableArray, NSString, ONESBaseMapEntranceAdapter, ONESBaseUserLocation, ONESMapServiceConfig, ONEUserAnnotationsBussniess, UIView;

@interface ONESBaseMapEntrance : NSObject <ONESBaseMapEntranceProtocol>
{
}

+ (void)cleanContextForVC:(id)arg1;
+ (void)setupContextForVC:(id)arg1;
+ (id)mapEntranceWith:(id)arg1;
+ (id)mapEntranceFor:(id)arg1 config:(id)arg2;
+ (id)mapEntranceFor:(id)arg1;
+ (void)destoryMapEntranceFor:(id)arg1;
+ (void)bingMapEntrance:(id)arg1 withContainer:(id)arg2;
+ (void)priDestoryMapEntrance:(id)arg1;
+ (id)priCreateMapEntrance:(id)arg1 config:(id)arg2;
+ (id)priCreateMapEntrance:(id)arg1;
+ (id)priGetMapEntrance:(id)arg1;
@property(nonatomic, getter=isCameraViewEnabled) _Bool cameraViewEnabled;
- (void)setLocationOverlayHidden:(_Bool)arg1;
- (void)setIsEraseRouteMode:(_Bool)arg1;
- (CDStruct_02837cd9)getRouteLineLeftVisibleRect:(int)arg1;
@property(nonatomic, getter=isRoadEnlargementViewEnabled) _Bool roadEnlargementViewEnabled;
@property(nonatomic, getter=isLaneViewEnabled) _Bool laneViewEnabled;
- (void)setIsLightNavigating:(_Bool)arg1;
- (struct CGRect)getPolyRect;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2 usingSrcCoor:(struct CLLocationCoordinate2D *)arg3;
- (double)maxFontSizeThatFitsForString:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 size:(struct CGSize *)arg4 maxFontSize:(double)arg5 minFontSize:(double)arg6;
- (CDStruct_b7cb895d)getMaxRectInPolygon:(struct CLLocationCoordinate2D *)arg1 count:(int)arg2;
- (void)recoverBestViewAnimated:(_Bool)arg1;
- (void)removePolyline;
- (void)drawLineUsingPoints:(id)arg1;
- (void)updateMapEntranceLanguage:(unsigned long long)arg1;
- (CDStruct_b7cb895d)ONESCoordinateRegionMakeWithDistance:(struct CLLocationCoordinate2D)arg1 withlatMeter:(double)arg2 lngMeter:(double)arg3;
- (_Bool)ONESMapRectContainsRect:(CDStruct_02837cd9)arg1 rect2:(CDStruct_02837cd9)arg2;
- (_Bool)ONESMapRectContainsPoint:(CDStruct_02837cd9)arg1 point:(CDStruct_c3b9c2ee)arg2;
- (_Bool)ONESMapRectIsValid:(CDStruct_02837cd9)arg1;
- (_Bool)ONESMapSizeIsValid:(CDStruct_c3b9c2ee)arg1;
- (_Bool)ONESCoordinateRegionIsValid:(CDStruct_b7cb895d)arg1;
- (struct CLLocationCoordinate2D)ONESCoordinateForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)ONESMapPointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (CDStruct_b7cb895d)ONESCoordinateRegionWithMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)ONESMapRectWithCoordinateRegion:(CDStruct_b7cb895d)arg1;
- (void)updateUserLocationCalloutview:(id)arg1;
- (void)setRouteDrawType:(unsigned long long)arg1 routeIndex:(long long)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawCap:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setRouteDrawTexture:(id)arg1 param2:(double)arg2 routeIndex:(long long)arg3 routeGroupIndex:(long long)arg4 routeDrawType:(unsigned long long)arg5;
- (void)setHighLightRoute:(_Bool)arg1 routeIndex:(int)arg2 routeGroupIndex:(long long)arg3;
- (void)setMapMaskColor:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 layer:(long long)arg5 curveType:(long long)arg6 animateSecond:(double)arg7;
- (id)getImageFilePathFlag:(id)arg1;
- (int)getNavigationRouteGroupIndex;
- (void)updateUserLocationDispLevel:(int)arg1;
- (void)updateAnnotationDispLevel:(id)arg1 dispLevel:(int)arg2;
- (void)refreshCenterCoordinatePoint;
- (void)setTrafficColor:(unsigned int)arg1 blockColor:(unsigned int)arg2 unBlockColor:(unsigned int)arg3 extremeBlockColor:(unsigned int)arg4;
- (_Bool)removeWalkRoute;
- (void)stopWalkNavigation;
- (_Bool)startWalkNavigation:(_Bool)arg1;
- (void)showWalkSearchRoute:(id)arg1 automaticAjustVisibleMapRect:(_Bool)arg2;
- (void)showWalkSearchRoute:(id)arg1;
- (void)continueNavigation;
- (_Bool)removeRoute;
- (void)stopNavigation;
@property(nonatomic) struct UIEdgeInsets edgePaddingFor2DNorthOverView;
- (void)setMapNaviShowMode:(long long)arg1;
@property(nonatomic) _Bool forbidRecaculate;
@property(readonly, nonatomic) _Bool isWalkNavigation;
@property(readonly, nonatomic) _Bool isNavigation;
- (id)getRouteLineInfo;
- (void)createSearchRoute:(id)arg1;
- (void)showSearchRouteAfterCreate:(id)arg1 lineArray:(id)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(id)arg1 lineArray:(id)arg2;
- (void)showSearchRoute:(id)arg1 routeColor:(long long)arg2 automaticAjustVisibleMapRect:(_Bool)arg3;
- (void)showSearchRoute:(id)arg1 routeColor:(long long)arg2;
- (_Bool)startCarpoolNavigation:(_Bool)arg1;
- (void)startNavigation:(_Bool)arg1;
- (void)startNavigation;
- (void)showRoute:(struct CLLocationCoordinate2D *)arg1 withCount:(int)arg2;
- (int)routeCount;
- (_Bool)removeRouteOverlayGroupByIndex:(long long)arg1;
- (_Bool)removeRouteOverlayGroup:(id)arg1;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 footPrintSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 arrowSpacing:(double)arg2;
- (void)updateRouteOverlayGroupIndex:(long long)arg1 dispLevel:(int)arg2;
- (void)updateRouteOverlayGroup:(id)arg1 dispLevel:(int)arg2;
- (_Bool)addRouteOverlayGroup:(id)arg1;
- (_Bool)addRouteOverlay:(id)arg1 routeOverlayGroup:(id)arg2;
- (void)removeContextSubView:(id)arg1;
- (void)registerContextSubView:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (_Bool)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (_Bool)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (_Bool)containsObject:(id)arg1;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 alpha:(double)arg2;
- (void)updateAnnotations:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 angle:(double)arg3 duration:(double)arg4 animated:(_Bool)arg5;
- (void)updateAnnotation:(id)arg1 imageName:(id)arg2 drawMode:(unsigned long long)arg3;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2 duration:(double)arg3 animated:(_Bool)arg4;
- (void)updateAnnotations:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotation:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (void)updateAnnotation:(id)arg1 angle:(double)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (_Bool)removeTextAnnotation:(id)arg1;
- (void)bringTextAnnotationToFront:(id)arg1;
- (_Bool)addTextAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (_Bool)removeAnnotation:(id)arg1;
- (_Bool)addAnnotations:(id)arg1;
- (_Bool)removeTileOverlay:(id)arg1;
- (_Bool)addTileOverlay:(id)arg1;
- (_Bool)addAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (CDStruct_02837cd9)mapRectMake:(struct CLLocationCoordinate2D)arg1 withZoomlevel:(double)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatContainsCalloutView:(CDStruct_02837cd9)arg1;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1;
- (_Bool)setRectLog:(CDStruct_02837cd9)arg1;
- (_Bool)checkIsValidQMapRectInChina:(CDStruct_02837cd9)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(int)arg2 animated:(_Bool)arg3 curveType:(long long)arg4 duration:(double)arg5 focusEffect:(_Bool)arg6;
- (void)setVisibleMapRectContainsCalloutView:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animationType:(long long)arg3 duration:(double)arg4 focusEffect:(_Bool)arg5;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3 on2d:(_Bool)arg4;
- (void)setVisibleMapRectWithAnnotations:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
- (CDStruct_b7cb895d)regionThatFits:(CDStruct_b7cb895d)arg1;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_b7cb895d region;
- (void)log:(id)arg1;
- (id)takeCarPlaceAnnotationLog;
- (void)setCenterOffsetY:(double)arg1 curveType:(long long)arg2 duration:(double)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 edgePadding:(struct UIEdgeInsets)arg3 animated:(_Bool)arg4;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 animated:(_Bool)arg3;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
@property(readonly, nonatomic) double mapScale;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double zoomLevel;
@property(readonly, nonatomic) id <ONESBaseUserLocationViewProtocol> userLocationView;
- (void)showsUserLocation:(_Bool)arg1 withMapCenter:(_Bool)arg2;
@property(readonly, nonatomic) ONESBaseUserLocation *userLocation;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsRegion:(CDStruct_b7cb895d)arg1;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)mapScaleFitsMapRect:(CDStruct_02837cd9)arg1;
- (long long)zoomLevelFitsRegion:(CDStruct_b7cb895d)arg1;
- (long long)zoomLevelFitsMapRect:(CDStruct_02837cd9)arg1;
- (void)zoomOutOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomInOnPoint:(double)arg1 y:(double)arg2 animated:(_Bool)arg3;
- (void)zoomOut;
- (void)zoomIn;
- (_Bool)openglAnnoView;
- (_Bool)isMapMoving;
- (_Bool)zoomLevelManualChanged;
- (void)stopTrakingModeFollowWithHeading;
- (void)startTrackingModeFollowWithHeading;
- (void)startTrackingModeFollow;
- (void)setCompassYOffSet:(double)arg1;
- (void)setLogoOffSet:(struct CGPoint)arg1;
@property(nonatomic) _Bool showsUserLocation;
@property(nonatomic) struct CGPoint centerCoordinatePoint;
@property(nonatomic) _Bool keepCallout;
@property(nonatomic) double centerOffsetY;
@property(nonatomic) unsigned long long userTrackingMode;
@property(nonatomic) long long mapType;
@property(nonatomic) _Bool disable3DBuildingEffect;
@property(readonly, nonatomic) _Bool userLocationVisible;
@property(nonatomic) _Bool hideAccuracyCircle;
@property(nonatomic) _Bool showTraffic;
@property(nonatomic) _Bool showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest;
@property(nonatomic) _Bool showsScale;
@property(nonatomic) _Bool show3D;
@property(nonatomic) _Bool showsCompass;
@property(nonatomic) _Bool stayCenteredDuringZoom;
@property(nonatomic) _Bool pitchEnabled;
@property(nonatomic) long long lineWidth;
@property(nonatomic) _Bool longPressedEnabled;
@property(nonatomic) _Bool rotateEnabled;
@property(nonatomic) _Bool scrollEnabled;
@property(nonatomic) _Bool zoomEnabled;
@property(readonly, nonatomic) UIView *mapViewObject;
@property(nonatomic) _Bool isActive;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic, getter=mapConfig) ONESMapServiceConfig *mapConfig;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1;
- (void)restoreContext:(_Bool)arg1;
- (void)hideContext:(_Bool)arg1;
- (void)cleanContext;
- (void)removeAllObjects;
- (void)mapHibernate;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)dealloc;
- (void)adaptRouteOverlayGroup:(id)arg1;
@property(retain, nonatomic) ONESBaseMapEntranceAdapter *mapAdapterInstance;
- (id)initWithAdapter:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)setConfigModel:(id)arg1;
- (id)configModel;
- (void)setMoveBussiness:(id)arg1;
- (id)moveBussiness;
- (id)getDriverAnnotationsArray;
- (void)smoothMoveBussiness:(id)arg1 updateCalloutView:(id)arg2 withDriverId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)smoothMoveBussiness:(id)arg1 createCalloutView:(CDUnknownBlockType)arg2 withDriverId:(id)arg3;
- (void)smoothMoveBussiness:(id)arg1 requireData:(CDUnknownBlockType)arg2;
- (void)reloadCalloutViewWithDid:(id)arg1;
- (void)reloadAllCalloutView;
- (void)hideCalloutView:(id)arg1;
- (void)setCalloutView:(id)arg1 withDid:(id)arg2 animated:(_Bool)arg3 selected:(_Bool)arg4;
- (void)setCalloutView:(id)arg1 withDid:(id)arg2 animated:(_Bool)arg3;
- (void)setCalloutView:(id)arg1 withDid:(id)arg2;
- (id)driverAnnotationWithDid:(id)arg1;
- (void)startSmoothMoveWithDataQuery:(CDUnknownBlockType)arg1;
- (void)updateSmoothMoveConfigWithModel:(id)arg1;
- (void)updateSmoothMoveWithPoints:(id)arg1 animated:(_Bool)arg2;
- (void)updateSmoothMoveWithPoints:(id)arg1;
- (void)stopSmoothMove;
- (void)pauseSmoothMove;
- (void)resumeSmoothMove;
- (void)startOrUpdateSmoothMoveWithConfigWithModel:(id)arg1 points:(id)arg2 animated:(_Bool)arg3 dataQuery:(CDUnknownBlockType)arg4;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)drawLineAndAnnotationUsingData:(id)arg1;
- (void)cleanOldData;
- (id)noWalkingOverlay:(id)arg1;
- (id)interOverlayRoutes:(id)arg1;
- (_Bool)canMakeOverlay:(id)arg1;
- (_Bool)equalCoor:(struct CLLocationCoordinate2D)arg1 toCoor:(struct CLLocationCoordinate2D)arg2;
- (id)walkingOverlay:(id)arg1;
- (id)addRouteOverlayWalking:(id)arg1;
- (id)addRouteOverlay:(id)arg1;
- (void)dgpLineDetailStationPinWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)addAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3 withExit:(id)arg4;
- (void)addBusAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3 withLayoutModel:(id)arg4;
- (void)addSubWayAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3 withLayoutModel:(id)arg4;
- (void)addAnnotationTransferLocaltion:(id)arg1 toStopModel:(id)arg2 withLoactionType:(unsigned long long)arg3 withLayoutModel:(id)arg4 isTransfer:(_Bool)arg5 isBus:(_Bool)arg6 isSubWay:(_Bool)arg7;
- (void)addAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3 withLayoutModel:(id)arg4 getOn:(id)arg5 getOff:(id)arg6 isBus:(_Bool)arg7;
- (void)addAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3 withLayoutModel:(id)arg4 entranceModel:(id)arg5 exitModel:(id)arg6 isSubWay:(_Bool)arg7 segmentViewModel:(id)arg8;
- (void)didiLocationStoreUpdateHeading;
- (void)geoManagerDidUpdateGeoData;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)addAnnotationWitRouteLineViewModel:(id)arg1 selectedIndex:(id)arg2 realTimeText:(id)arg3;
- (id)currentStationLabelAnnotations;
- (void)setMapviewRegion:(_Bool)arg1;
- (void)addSmoothAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3;
- (void)addAnnotationWithDGPStopModel:(id)arg1 withLoactionType:(unsigned long long)arg2 showCallout:(_Bool)arg3;
- (void)addAnnotationForLineDetail:(id)arg1 withLoactionType:(unsigned long long)arg2 withStopModel:(id)arg3;
- (void)addAnnotation:(id)arg1 withLoactionType:(unsigned long long)arg2;
- (void)addOneLocationMe;
- (void)addTransitAnotation:(id)arg1;
- (_Bool)canMakeDestAnnotation:(long long)arg1 viewModel:(id)arg2;
- (void)prepareLayouts:(id)arg1;
- (void)dgpLineWithViewModel:(id)arg1;
- (void)clearLineDetailMap;
- (void)clearMap;
@property(retain, nonatomic) NSMutableArray *layouts; // @dynamic layouts;
@property(nonatomic) _Bool hideCallOutView; // @dynamic hideCallOutView;
@property(retain, nonatomic) DGPPointAnnotation *locationMe; // @dynamic locationMe;
- (void)setIsInBackground:(_Bool)arg1;
- (_Bool)isInBackground;
@property(retain, nonatomic) ONEUserAnnotationsBussniess *userAnnotationBusiness; // @dynamic userAnnotationBusiness;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isNavigationing;
@property(readonly, nonatomic) _Bool mapIsNightStyle;
@property(nonatomic) unsigned long long naviDayNightMode;
@property(nonatomic) int navigationType;
@property(readonly) Class superclass;

@end

