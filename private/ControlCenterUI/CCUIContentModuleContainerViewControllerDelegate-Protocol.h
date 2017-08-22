//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIContentModuleContainerViewController, CCUIExpandedModuleBackgroundView;
@protocol CCUIContentModule;

@protocol CCUIContentModuleContainerViewControllerDelegate <NSObject>
- (CCUIExpandedModuleBackgroundView *)backgroundViewForContentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1;
- (_Bool)shouldApplyBackgroundEffectsForContentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (_Bool)contentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1 canBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg1;
@end

