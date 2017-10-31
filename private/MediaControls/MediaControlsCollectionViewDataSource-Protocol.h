//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MediaControlsCollectionViewController, UIViewController<MediaControlsCollectionItemViewController>;

@protocol MediaControlsCollectionViewDataSource <NSObject>
- (long long)defaultSelectedItemIndexForCollectionViewController:(MediaControlsCollectionViewController *)arg1;
- (UIViewController<MediaControlsCollectionItemViewController> *)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInCollectionViewController:(MediaControlsCollectionViewController *)arg1;
@end

