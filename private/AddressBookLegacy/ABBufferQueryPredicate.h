//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ABBufferQueryPredicate : NSObject
{
    CDUnknownBlockType _bindBlock;
    NSString *_query;
}

+ (id)predicateForContactsInRange:(struct _NSRange)arg1 sortOrder:(int)arg2;
+ (id)predicateForContactsMatchingOrganizationName:(id)arg1;
+ (id)predicateForSingleContactMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsMatchingMultivalueProperty:(int)arg1 value:(id)arg2;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 addressBook:(void *)arg2;
+ (id)predicateForContactsWithLegacyIdentifier:(int)arg1;
+ (id)predicateForContactsWithUUIDs:(id)arg1 ignoreUnifiedIdentifiers:(_Bool)arg2;
+ (id)bindPlaceholderStringOfCount:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType bindBlock; // @synthesize bindBlock=_bindBlock;
- (void)dealloc;

@end
