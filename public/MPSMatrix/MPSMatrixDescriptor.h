//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSMatrixDescriptor : NSObject
{
    unsigned long long _rows;
    unsigned long long _columns;
    unsigned long long _matrices;
    unsigned long long _rowBytes;
    unsigned long long _matrixBytes;
    unsigned int _dataType;
}

+ (id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 matrices:(unsigned long long)arg3 rowBytes:(unsigned long long)arg4 matrixBytes:(unsigned long long)arg5 dataType:(unsigned int)arg6;
+ (id)matrixDescriptorWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (id)matrixDescriptorWithDimensions:(unsigned long long)arg1 columns:(unsigned long long)arg2 rowBytes:(unsigned long long)arg3 dataType:(unsigned int)arg4;
+ (unsigned long long)rowBytesForColumns:(unsigned long long)arg1 dataType:(unsigned int)arg2;
+ (unsigned long long)rowBytesFromColumns:(unsigned long long)arg1 dataType:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned long long matrixBytes; // @synthesize matrixBytes=_matrixBytes;
@property(nonatomic) unsigned long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned long long matrices; // @synthesize matrices=_matrices;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
- (id)init;

@end
