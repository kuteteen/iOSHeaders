//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PHContentEditingOutput, PUEditPluginHostViewController;

@protocol PUEditPluginHostViewControllerDataSource
- (void)editPluginHostViewController:(PUEditPluginHostViewController *)arg1 commitContentEditingOutput:(PHContentEditingOutput *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)editPluginHostViewController:(PUEditPluginHostViewController *)arg1 loadItemProviderWithHandler:(void (^)(NSItemProvider *))arg2;
@end

