//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXVideoAccessoryItemSizing.h"

@class NSString;

@interface SXVideoAccessoryItemSizer : NSObject <SXVideoAccessoryItemSizing>
{
}

- (struct CGSize)sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGPoint)originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize)arg2 itemSize:(struct CGSize)arg3;
- (struct CGPoint)originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(struct CGSize)arg2 itemSize:(struct CGSize)arg3;
- (struct CGRect)frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGRect)frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

