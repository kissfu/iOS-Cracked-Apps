//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDXMLNode.h"

@interface DDXMLAttributeNode : DDXMLNode
{
    struct _xmlNs *attrNsPtr;
}

+ (id)nodeWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;
- (id)URI;
- (void)setURI:(id)arg1;
- (struct _xmlStd *)_XPathPreProcess:(id)arg1;
- (void)detach;
- (id)nextNode;
- (id)previousNode;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithPrimitive:(struct _xmlKind *)arg1 owner:(id)arg2;
- (id)initWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;

@end
