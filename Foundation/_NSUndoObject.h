//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSUndoObject : NSObject
{
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)target;
- (void)invoke;
- (_Bool)isEndMark;
- (_Bool)isBeginMark;
- (id)initWithTarget:(id)arg1;
- (id)init;

@end

