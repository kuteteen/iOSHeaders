//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNiOSFetchExecution : NSObject
{
}

+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 addressBook:(void *)arg5 error:(id *)arg6;
+ (id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 matchInfos:(id *)arg3 options:(unsigned long long)arg4 addressBook:(void *)arg5 error:(id *)arg6;
+ (id)contactsMatchingPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 progressiveResults:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)contactsMatchingPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void *)arg4 progressiveResults:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)_extractContacts:(id *)arg1 matchInfo:(id *)arg2 fromBlockResults:(id)arg3 containsNestedResults:(_Bool)arg4;

@end

