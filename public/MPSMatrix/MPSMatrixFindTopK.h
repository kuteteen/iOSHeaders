//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel
{
    unsigned long long _sourceColumns;
    unsigned long long _sourceRows;
    unsigned long long _indexOffset;
    unsigned long long _numberOfTopKValues;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long numberOfTopKValues; // @synthesize numberOfTopKValues=_numberOfTopKValues;
@property(nonatomic) unsigned long long indexOffset; // @synthesize indexOffset=_indexOffset;
@property(nonatomic) unsigned long long sourceRows; // @synthesize sourceRows=_sourceRows;
@property(nonatomic) unsigned long long sourceColumns; // @synthesize sourceColumns=_sourceColumns;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultIndexMatrix:(id)arg3 resultValueMatrix:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 numberOfTopKValues:(unsigned long long)arg2;

@end

