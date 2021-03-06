//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPStorageRangeProvider : NSObject
{
    NSString *_identifier;
    struct _NSRange _range;
    NSObject *_object;
}

@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)nextRange;
- (unsigned long long)rangeEnd;
- (void)setRangeStart:(unsigned long long)arg1;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (id)initWithIdentifier:(id)arg1;

@end

