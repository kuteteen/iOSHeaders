//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface CKEntryViewButton : UIButton
{
    UIColor *_ckTintColor;
    long long _entryViewButtonType;
}

+ (id)entryViewButtonImageForType:(long long)arg1;
+ (void)prewarmEntryViewButtons;
+ (id)imageNameForEntryViewButtonType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1;
@property(nonatomic) long long entryViewButtonType; // @synthesize entryViewButtonType=_entryViewButtonType;
@property(retain, nonatomic) UIColor *ckTintColor; // @synthesize ckTintColor=_ckTintColor;
- (void).cxx_destruct;
- (void)setTintedImageForButtonType:(long long)arg1 tintColor:(id)arg2;
- (void)setDefaultImage;

@end

