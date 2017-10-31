//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSString, NSURL, SAWLWatchListChannelDetails;

@interface SAWLWatchListPlayable : AceObject <SAAceSerializable>
{
}

+ (id)watchListPlayableWithDictionary:(id)arg1 context:(id)arg2;
+ (id)watchListPlayable;
@property(copy, nonatomic) NSURL *playURL;
@property(nonatomic) _Bool installed;
@property(nonatomic) _Bool entitled;
@property(retain, nonatomic) SAWLWatchListChannelDetails *channelDetails;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

