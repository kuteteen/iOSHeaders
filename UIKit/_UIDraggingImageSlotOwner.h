//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, _UIDragManager;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageSlotOwner : NSObject
{
    NSMutableArray *_usedSlotIDs;
    _UIDragManager *_dragManager;
}

@property(readonly, nonatomic) __weak _UIDragManager *dragManager; // @synthesize dragManager=_dragManager;
- (void).cxx_destruct;
- (unsigned int)uploadImage:(struct CGImage *)arg1;
- (void)dealloc;
- (id)initWithDragManager:(id)arg1;

@end

