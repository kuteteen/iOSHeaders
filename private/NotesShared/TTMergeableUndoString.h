//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTMergeableString.h>

@interface TTMergeableUndoString : TTMergeableString
{
}

- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)undeleteSubstrings:(vector_252d7b3a *)arg1;
- (void)deleteSubstrings:(vector_6c07be0f *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (void)applyUndoCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;

@end
