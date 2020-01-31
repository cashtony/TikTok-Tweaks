//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEDigitalWellbeingMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEButton, AWEProfileHeaderActionController, AWEUIButton, AWEUserRelationView, NSString, UIButton, UIImageView, UIView;
@protocol AWEProfileHeaderExtraViewControllerDelegate;

@interface AWEProfileHeaderExtraViewController : UIViewController <AWEUserMessage, AWEDigitalWellbeingMessage>
{
    _Bool _hasBeenFollowed;
    _Bool _isCurrentUser;
    AWEUserRelationView *_relationView;
    UIButton *_favoriteButton;
    id <AWEProfileHeaderExtraViewControllerDelegate> _delegate;
    AWEButton *_addBtn;
    UIButton *_myQrcodeBtn;
    UIView *_myFavoriteDotView;
    AWEUIButton *_editButton;
    UIView *_userRecommendBtnBackgroundView;
    AWEButton *_userRecommendBtn;
    UIImageView *_userRecommendLoadingImageView;
    UIButton *_reportBtn;
    UIButton *_socialLinkButton;
    UIView *_relationViewPreView;
    AWEProfileHeaderActionController *_actionController;
}

@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(nonatomic) _Bool hasBeenFollowed; // @synthesize hasBeenFollowed=_hasBeenFollowed;
@property(retain, nonatomic) AWEProfileHeaderActionController *actionController; // @synthesize actionController=_actionController;
@property(retain, nonatomic) UIView *relationViewPreView; // @synthesize relationViewPreView=_relationViewPreView;
@property(retain, nonatomic) UIButton *socialLinkButton; // @synthesize socialLinkButton=_socialLinkButton;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UIImageView *userRecommendLoadingImageView; // @synthesize userRecommendLoadingImageView=_userRecommendLoadingImageView;
@property(retain, nonatomic) AWEButton *userRecommendBtn; // @synthesize userRecommendBtn=_userRecommendBtn;
@property(retain, nonatomic) UIView *userRecommendBtnBackgroundView; // @synthesize userRecommendBtnBackgroundView=_userRecommendBtnBackgroundView;
@property(retain, nonatomic) AWEUIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *myFavoriteDotView; // @synthesize myFavoriteDotView=_myFavoriteDotView;
@property(retain, nonatomic) UIButton *myQrcodeBtn; // @synthesize myQrcodeBtn=_myQrcodeBtn;
@property(retain, nonatomic) AWEButton *addBtn; // @synthesize addBtn=_addBtn;
@property(nonatomic) __weak id <AWEProfileHeaderExtraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) AWEUserRelationView *relationView; // @synthesize relationView=_relationView;
- (void).cxx_destruct;
- (void)teenModeDidChange:(_Bool)arg1 isLogout:(_Bool)arg2;
- (void)updateRecommendUIWithFollowStatus:(long long)arg1;
- (void)updateRecommendUI;
- (void)updateAddFriendsButtonUI;
- (void)languageDidChange;
- (_Bool)isAddFriendsBtnNewStyle;
- (_Bool)shouldShowRecommendButtonWithFollowStatus:(long long)arg1;
- (void)showProfileInfoCompletionAnimation;
- (void)updateProfileCompletion:(float)arg1 hidePercentWhenCompleted:(_Bool)arg2;
- (void)updateUserRecommendBtnStatus:(_Bool)arg1;
- (void)_stopLoadingAnim;
- (void)_startLoadingAnim;
- (void)userRecommendBtnLoadingAnimation:(_Bool)arg1;
- (void)recommendViewChangeAfterFollow:(_Bool)arg1;
- (void)recommendViewChangeAfterUnfollow;
- (id)removeFansChannel;
- (id)turnOffPostNotificationChannel;
- (id)turnOnPostNotificationChannel;
- (id)sendMessageChannel;
- (id)unblockUserChannel;
- (id)blockUserChannel;
- (void)showSharePanel;
- (void)showAliasAlertAfterFollow:(_Bool)arg1 contactName:(id)arg2 isEnterprise:(_Bool)arg3;
- (void)gotoMyFavorite;
- (void)p_reportUser;
- (void)turnOffPostNotification;
- (void)turnOnPostNotification;
- (void)removeFans;
- (void)unblockUser;
- (void)blockUserHint;
- (void)reportBtnClicked:(id)arg1;
- (void)userRecommendBtnClicked:(id)arg1;
- (void)qrcodeButtonClicked;
- (void)addBtnClicked:(id)arg1;
- (void)editProfile:(id)arg1;
- (void)trackFollowAlertViewResponse:(_Bool)arg1;
- (void)trackFollowAlertViewType:(long long)arg1;
- (void)p_checkUserFollowToastForMT:(_Bool)arg1;
- (void)p_checkUserFollowToastForDouyin:(_Bool)arg1;
- (void)p_checkUserFollowToast:(_Bool)arg1;
- (void)relationBtnClicked:(id)arg1;
- (void)sendMsgBtnClicked:(id)arg1;
- (void)p_changeUserRelation;
- (void)_updateFakeFollowStatus:(long long)arg1;
- (void)switchFollowStatus:(_Bool)arg1;
- (double)extraViewControllerWidth;
- (void)updateSocialLinkView;
- (void)configWithActionController:(id)arg1;
- (void)removeAllSubViews;
- (void)followPrivateAccountCheck;
- (void)onShareVCDismissedNotification;
- (void)updateRelationViewWithFollowStatus:(long long)arg1 animated:(_Bool)arg2;
- (void)updateAddBtnYellowPointCount:(long long)arg1;
- (void)setupEnterpriseUI;
- (void)setupUI;
- (void)setupSymmetricUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithActionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

