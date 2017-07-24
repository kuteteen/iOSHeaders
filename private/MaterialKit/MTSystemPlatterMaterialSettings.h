//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialKit/MTSystemMaterialSettings.h>

#import <MaterialKit/MTMaterialLightOverlaySettings-Protocol.h>

@class NSString;

@interface MTSystemPlatterMaterialSettings : MTSystemMaterialSettings <MTMaterialLightOverlaySettings>
{
    double _whiteOverlayAlpha;
    double _lightOverlayAlpha;
}

+ (id)sharedMaterialSettings;
@property(nonatomic) double lightOverlayAlpha; // @synthesize lightOverlayAlpha=_lightOverlayAlpha;
@property(nonatomic) double whiteOverlayAlpha; // @synthesize whiteOverlayAlpha=_whiteOverlayAlpha;
- (Class)vibrantStylingProviderClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
