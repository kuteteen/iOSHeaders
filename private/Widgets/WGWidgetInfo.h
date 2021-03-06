//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSExtension, NSPointerArray, NSString, UIImage;

@interface WGWidgetInfo : NSObject
{
    NSPointerArray *_registeredWidgetHosts;
    struct {
        unsigned int didInitializeWantsVisibleFrame:1;
    } _widgetInfoFlags;
    _Bool _wantsVisibleFrame;
    NSString *_sdkVersion;
    NSExtension *_extension;
    long long _initialDisplayMode;
    long long _largestAllowedDisplayMode;
    NSString *_displayName;
    UIImage *_icon;
    UIImage *_outlineIcon;
    struct CGSize _preferredContentSize;
}

+ (id)_productVersion;
+ (double)maximumContentHeightForCompactDisplayMode;
+ (void)_updateRowHeightForContentSizeCategory;
+ (id)widgetInfoWithExtension:(id)arg1;
@property(retain, nonatomic, setter=_setOutlineIcon:) UIImage *outlineIcon; // @synthesize outlineIcon=_outlineIcon;
@property(retain, nonatomic, setter=_setIcon:) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic, setter=_setDisplayName:) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic, setter=_setLargestAllowedDisplayMode:) long long largestAllowedDisplayMode; // @synthesize largestAllowedDisplayMode=_largestAllowedDisplayMode;
@property(readonly, nonatomic) long long initialDisplayMode; // @synthesize initialDisplayMode=_initialDisplayMode;
@property(nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)updatePreferredContentSize:(struct CGSize)arg1 forWidgetHost:(id)arg2;
- (void)registerWidgetHost:(id)arg1;
@property(nonatomic, setter=_setWantsVisibleFrame:) _Bool wantsVisibleFrame; // @synthesize wantsVisibleFrame=_wantsVisibleFrame;
@property(readonly, nonatomic) double initialHeight;
- (_Bool)isLinkedOnOrAfterSystemVersion:(id)arg1;
@property(readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void)_resetIcons;
@property(readonly, nonatomic) UIImage *settingsIcon;
- (id)_iconWithOutline;
- (int)_outlineVariantForScale:(double)arg1;
- (id)_iconWithFormat:(int)arg1;
- (id)_iconFromWidgetBundle;
@property(readonly, copy, nonatomic) NSString *widgetIdentifier;
- (id)widgetInfoWithExtension:(id)arg1;
- (id)initWithExtension:(id)arg1;

@end

