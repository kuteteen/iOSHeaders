//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScrollViewScrollObserver_Internal-Protocol.h>

@class NSString, UIScrollView;
@protocol _UIScrollViewScrollObserver_Internal;

__attribute__((visibility("hidden")))
@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal>
{
    id <_UIScrollViewScrollObserver_Internal> _controller;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UIScrollViewScrollObserver_Internal> controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_didScroll;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

