//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL, NSURLRequest, _SFReaderController, _WKFrameHandle;

@protocol _SFReaderControllerDelegate <NSObject>

@optional
- (NSURL *)readerURLForReaderController:(_SFReaderController *)arg1;
- (void)readerController:(_SFReaderController *)arg1 didPrepareReaderContentForDisplay:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReaderContentForMail:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReadingListItemInfo:(NSDictionary *)arg2 bookmarkID:(NSNumber *)arg3;
- (void)readerController:(_SFReaderController *)arg1 didSetReaderConfiguration:(NSDictionary *)arg2;
- (NSDictionary *)readerControllerInitialConfiguration:(_SFReaderController *)arg1;
- (void)readerController:(_SFReaderController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
- (void)readerController:(_SFReaderController *)arg1 didDetermineReaderAvailability:(_Bool)arg2;
@end

