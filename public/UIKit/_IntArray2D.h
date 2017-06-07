//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _IntArray2D : NSObject
{
    long long *_arrayData;
    unsigned long long _iSize;
    unsigned long long _jSize;
    _Bool _shouldBoundsCheck;
}

+ (id)arrayWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;
@property(nonatomic) _Bool shouldBoundsCheck; // @synthesize shouldBoundsCheck=_shouldBoundsCheck;
@property(readonly, nonatomic) unsigned long long jSize; // @synthesize jSize=_jSize;
@property(readonly, nonatomic) unsigned long long iSize; // @synthesize iSize=_iSize;
- (void):(unsigned long long)arg1:(unsigned long long)arg2 newValue:(long long)arg3;
- (long long):(unsigned long long)arg1:(unsigned long long)arg2 outOfBoundsReturnValue:(long long)arg3;
- (long long):(unsigned long long)arg1:(unsigned long long)arg2;
- (void)assertBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;
- (_Bool)inBoundsForIIndex:(unsigned long long)arg1 jIndex:(unsigned long long)arg2;
- (id)initWithISize:(unsigned long long)arg1 jSize:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;

@end
