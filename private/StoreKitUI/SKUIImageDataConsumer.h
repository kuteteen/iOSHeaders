//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer
{
}

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic, getter=isImagePlaceholderAvailable) _Bool imagePlaceholderAvailable;
- (id)imagePlaceholderForColor:(id)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageForColor:(id)arg1;

@end
