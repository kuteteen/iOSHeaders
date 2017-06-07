//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString, SGIdentityKey;

@interface SGCuratedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToCuratedContactKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithExternalId:(int)arg1;
- (id)initWithIdentityKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
