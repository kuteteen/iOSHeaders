//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ADWebView;

@interface ADWebViewManager : NSObject
{
    ADWebView *_preallocatedWebView;
}

+ (id)sharedManager;
@property(retain, nonatomic) ADWebView *preallocatedWebView; // @synthesize preallocatedWebView=_preallocatedWebView;
- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeView;
- (id)_webViewForCreative;
- (void)dealloc;

@end
