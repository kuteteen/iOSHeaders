//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXComponentStyleRendererFactory.h"

@class NSString;

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory>
{
    id <SXDocumentControllerProvider> _documentControllerProvider;
    id <SXImageViewFactory> _imageViewFactory;
    id <SXGradientFactory> _gradientFactory;
}

@property(readonly, nonatomic) id <SXGradientFactory> gradientFactory; // @synthesize gradientFactory=_gradientFactory;
@property(readonly, nonatomic) id <SXImageViewFactory> imageViewFactory; // @synthesize imageViewFactory=_imageViewFactory;
@property(readonly, nonatomic) id <SXDocumentControllerProvider> documentControllerProvider; // @synthesize documentControllerProvider=_documentControllerProvider;
- (void).cxx_destruct;
- (id)componentStyleRendererForComponent:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 imageViewFactory:(id)arg2 gradientFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

