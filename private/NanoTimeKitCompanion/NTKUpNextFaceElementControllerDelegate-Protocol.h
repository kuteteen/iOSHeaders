//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSIndexPath, NTKUpNextElement, NTKUpNextElementContent, NTKUpNextFaceElementController;

@protocol NTKUpNextFaceElementControllerDelegate <NSObject>

@optional
- (_Bool)faceElementController:(NTKUpNextFaceElementController *)arg1 isElementAtIndexPathVisible:(NSIndexPath *)arg2;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didMoveElement:(NTKUpNextElement *)arg2 fromIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didInsertElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didRemoveElement:(NTKUpNextElement *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 didReloadContent:(NTKUpNextElementContent *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)faceElementController:(NTKUpNextFaceElementController *)arg1 performBatchUpdateBlock:(void (^)(void))arg2 completion:(void (^)(void))arg3;
@end

