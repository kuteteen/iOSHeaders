//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, NSString, NSURLResponse, _WKDownload;

@protocol _WKDownloadDelegate <NSObject>

@optional
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(_Bool *)arg3;
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_downloadDidStart:(_WKDownload *)arg1;
@end

