//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MSDecodeOptions, NSData;
@protocol MSMessage;

@protocol MSMessage
+ (id <MSMessage>)decodeMessageSecurityObject:(NSData *)arg1 options:(MSDecodeOptions *)arg2 error:(id *)arg3;
- (NSData *)encodeMessageSecurityObject:(id *)arg1;
@end
