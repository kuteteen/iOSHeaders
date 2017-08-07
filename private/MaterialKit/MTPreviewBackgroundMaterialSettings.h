//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MaterialKit/MTMaterialOverlaySettings-Protocol.h>
#import <MaterialKit/MTMaterialSettings-Protocol.h>
#import <MaterialKit/MTMaterialSettingsObservable-Protocol.h>
#import <MaterialKit/_MTMaterialVersioning-Protocol.h>
#import <MaterialKit/_MTZooming-Protocol.h>

@class MTVibrantStylingProvider, NSString, UIColor;

@interface MTPreviewBackgroundMaterialSettings : NSObject <MTMaterialSettings, MTMaterialOverlaySettings, MTMaterialSettingsObservable, _MTMaterialVersioning, _MTZooming>
{
}

+ (id)sharedMaterialSettings;
- (void)removeKeyObserver:(id)arg1;
- (void)addKeyObserver:(id)arg1;
- (void)updateWithSettingsFromArchive:(id)arg1;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;
@property(nonatomic) double secondaryOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *secondaryOverlayTintColor;
@property(nonatomic) double primaryOverlayTintAlpha;
@property(readonly, copy, nonatomic) UIColor *primaryOverlayTintColor;
@property(readonly, nonatomic) double zoom;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool usesLuminanceMap;
@property(nonatomic) double tintAlpha;
@property(nonatomic) double brightness;
@property(nonatomic) double saturation;
@property(nonatomic) double luminanceAlpha;
@property(readonly, nonatomic) long long materialVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

