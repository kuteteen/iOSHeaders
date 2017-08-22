//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

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
@property(retain) NSSet *userDictionaryTokens; // @synthesize userDictionaryTokens=_userDictionaryTokens;
@property(retain) NSSet *addressBookTokens; // @synthesize addressBookTokens=_addressBookTokens;
- (void)removeObserverAssertion;
- (void)addObserverAssertion;
- (_Bool)stringIsExemptFromChecker:(id)arg1;
- (void)dealloc;

@end

