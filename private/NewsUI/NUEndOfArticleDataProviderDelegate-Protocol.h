//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol NUEndOfArticleDataProviderDelegate <NSObject>

@optional
- (void)endOfArticleDataProvider:(id <NUEndOfArticleDataProvider>)arg1 failedToLoadContentWithError:(NSError *)arg2;
- (void)endOfArticleDataProviderDidChangeContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillChangeContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderDidLoadContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillLoadContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillSupressContent:(id <NUEndOfArticleDataProvider>)arg1;
@end

