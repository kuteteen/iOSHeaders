//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSSet, SKUILibraryItem, SKUILibraryItemState;

@protocol SKUILibraryInterface <NSObject>
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;
- (void)enumerateStatesForLibraryItems:(NSSet *)arg1 usingBlock:(void (^)(SKUILibraryItem *, SKUILibraryItemState *, _Bool *))arg2;

@optional
- (void)removeMediaItemsForLibraryItems:(NSArray *)arg1;
- (_Bool)performActionForLibraryItem:(SKUILibraryItem *)arg1;
- (NSSet *)exposedPlatformItemKinds;
- (SKUILibraryItemState *)stateForLibraryItemAfterLibraryIntegration:(SKUILibraryItem *)arg1;
@end

