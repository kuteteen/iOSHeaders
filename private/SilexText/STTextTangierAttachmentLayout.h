//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface STTextTangierAttachmentLayout : TSDDrawableLayout
{
    TSDWrapPolygon *_polygon;
}

@property(retain, nonatomic) TSDWrapPolygon *polygon; // @synthesize polygon=_polygon;
- (void).cxx_destruct;
- (void)storeActualPosition;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)validate;
- (void)fixTransformFromInterimPosition;
- (id)wrapPolygon;

@end
