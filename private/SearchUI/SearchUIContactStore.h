//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, NSCache;

@interface SearchUIContactStore : NSObject
{
    CNContactStore *_contactStore;
    NSCache *_contactCache;
}

+ (id)placeholderContact;
+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)sharedStore;
@property(retain) NSCache *contactCache; // @synthesize contactCache=_contactCache;
@property(retain) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (id)contactForIdentifier:(id)arg1;
- (void)fetchContactForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)init;

@end

