//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class PHPerson, PXPeopleNamePickerTitleView;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController
{
    unsigned long long _mode;
    PXPeopleNamePickerTitleView *_peopleTitleView;
    PHPerson *_person;
}

@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) PXPeopleNamePickerTitleView *peopleTitleView; // @synthesize peopleTitleView=_peopleTitleView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (id)createAssetActionManager;
- (id)createTitleView;
- (void)updateBars;

@end
