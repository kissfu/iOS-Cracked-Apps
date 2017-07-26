//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class VUICoordinateSystemProgram;

@interface VUICoordinateSystemNode : VUINode
{
    float POSITION[12];
    short INDEX[6];
    float _mAxisThickness;
    VUICoordinateSystemProgram *_mProgram;
}

@property(nonatomic) float mAxisThickness; // @synthesize mAxisThickness=_mAxisThickness;
@property(retain, nonatomic) VUICoordinateSystemProgram *mProgram; // @synthesize mProgram=_mProgram;
- (void).cxx_destruct;
- (id)createCoordinateSystemAxis:(float)arg1;
- (void)onReset;
- (void)onRelease;
- (void)onRenderMp:(id)arg1 mv:(id)arg2 mm:(id)arg3 mpv:(id)arg4 mpvp:(id)arg5 deltaTime:(double)arg6;
- (void)rebindVAO;
- (void)releaseVAO;
- (void)createVAO;
- (void)initialize;
- (id)initWithTransformation:(id)arg1;
- (id)init;

@end
