//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@protocol SXEmbedService <NSObject>
- (void)fetchHTMLFromOEmbedURL:(NSURL *)arg1 embedType:(NSString *)arg2 completionBlock:(void (^)(NSString *, NSError *))arg3;
- (id <SXEmbedType>)embedConfigurationForType:(NSString *)arg1;
@end

