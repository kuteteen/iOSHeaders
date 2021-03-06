//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSUUID;

@interface QLServiceViewController : UIViewController
{
    _Bool _isAccessoryView;
    UIViewController *_mainViewController;
    NSUUID *_uuid;
}

+ (id)_getServiceWithUUID:(id)arg1;
+ (id)_serviceViewControllers;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)_registerServiceViewController;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)invalidatePreviewCollection;
@property(readonly) __weak UIViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (id)init;

@end

