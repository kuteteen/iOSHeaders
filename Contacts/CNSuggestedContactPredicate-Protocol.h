//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, SGSuggestionsService;

@protocol CNSuggestedContactPredicate <NSObject>

@optional
- (NSArray *)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
- (NSArray *)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(SGSuggestionsService *)arg3 error:(id *)arg4;
@end

