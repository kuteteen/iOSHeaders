//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLKImageFittingObject : NSObject
{
    double _maximumFillFactor;
    struct CGSize _containerFittingSize;
}

+ (id)containerFittingSize:(struct CGSize)arg1 maximumFillFactor:(double)arg2;
@property(nonatomic) double maximumFillFactor; // @synthesize maximumFillFactor=_maximumFillFactor;
@property(nonatomic) struct CGSize containerFittingSize; // @synthesize containerFittingSize=_containerFittingSize;
- (struct CGSize)idealFittingSizeOfImageViewforImageSize:(struct CGSize)arg1;
- (id)init;

@end

