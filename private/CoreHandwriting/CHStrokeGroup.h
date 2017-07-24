//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSet;
@protocol CHStrokeIdentifier;

@interface CHStrokeGroup : NSObject
{
    long long _uniqueIdentifier;
    long long _ancestorIdentifier;
    NSSet *_strokeIdentifiers;
    id <CHStrokeIdentifier> _firstStrokeIdentifier;
    id <CHStrokeIdentifier> _lastStrokeIdentifier;
    struct CGRect _bounds;
}

+ (long long)_newStrokeGroupUniqueIdentifier;
@property(readonly, nonatomic) id <CHStrokeIdentifier> lastStrokeIdentifier; // @synthesize lastStrokeIdentifier=_lastStrokeIdentifier;
@property(readonly, nonatomic) id <CHStrokeIdentifier> firstStrokeIdentifier; // @synthesize firstStrokeIdentifier=_firstStrokeIdentifier;
@property(readonly, nonatomic) NSSet *strokeIdentifiers; // @synthesize strokeIdentifiers=_strokeIdentifiers;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) long long ancestorIdentifier; // @synthesize ancestorIdentifier=_ancestorIdentifier;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5;
@property(readonly, nonatomic) struct CGVector averageWritingOrientation;
- (id)description;
- (_Bool)isEquivalentToStrokeGroup:(id)arg1;
- (void)dealloc;
- (id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(struct CGRect)arg5;
- (id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(struct CGRect)arg4;
- (id)init;

@end
