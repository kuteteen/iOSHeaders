//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoSkipPolicy.h"

@class NSString;

@interface SXVideoSkipPolicyManager : NSObject <SXVideoSkipPolicy>
{
    _Bool _shouldAutoAdvance;
    id <SXVideoCollectionViewProviding> _collectionViewProvider;
}

@property(readonly, nonatomic) id <SXVideoCollectionViewProviding> collectionViewProvider; // @synthesize collectionViewProvider=_collectionViewProvider;
@property(nonatomic) _Bool shouldAutoAdvance; // @synthesize shouldAutoAdvance=_shouldAutoAdvance;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canSkip;
- (id)initWithCollectionViewProvider:(id)arg1 shouldAutoAdvance:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

