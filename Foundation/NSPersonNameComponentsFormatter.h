//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NSLocale;

@interface NSPersonNameComponentsFormatter : NSFormatter <NSSecureCoding, NSCopying>
{
    id _private;
}

+ (id)__stringValueForShortStyle:(long long)arg1;
+ (id)__stringValueForStyle:(long long)arg1;
+ (SEL)__initialsCreatorForScript:(unsigned long long)arg1;
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (_Bool)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (_Bool)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (_Bool)__style:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (long long)__shortNameFormatForLocale:(id)arg1;
+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1;
+ (long long)__abbreviatedNameFormatForString:(id)arg1;
+ (long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(_Bool)arg2;
+ (id)__supportedScriptDefaultsFromScriptName:(id)arg1;
+ (id)__supportedNameDefaultsFromLocale:(id)arg1;
+ (void)__registerDefaults;
+ (CDUnknownBlockType)arabicInitialsCreator;
+ (CDUnknownBlockType)tibetanInitialsCreator;
+ (CDUnknownBlockType)thaiInitialsCreator;
+ (CDUnknownBlockType)westernInitialsCreator;
+ (id)__initialsForString:(id)arg1;
+ (_Bool)_shortNameIsEnabled;
+ (_Bool)_shouldPreferNicknames;
+ (long long)_defaultShortNameFormat;
+ (long long)_defaultDisplayNameOrder;
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3;
+ (_Bool)supportsSecureCoding;
+ (id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (_Bool)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2;
+ (_Bool)_currentLocaleIsCJK;
+ (id)_cjkLocaleIdentifiers;
+ (id)_cjkLanguagesSet;
+ (_Bool)_isMixedScript:(id)arg1;
+ (_Bool)_isCJKScript:(id)arg1;
+ (id)__naiveDelimiterForCombinedNameString:(id)arg1;
+ (id)__scriptIdentifierFromIndex:(unsigned long long)arg1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;
+ (unsigned long long)__inferredScriptIndexFromString:(id)arg1;
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1;
+ (id)__longestComponentFromComponents:(id)arg1;
+ (_Bool)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet *)arg2;
+ (struct USet *)__getCharacterSetWithPattern:(id)arg1;
+ (id)__characterSetWithPattern:(id)arg1;
+ (id)__thaiConsonantSet;
+ (_Bool)isKatakana:(id)arg1;
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(CDUnknownBlockType)arg2;
+ (id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2;
+ (id)__givenNameFirstOrdering;
+ (id)__familyNameFirstOrdering;
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3;
+ (id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (_Bool)__shouldReturnEmptyString;
+ (id)__localizedNameDefaults;
+ (_Bool)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (_Bool)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (id)__preferredLanguages;
+ (id)__currentLocale;
- (_Bool)isEqualToFormatter:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)personNameComponentsFromString:(id)arg1;
- (long long)_nameOrderWithOverridesForComponents:(id)arg1;
- (long long)__localizedShortNameFormat;
- (long long)__localizedNameOrderUsingNativeOrdering:(_Bool)arg1;
- (_Bool)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(_Bool)arg2;
- (_Bool)__localizedRestrictionExistsForShortStyle:(long long)arg1;
- (_Bool)__localizedRestrictionExistsForStyle:(long long)arg1;
- (long long)__computedShortNameFormat;
- (long long)__computedNameOrderForComponents:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)stringFromPersonNameComponents:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
@property long long style;
@property(getter=isPhonetic) _Bool phonetic;
@property NSLocale *_locale;
@property _Bool _ignoresFallbacks;
@property _Bool _forceGivenNameFirst;
@property _Bool _forceFamilyNameFirst;
- (void)dealloc;
- (id)init;

@end

