//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVMLKit/TVImageScaleDecorator.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface _TVTintedImageDecorator : TVImageScaleDecorator
{
    IKColor *_tintColor;
}

@property(readonly, retain, nonatomic) IKColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)drawInContext:(id)arg1 imageRect:(struct CGRect)arg2;
- (id)decoratorIdentifier;
- (id)initWithTintColor:(id)arg1;

@end

