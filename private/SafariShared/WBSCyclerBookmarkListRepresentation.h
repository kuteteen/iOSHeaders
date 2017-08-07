//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

#import <SafariShared/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration>
{
    NSMutableArray *_children;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)_tryToDeleteDescendant:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)randomListDescendant;
- (id)randomDescendant;
- (id)allDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)randomDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)descendantWithUniqueIdentifier:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (_Bool)containsDescendant:(id)arg1;
- (_Bool)containsChild:(id)arg1;
- (void)deleteAllChildren;
- (void)deleteDescendant:(id)arg1;
- (void)deleteChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;

@end

