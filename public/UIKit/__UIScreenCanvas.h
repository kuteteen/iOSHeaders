//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UICanvas.h>

__attribute__((visibility("hidden")))
@interface __UIScreenCanvas : _UICanvas
{
}

+ (id)settingsDiffActions;
+ (id)_unassociatedCanvasForScreen:(id)arg1 create:(_Bool)arg2;
+ (_Bool)alwaysKeepContexts;
- (void)detachWindow:(id)arg1;
- (void)setKeepContextAssociationInBackground:(_Bool)arg1;
- (id)_lookupKey;
- (id)screen;
- (void)_invalidateScreen;
- (id)initWithScreen:(id)arg1;

@end

