//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PLAlbumProtocol-Protocol.h>

@class NSArray, NSDictionary, NSIndexSet, NSMutableOrderedSet, NSString;

@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)insertInternalUserEditableAssets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2 trimmedVideoPathInfo:(NSDictionary *)arg3 commentText:(NSString *)arg4;
@end

