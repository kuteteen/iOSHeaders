//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/CAMBadgeTextView.h>

@interface CAMFocusLockBadge : CAMBadgeTextView
{
    _Bool _focusLocked;
    _Bool _exposureLocked;
}

@property(nonatomic, getter=isExposureLocked) _Bool exposureLocked; // @synthesize exposureLocked=_exposureLocked;
@property(nonatomic, getter=isFocusLocked) _Bool focusLocked; // @synthesize focusLocked=_focusLocked;
- (void)_updateText;
- (id)initWithFrame:(struct CGRect)arg1;

@end
