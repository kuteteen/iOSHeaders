//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class QLItem, QLPreviewItemStore;

@protocol QLPreviewItemStoreDelegate
- (unsigned long long)itemStore:(QLPreviewItemStore *)arg1 editedFileBehaviorForItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canEditItem:(QLItem *)arg2;
- (_Bool)itemStore:(QLPreviewItemStore *)arg1 canShareItem:(QLItem *)arg2;
@end

