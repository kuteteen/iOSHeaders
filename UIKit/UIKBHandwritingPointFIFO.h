//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBHandwritingPointFIFO : NSObject
{
    UIKBHandwritingPointFIFO *_nextFIFO;
}

@property(retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (void)emitPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end

