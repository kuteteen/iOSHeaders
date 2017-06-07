//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

@class _NCWidgetViewController;

__attribute__((visibility("hidden")))
@interface _NCWidgetExtensionContext : NSExtensionContext
{
    struct CGSize _maxCompactSize;
    struct CGSize _maxExpandedSize;
    long long _widgetLargestAvailableDisplayMode;
    _NCWidgetViewController *_hostViewController;
    long long _activeDisplayMode;
}

@property(nonatomic, getter=_activeDisplayMode, setter=_setActiveDisplayMode:) long long activeDisplayMode; // @synthesize activeDisplayMode=_activeDisplayMode;
@property(nonatomic, getter=_hostViewController, setter=_setHostViewController:) __weak _NCWidgetViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (_Bool)widgetIsForeground;
- (struct CGSize)widgetMaximumSizeForDisplayMode:(long long)arg1;
- (long long)widgetActiveDisplayMode;
- (void)setWidgetLargestAvailableDisplayMode:(long long)arg1;
- (long long)widgetLargestAvailableDisplayMode;
- (void)_setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
- (struct CGSize)_maximumSizeForDisplayMode:(long long)arg1;
- (void)invalidateWidgetDisplayProperties;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

@end

