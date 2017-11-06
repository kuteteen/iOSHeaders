//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchUIWatchListUtilities : NSObject
{
    _Bool _isWatchListed;
    NSString *_watchListIdentifier;
}

+ (void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain) NSString *watchListIdentifier; // @synthesize watchListIdentifier=_watchListIdentifier;
@property(nonatomic) _Bool isWatchListed; // @synthesize isWatchListed=_isWatchListed;
- (void).cxx_destruct;
- (void)toggleWatchListWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 watchListed:(_Bool)arg2;
- (id)initWithResponse:(id)arg1;

@end
