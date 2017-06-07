//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATHTTPMessageParser, NSData, NSURL;

@protocol CATHTTPMessageParserDelegate <NSObject>

@optional
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestWithURL:(NSURL *)arg2;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseResponseData:(NSData *)arg2 moreComing:(_Bool)arg3;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestData:(NSData *)arg2;
@end
