//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TISCTextRunResponse : NSObject
{
    struct __CFArray *_ctLines;
    NSMutableArray *_widths;
    struct __CTFont *_font;
}

+ (id)textRunResponseByMergingResponses:(id)arg1;
+ (id)textRunResponseWithFont:(struct __CTFont *)arg1;
- (void)dealloc;
- (struct __CTFont *)font;
- (id)widths;
- (struct __CFArray *)ctLines;

@end

