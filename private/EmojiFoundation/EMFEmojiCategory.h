//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EMFEmojiCategory : NSObject
{
    NSString *_identifier;
}

+ (id)localizedSkinToneEmojiDescriptionForLocale:(id)arg1;
+ (id)localizedSkinToneEmojiDescription;
+ (id)localizedRecentsDescriptionForLocale:(id)arg1;
+ (id)localizedRecentsDescription;
+ (id)computeEmojiFlagsSortedByLanguage;
+ (id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2;
+ (id)extraFlagsForCountryCode:(id)arg1;
+ (void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2;
+ (id)stringToRegionalIndicatorString:(id)arg1;
+ (id)_emojiSetForIdentifier:(id)arg1;
+ (id)_baseLocalizationKeyForIdentifier:(id)arg1;
+ (id)categoryWithIdentifier:(id)arg1;
+ (id)categoryIdentifierList;
+ (id)flagEmojiCountryCodesCommon;
+ (id)SymbolsEmoji;
+ (id)ObjectsEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)ActivityEmoji;
+ (id)CelebrationEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)NatureEmoji;
+ (id)PeopleEmoji;
+ (id)PrepopulatedEmoji;
+ (id)flagEmojiCountryCodesCommon;
+ (id)SymbolsEmoji;
+ (id)ObjectsEmoji;
+ (id)TravelAndPlacesEmoji;
+ (id)ActivityEmoji;
+ (id)CelebrationEmoji;
+ (id)FoodAndDrinkEmoji;
+ (id)NatureEmoji;
+ (id)PeopleEmoji;
+ (id)PrepopulatedEmoji;
+ (id)ProfessionEmoji;
+ (id)GenderEmoji;
+ (id)SkinToneEmoji;
+ (id)NoneVariantEmoji;
+ (id)DingbatsVariantEmoji;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)emojiTokensForLocaleData:(id)arg1;
- (id)shortLocalizedNameForLocale:(id)arg1;
- (id)localizedNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *shortLocalizedName;
@property(readonly, nonatomic) NSString *localizedName;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

