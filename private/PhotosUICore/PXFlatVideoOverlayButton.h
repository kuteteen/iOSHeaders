//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "PXVideoOverlayButton.h"

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)initWithStyle:(long long)arg1;

@end

