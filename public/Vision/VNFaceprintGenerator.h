//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceprintGenerator : VNDetector
{
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> m_FaceDescriptorImpl;
    struct shared_ptr<vision::mod::FaceFrontalizer> m_FaceFrontalizerImpl;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> m_DescriptorAugmenter;
    struct shared_ptr<unsigned char> m_FaceFrontalizerWorkingBuffer;
    struct vImage_Buffer m_FaceFrontalizerImageBuffer;
    struct _Geometry2D_size2D_ m_RequiredImageSize;
    _Bool _useLowPriorityMode;
    unsigned long long _metalContextPriority;
}

+ (_Bool)shouldDumpDebugIntermediates;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)computeFromBuffer:(struct vImage_Buffer *)arg1 withChannels:(unsigned long long)arg2 error:(id *)arg3;
- (id)computeFromPixelBuffer:(struct __CVBuffer *)arg1 withChannels:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned long long length;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
