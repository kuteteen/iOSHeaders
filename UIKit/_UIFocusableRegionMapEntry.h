//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIFocusRegionMapEntry.h>

@protocol _UILegacyFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry
{
    _Bool _isFocusGuide;
    _Bool _focusCandidate;
    id <_UILegacyFocusRegion> _focusableRegion;
}

@property(nonatomic, getter=isFocusCandidate) _Bool focusCandidate; // @synthesize focusCandidate=_focusCandidate;
@property(nonatomic) _Bool isFocusGuide; // @synthesize isFocusGuide=_isFocusGuide;
@property(nonatomic) __weak id <_UILegacyFocusRegion> focusableRegion; // @synthesize focusableRegion=_focusableRegion;
- (void).cxx_destruct;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 isFinal:(_Bool)arg3;
- (id)visualRepresentationColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

