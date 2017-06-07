//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUnifiedContacts : NSObject
{
}

+ (id)findFirstIdentifier:(id)arg1 inMultiValue:(id)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)unifiedIdentifiersForValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (_Bool)isLabel:(id)arg1 equivalentToLabel:(id)arg2 forProperty:(id)arg3;
+ (_Bool)isLabeledValue:(id)arg1 equivalentTo:(id)arg2 forProperty:(id)arg3;
+ (CDUnknownBlockType)equivalentLabeledValueFilterForLabeledValue:(id)arg1 property:(id)arg2;
+ (id)unifiedIdentifiersForLabeledValue:(id)arg1 inUnifiedMap:(id)arg2 forProperty:(id)arg3;
+ (void)correlateIdentifiersOfUnifiedMap:(id)arg1 toIdentifiersOfMultiValueMap:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4;
+ (void)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 intoMap:(id)arg3 forProperty:(id)arg4;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (unsigned long long)countOfLabelsEquivalentTo:(id)arg1 valuesEquivalentTo:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabel:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)countOfLabelIncludingEquivalents:(id)arg1 value:(id)arg2 inMultiValue:(id)arg3 forProperty:(id)arg4;
+ (void)replaceInferiorValueInMultiValue:(id)arg1 withEntryAtIndex:(unsigned long long)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (unsigned long long)indexOfValueMostInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfValuesInferiorTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)indexesOfLabeledValuesEquivalentTo:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3;
+ (void)addLinkedLabeledValue:(id)arg1 toLabeledValue:(id)arg2;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (_Bool)shouldLabeledValue:(id)arg1 replaceInferiorValueInMultiValue:(id)arg2 forProperty:(id)arg3;
+ (_Bool)doesMultiValue:(id)arg1 needLabeledValue:(id)arg2 fromMultiValue:(id)arg3 forProperty:(id)arg4;
+ (_Bool)shouldIncludeLabeledValue:(id)arg1 fromSource:(id)arg2 inDestination:(id)arg3 forProperty:(id)arg4;
+ (void)unifyMultiValue:(id)arg1 intoMultiValue:(id)arg2 forProperty:(id)arg3;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (void)unifyMultiValuesOfContacts:(id)arg1 intoContact:(id)arg2 availableKeys:(id)arg3;
+ (id)firstNonNilValueForProperty:(id)arg1 inContacts:(id)arg2;
+ (void)unifySingleValuesProperties:(id)arg1 ofContacts:(id)arg2 intoContact:(id)arg3 availableKeys:(id)arg4;
+ (void)unifyImageOfContacts:(id)arg1 intoContact:(id)arg2 availableKeys:(id)arg3;
+ (void)unifyNonNameSingleValuesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeys:(id)arg4;
+ (void)unifyNamesOfContacts:(id)arg1 withPreferredContact:(id)arg2 intoContact:(id)arg3 availableKeys:(id)arg4;
+ (id)unifyAvailableKeysOfContacts:(id)arg1;
+ (id)nonNameSingleValuePropertiesByKey;
+ (id)imageValuePropertyKeys;
+ (id)imageValuePropertiesByKey;
+ (id)unifyContactsSortedByPreference:(id)arg1 includingMainStoreContacts:(_Bool)arg2;
+ (unsigned long long)indexOfPreferredContactForImage:(id)arg1;
+ (unsigned long long)indexOfPreferredContactForUnifying:(id)arg1 includingMainStoreContacts:(_Bool)arg2;

@end

