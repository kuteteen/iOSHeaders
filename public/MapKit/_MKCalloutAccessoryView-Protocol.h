//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIColor;

@protocol _MKCalloutAccessoryView <NSObject>

@optional
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (double)_mapkit_calloutCustomRightMargin;
- (double)_mapkit_calloutCustomLeftMargin;
- (_Bool)_mapkit_calloutShouldAlignToDetailBaseline;
- (_Bool)_mapkit_calloutShouldUseIntrinsicContentSize;
- (_Bool)_mapkit_shouldFillCalloutHeight;
- (void)_mapkit_setCalloutAlignedToDetailView:(_Bool)arg1;
- (void)_mapkit_setCalloutTextColor:(UIColor *)arg1;
- (void)_mapkit_setCalloutBackgroundColor:(UIColor *)arg1;
@end
