//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject
{
    CDUnknownBlockType _contactObserver;
    id _userDictionaryObserver;
    unsigned long long _observerAssertionCount;
    NSSet *_addressBookTokens;
    NSSet *_userDictionaryTokens;
    NSUUID *_userDictionaryUUID;
}

+ (id)sharedTextCheckerExemptionsImpl;
@property(copy, nonatomic) NSUUID *userDictionaryUUID; // @synthesize userDictionaryUUID=_userDictionaryUUID;
@property(retain, nonatomic) NSSet *userDictionaryTokens; // @synthesize userDictionaryTokens=_userDictionaryTokens;
@property(retain, nonatomic) NSSet *addressBookTokens; // @synthesize addressBookTokens=_addressBookTokens;
- (void)removeObserverAssertion;
- (void)addObserverAssertion;
- (_Bool)stringIsExemptFromChecker:(id)arg1;
- (void)dealloc;

@end

