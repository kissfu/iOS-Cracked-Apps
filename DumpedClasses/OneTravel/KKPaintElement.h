//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KKCanvasElement.h"

@interface KKPaintElement : KKCanvasElement
{
}

+ (id)elementWithPaint:(CDUnknownBlockType)arg1;
- (id)copyElementWithZone:(struct _NSZone *)arg1;
- (id)withPaint:(CDUnknownBlockType)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)property:(struct KKProperty *)arg1 changedValue:(id)arg2;
- (id)initWithPaint:(CDUnknownBlockType)arg1;

@end
