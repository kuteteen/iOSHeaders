//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface SFPrintQueueItem : NSObject
{
    _Bool _completed;
    CDUnknownBlockType _completionHandler;
    _Bool _initiatedByWebContent;
    _WKFrameHandle *_frameHandle;
}

@property(readonly, nonatomic) _Bool initiatedByWebContent; // @synthesize initiatedByWebContent=_initiatedByWebContent;
@property(readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
- (void).cxx_destruct;
- (void)completeWithResult:(long long)arg1;
- (void)dealloc;
- (id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

