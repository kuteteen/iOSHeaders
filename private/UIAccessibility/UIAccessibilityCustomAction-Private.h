//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityCustomAction.h"

@class NSString, UIImage;

@interface UIAccessibilityCustomAction (Private)
- (id)_accessibilityAXAttributedName;
- (_Bool)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
- (id)_accessibilityCustomActionIdentifier;
@property(nonatomic) _Bool ignoreWhenVoiceOverTouches;
@property(nonatomic) _Bool shouldSuppressActionHint;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@property(retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@end

