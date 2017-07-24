//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFont.h>

@interface UIFont (IC)
+ (struct UIFont *)preferredFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
+ (long long)stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;
+ (id)contentSizeCategories;
+ (double)preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (struct UIFont *)preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (struct UIFont *)preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;
+ (struct UIFont *)preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (double)fontSizeForSubheaderImport;
+ (double)fontSizeForHeaderImport;
+ (id)preferredFontForFixedWidthTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (double)pointSizeForBodyTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)navBarButtonFontUsingSingleLineA:(_Bool)arg1;
+ (struct UIFont *)attachmentBrowserTitleFont;
+ (struct UIFont *)listViewDetailFont;
+ (struct UIFont *)listViewTitleFont;
+ (double)lineHeightForAttachmentTitleText:(long long)arg1;
+ (double)spacingForAttachmentTitleText:(long long)arg1;
+ (id)preferredFontForAttachmentText:(long long)arg1;
+ (double)preferredAttachmentTextScale;
+ (id)preferredFontForAttachmentBoldText;
+ (id)preferredFontForAttachmentRegularText;
+ (id)preferredFontForFixedWidthText;
+ (id)preferredFontForDateTextWithZoomFactor:(double)arg1;
+ (id)preferredFontForDateText;
+ (id)preferredFontForBodyText;
+ (id)preferredFontForSubheadingText;
+ (id)preferredFontForHeadingText;
+ (id)preferredFontForTitleText;
- (id)fontConvertedToSize:(double)arg1;
- (id)fontWithTabularNumbers;
- (_Bool)fontHasSingleLineA;
- (id)fontWithSingleLineA;
@end
