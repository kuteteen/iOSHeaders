//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSuggestionsSink.h"

@class NSString;

@interface SinkContainer : NSObject <MapsSuggestionsSink>
{
    unsigned long long _hashValue;
    id <MapsSuggestionsSink> _weakSink;
}

@property(nonatomic) __weak id <MapsSuggestionsSink> weakSink; // @synthesize weakSink=_weakSink;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSink:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

