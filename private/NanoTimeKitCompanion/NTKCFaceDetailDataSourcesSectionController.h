//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>

#import "NTKCFaceDetailToggleCellDelegate.h"

@class NSMutableArray, NSString;

@interface NTKCFaceDetailDataSourcesSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate>
{
    id <NTKCFaceDetailDataSourcesSectionDelegate> _delegate;
}

+ (_Bool)hasDataSourcesSectionForFace:(id)arg1 inGallery:(_Bool)arg2;
@property(nonatomic) __weak id <NTKCFaceDetailDataSourcesSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_dataSourceAvailableOnGizmo:(id)arg1;
- (id)_getDisabledDataSources;
- (void)_buildRows;
- (void)toggleCell:(id)arg1 didToggle:(_Bool)arg2;
- (void)faceDidChange;
- (id)titleForHeader;
- (void)dealloc;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *rows; // @dynamic rows;
@property(readonly) Class superclass;

@end

