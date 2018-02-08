//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class MPSparseArray;

@interface _MPCAVPlaylistIteration : NSObject <NSSecureCoding>
{
    MPSparseArray *_sourceContexts;
    unsigned long long _iterationIndex;
    unsigned long long _count;
    unsigned long long _indexToFaultIn;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long indexToFaultIn; // @synthesize indexToFaultIn=_indexToFaultIn;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long iterationIndex; // @synthesize iterationIndex=_iterationIndex;
@property(retain, nonatomic) MPSparseArray *sourceContexts; // @synthesize sourceContexts=_sourceContexts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

