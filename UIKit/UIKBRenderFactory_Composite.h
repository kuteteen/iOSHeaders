//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Composite : UIKBRenderFactory
{
    UIKBRenderFactory *_baseFactory;
    UIKBRenderFactory *_overlayFactory;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (id)_overlayMethodSelectors;
- (Class)_overlayFactoryClass;
- (Class)_baseFactoryClass;

@end

