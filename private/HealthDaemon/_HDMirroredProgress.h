//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProgress.h"

@interface _HDMirroredProgress : NSProgress
{
    NSProgress *_originalProgress;
}

+ (id)_KVOKeyPaths;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_update;
- (void)_unregisterForKVO;
- (void)_registerForKVO;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)arg1;

@end

