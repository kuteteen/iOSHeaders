//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKNavigationAction, WKWebView;

@interface _SFSyntheticClickContext : NSObject
{
    WKWebView *_webView;
    WKNavigationAction *_navigationAction;
}

@property(readonly, nonatomic) WKNavigationAction *navigationAction; // @synthesize navigationAction=_navigationAction;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (id)initWithWebView:(id)arg1 navigationAction:(id)arg2;

@end

