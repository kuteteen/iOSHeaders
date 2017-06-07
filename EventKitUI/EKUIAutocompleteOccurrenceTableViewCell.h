//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKUITableViewCellWithPrimaryAndSecondaryFonts.h>

@class NSArray, NSString, UIColor, UIImageView, UILabel;

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts
{
    UIImageView *_colorDotView;
    UILabel *_titleTextLabel;
    UILabel *_locationTextLabel;
    UILabel *_timeTextLabelWithThisTimeZone;
    UILabel *_timeTextLabelWithResultTimeZone;
    UILabel *_inviteesTextLabel;
    NSArray *_secondaryLabels;
    UIColor *_eventCalendarColor;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_eventTimeWithThisTimeZone;
    NSString *_eventTimeWithResultTimeZone;
    NSString *_eventInvitees;
    NSArray *_ekUIAutocompleteOccurrenceTableViewCellConstraints;
}

+ (double)cellHeightForResult:(id)arg1 forWidth:(double)arg2;
+ (id)_inviteeStringForResult:(id)arg1;
+ (id)_timeStringForResult:(id)arg1 usingTimeZone:(id)arg2;
+ (_Bool)_shouldShowOtherTimeZoneForResult:(id)arg1;
+ (id)_locationStringForResult:(id)arg1;
+ (id)secondaryTextColor;
+ (id)primaryTextColor;
+ (id)secondaryTextLabelFont;
+ (double)_verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg1;
+ (double)_verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg1;
+ (double)_verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg1;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)updateWithResult:(id)arg1;
- (double)_verticalSpacingTopToColorDot;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (void)_addConstraintsForLabel:(id)arg1 belowView:(id)arg2 toArray:(id)arg3;
- (void)_setupConstraints;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)_setLabelFonts;
- (id)_createLabelWithColor:(id)arg1;
- (id)_createSecondaryLabel;
- (id)_createPrimaryLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

