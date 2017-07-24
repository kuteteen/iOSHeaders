//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@class NSArray, NSString, NUComposition, NUPriority, NURenderContext;
@protocol NUDevice, OS_dispatch_queue;

@interface NURenderRequest : NSObject <NSCopying>
{
    long long _requestNumber;
    long long _copiedFromRequestNumber;
    long long _parentRequestNumber;
    _Bool _shouldCoalesceUpdates;
    long long _sampleMode;
    NSArray *_pipelineFilters;
    id <NUDevice> _device;
    NSString *_name;
    NUPriority *_priority;
    NSObject<OS_dispatch_queue> *_responseQueue;
    NURenderContext *_renderContext;
    NUComposition *_internalComposition;
    double _submitTime;
    CDUnknownBlockType _completionBlock;
    id _voucher;
}

@property(retain) id voucher; // @synthesize voucher=_voucher;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double submitTime; // @synthesize submitTime=_submitTime;
@property(copy) NUComposition *internalComposition; // @synthesize internalComposition=_internalComposition;
@property _Bool shouldCoalesceUpdates; // @synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates;
@property(retain, nonatomic) NURenderContext *renderContext; // @synthesize renderContext=_renderContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NUPriority *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <NUDevice> device; // @synthesize device=_device;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) long long sampleMode; // @synthesize sampleMode=_sampleMode;
- (void).cxx_destruct;
- (void)submitGeneric:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)description;
@property(copy, nonatomic) NUComposition *composition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)takePropertiesFromRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithComposition:(id)arg1;
- (id)init;

@end
