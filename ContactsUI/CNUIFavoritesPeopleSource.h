//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class CNContactStore, CNFavorites, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFavoritesPeopleSource : NSObject <CNUIPeopleSource>
{
    CNFavorites *_favorites;
    CNContactStore *_contactStore;
    NSArray *_cachedPeople;
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;
+ (id)sourceKind;
@property(retain, nonatomic) NSArray *cachedPeople; // @synthesize cachedPeople=_cachedPeople;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNFavorites *favorites; // @synthesize favorites=_favorites;
- (void).cxx_destruct;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;
- (id)groups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

