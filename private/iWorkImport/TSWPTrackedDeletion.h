//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSWPReplaceAction-Protocol.h>

@class NSString, TSWPChangeSession;

__attribute__((visibility("hidden")))
@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction>
{
    struct _NSRange _range;
    TSWPChangeSession *_changeSession;
}

- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange)arg1 changeSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
