//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString, UITargetedDragPreview, UITextDraggableGeometrySameViewDropOperationResult, UITextPosition, UITextRange, UIView;
@protocol UITextDraggableGeometrySameViewDropOperation;

@protocol UITextDraggableGeometry <NSObject>
@property(nonatomic) long long geometryOptions;
- (UITargetedDragPreview *)previewForDroppingText:(NSAttributedString *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint)arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;

@optional
- (UITextDraggableGeometrySameViewDropOperationResult *)performSameViewDropOperation:(id <UITextDraggableGeometrySameViewDropOperation>)arg1;
- (NSAttributedString *)combinedAttributedStringForTextRanges:(NSArray *)arg1;
@end

