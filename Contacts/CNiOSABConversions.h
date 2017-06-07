//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSABConversions : NSObject
{
}

+ (const struct __CFSet *)requiredABPropertyIDSetForKeysToFetch:(id)arg1;
+ (id)arrayByMappingTransform:(CDUnknownBlockType)arg1 onCFArray:(struct __CFArray *)arg2;
+ (id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1;
+ (id)accountsFromABAccounts:(struct __CFArray *)arg1;
+ (id)accountFromABAccount:(void *)arg1;
+ (id)containersFromABSources:(struct __CFArray *)arg1 remote:(_Bool)arg2 includeDisabledSources:(_Bool)arg3;
+ (id)containerFromABSource:(void *)arg1 remote:(_Bool)arg2 includeDisabledSources:(_Bool)arg3;
+ (id)groupsFromABGroups:(struct __CFArray *)arg1;
+ (id)groupFromABGroup:(void *)arg1;
+ (void)updateContact:(id)arg1 fromABPerson:(void *)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id *)arg4;
+ (CDUnknownBlockType)personToContactTransformWithKeysToFetch:(id)arg1 mutable:(_Bool)arg2;
+ (id)contactPropertiesByABPropertyID;
+ (id)contactIdentifierFromABPerson:(void *)arg1;
+ (id)contactFromABPerson:(void *)arg1 uniqueKeysToConvert:(id)arg2 mutable:(_Bool)arg3;
+ (id)contactFromABPerson:(void *)arg1 keysToConvert:(id)arg2 mutable:(_Bool)arg3;
+ (void)initialize;
+ (id)numberFromIntegerABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dateFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)stringFromABBytes:(char *)arg1 length:(unsigned long long)arg2;

@end

