//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCFeedRange, NSArray, NSError, NSString;

@interface FCFeedResponse : NSObject
{
    _Bool _exhaustedRequestRange;
    NSString *_feedID;
    NSArray *_feedItems;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool exhaustedRequestRange; // @synthesize exhaustedRequestRange=_exhaustedRequestRange;
@property(copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FCFeedRange *feedRange;
- (id)feedResponseByMergingWithResponse:(id)arg1;

@end

