//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPageRangePrivate;

__attribute__((visibility("hidden")))
@interface PDFPageRange : NSObject
{
    PDFPageRangePrivate *_private;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (void)setPage:(id)arg1;
- (id)page;
- (id)initWithPage:(id)arg1 range:(struct _NSRange)arg2;

@end

