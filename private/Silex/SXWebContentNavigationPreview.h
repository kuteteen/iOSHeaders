//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLRequest, UIViewController;

@interface SXWebContentNavigationPreview : NSObject
{
    UIViewController *_viewController;
    id <SXWebContentNavigationHandler> _navigationHandler;
    NSURLRequest *_request;
}

@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SXWebContentNavigationHandler> navigationHandler; // @synthesize navigationHandler=_navigationHandler;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3;

@end

