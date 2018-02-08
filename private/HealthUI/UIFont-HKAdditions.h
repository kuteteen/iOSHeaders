//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIFont.h"

@interface UIFont (HKAdditions)
+ (id)hk_scalableFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_chartAxisLabelFont;
+ (id)hk_roundedSystemFontWithSize:(double)arg1 weight:(double)arg2;
+ (id)hk_unitLabelFontScaledBy:(double)arg1;
+ (id)hk_titleLabelFontScaledBy:(double)arg1;
+ (id)hk_defaultFontWithUIFontTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 attributes:(id)arg3;
+ (double)hk_fittingScaleFactorForUILabels:(id)arg1 constrainingWidth:(double)arg2;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontIgnoringAccessibilitySizeForTextStyle:(id)arg1;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 maximumContentSizeCategory:(id)arg3;
+ (id)hk_preferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_preferredFontForTextStyle:(id)arg1;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2;
+ (id)hk_staticPreferredFontForTextStyle:(id)arg1;
- (id)_hk_fontByModifyingSymbolicTraits:(CDUnknownBlockType)arg1;
- (id)hk_fontByRemovingSymbolicTraits:(unsigned int)arg1;
- (id)hk_fontByAddingSymbolicTraits:(unsigned int)arg1;
@end

