//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator
{
    int _profile;
}

- (int)profile;
- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DRendererElementProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;
- (id)init;
- (id)initWithProfile:(int)arg1;

@end
