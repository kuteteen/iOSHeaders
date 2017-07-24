//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKDisplayCategory, HKDisplayTypeChartingRules, HKObjectType, HKSampleType, NSAttributedString, NSDictionary, NSPredicate, NSSet, NSString, UIImage;

@interface HKDisplayType : NSObject <NSCopying>
{
    NSPredicate *_defaultChartingPredicate;
    NSDictionary *_chartingPredicatesByTimeScope;
    unsigned long long _portraitPresentationOptions;
    NSDictionary *_portraitPresentationOptionOverrides;
    NSString *_displayNameKey;
    NSString *_labelDisplayNameKey;
    NSString *_shortenedDisplayNameKey;
    NSString *_embeddedDisplayNameKey;
    NSString *_titleEmbeddedDisplayNameKey;
    NSString *_keywordsNameKey;
    NSString *_summaryNameKey;
    NSString *_summaryPairedWatchNameKey;
    NSString *_cautionaryTextKey;
    NSString *_unitChangeCautionaryTextKey;
    _Bool _summaryAttributionHasLink;
    _Bool _showAllDataHierarchically;
    _Bool _shouldDisplayUnitStringOnYAxis;
    _Bool _disallowsSourceReordering;
    _Bool _shouldUseSingleSecondaryValue;
    _Bool __wheelchairUser;
    long long _displayTypeIdentifier;
    long long _categoryIdentifier;
    double _scalarValue;
    NSDictionary *_unitNameKeyOverrides;
    UIImage *_detailImage;
    NSAttributedString *_attributedSummaryAttribution;
    HKDisplayTypeChartingRules *_chartingRules;
    unsigned long long _statisticsMergeStrategy;
    HKObjectType *_objectType;
}

@property(getter=_isWheelchairUser, setter=_setWheelchairUser:) _Bool _wheelchairUser; // @synthesize _wheelchairUser=__wheelchairUser;
@property(readonly, nonatomic) HKObjectType *objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) _Bool shouldUseSingleSecondaryValue; // @synthesize shouldUseSingleSecondaryValue=_shouldUseSingleSecondaryValue;
@property(readonly, nonatomic) unsigned long long statisticsMergeStrategy; // @synthesize statisticsMergeStrategy=_statisticsMergeStrategy;
@property(readonly, nonatomic) _Bool disallowsSourceReordering; // @synthesize disallowsSourceReordering=_disallowsSourceReordering;
@property(nonatomic) _Bool shouldDisplayUnitStringOnYAxis; // @synthesize shouldDisplayUnitStringOnYAxis=_shouldDisplayUnitStringOnYAxis;
@property(readonly, nonatomic) HKDisplayTypeChartingRules *chartingRules; // @synthesize chartingRules=_chartingRules;
@property(readonly, nonatomic) _Bool showAllDataHierarchically; // @synthesize showAllDataHierarchically=_showAllDataHierarchically;
@property(readonly, nonatomic) _Bool summaryAttributionHasLink; // @synthesize summaryAttributionHasLink=_summaryAttributionHasLink;
@property(readonly, nonatomic) NSAttributedString *attributedSummaryAttribution; // @synthesize attributedSummaryAttribution=_attributedSummaryAttribution;
@property(readonly, nonatomic) UIImage *detailImage; // @synthesize detailImage=_detailImage;
@property(readonly, nonatomic) NSDictionary *unitNameKeyOverrides; // @synthesize unitNameKeyOverrides=_unitNameKeyOverrides;
@property(readonly, nonatomic) double scalarValue; // @synthesize scalarValue=_scalarValue;
@property(readonly, nonatomic) long long categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, nonatomic) long long displayTypeIdentifier; // @synthesize displayTypeIdentifier=_displayTypeIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long roundingMode;
@property(readonly, nonatomic) NSString *unitChangeCautionaryText;
@property(readonly, nonatomic) NSString *cautionaryText;
@property(readonly, nonatomic) NSString *summaryForPairedWatch;
@property(readonly, nonatomic) NSString *summary;
@property(readonly, nonatomic) NSString *titleEmbeddedDisplayName;
@property(readonly, nonatomic) NSString *embeddedDisplayName;
@property(readonly, nonatomic) NSString *shortenedDisplayName;
@property(readonly, nonatomic) NSSet *keywords;
@property(readonly, nonatomic) NSString *labelDisplayName;
@property(readonly, nonatomic) NSString *displayName;
- (id)_rawLocalizedStringForKey:(id)arg1;
- (id)_localizedStringWithKey:(id)arg1;
@property(readonly, nonatomic) _Bool canBecomeFavorite;
@property(readonly, nonatomic) HKDisplayCategory *displayCategory;
@property(readonly, nonatomic) _Bool anyPortraitChartDefinition;
@property(readonly, nonatomic) _Bool hidden;
@property(readonly, nonatomic) _Bool supportsAssociatedSamples;
@property(readonly, nonatomic) _Bool unitPreferencesRequireChangeConfirmation;
@property(readonly, nonatomic) NSString *listIconImageName;
@property(readonly, nonatomic) UIImage *listIcon;
@property(readonly, nonatomic) UIImage *shareIcon;
@property(readonly, nonatomic) UIImage *displayTypeIcon;
@property(readonly, nonatomic) UIImage *unitIcon;
- (_Bool)_isActivitySummary;
- (_Bool)_isNikeFuel;
@property(readonly, nonatomic) _Bool allowsManualEntry;
@property(readonly, nonatomic) _Bool isDocument;
@property(readonly, nonatomic) _Bool isActivitySummary;
@property(readonly, nonatomic) _Bool isCharacteristic;
@property(readonly, nonatomic) HKSampleType *recordSampleType;
@property(readonly, nonatomic) HKSampleType *sampleType;
- (unsigned long long)presentationOptionsForTimeScope:(long long)arg1;
- (id)chartingPredicateForTimeScope:(long long)arg1;
- (id)defaultValuePredicate;
- (id)defaultDataRange;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;
- (id)adjustedValueForClientValue:(id)arg1;
- (id)adjustedValueForDaemonValue:(id)arg1;
- (id)unitDisplayNameKeyOverrideForUnit:(id)arg1;
- (void)_applyChartingProperties:(id)arg1;
- (void)_applySummaryAndAttributionPropertiesWithDictionary:(id)arg1;
- (void)_applyTextualPropertiesWithDictionary:(id)arg1 displayNameKey:(id)arg2;
- (void)_applyScalarValue:(id)arg1;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)hk_numberFormatterForUnit:(id)arg1 formattingContext:(long long)arg2;
- (id)hk_numberFormatterForUnit:(id)arg1;
- (id)hk_enumeratedValueLabels;

@end
