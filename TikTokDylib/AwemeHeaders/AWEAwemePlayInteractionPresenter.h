//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEAwemeMessage-Protocol.h"

@class AWEAwemeModel, AWEAwemePlayInteractionInteractor, AWEAwemePlayInteractionRouter, AWEAwemePlayInteractionViewController, NSDictionary, NSString;

@interface AWEAwemePlayInteractionPresenter : NSObject <AWEAwemeMessage>
{
    _Bool _alreadyShowShareGuide;
    _Bool _alreadyShowAdOperationGuide;
    _Bool _adOperationGuideShowing;
    _Bool _hasShownAdLightLandingBefore;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    NSString *_cityInfoString;
    NSString *_adEventName;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    AWEAwemePlayInteractionViewController *_viewController;
    NSString *_musicLabelString;
    AWEAwemePlayInteractionInteractor *_interactor;
    AWEAwemePlayInteractionRouter *_router;
}

@property(retain, nonatomic) AWEAwemePlayInteractionRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) AWEAwemePlayInteractionInteractor *interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) NSString *musicLabelString; // @synthesize musicLabelString=_musicLabelString;
@property(nonatomic) _Bool hasShownAdLightLandingBefore; // @synthesize hasShownAdLightLandingBefore=_hasShownAdLightLandingBefore;
@property(nonatomic) _Bool adOperationGuideShowing; // @synthesize adOperationGuideShowing=_adOperationGuideShowing;
@property(nonatomic) _Bool alreadyShowAdOperationGuide; // @synthesize alreadyShowAdOperationGuide=_alreadyShowAdOperationGuide;
@property(nonatomic) _Bool alreadyShowShareGuide; // @synthesize alreadyShowShareGuide=_alreadyShowShareGuide;
@property(nonatomic) __weak AWEAwemePlayInteractionViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) AWEAwemeModel *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;
- (void)didTurnAweme:(id)arg1 toPrivateType:(unsigned long long)arg2;
- (long long)fromPageTypeWithReferString:(id)arg1;
- (void)handleVideo:(id)arg1 accept:(_Bool)arg2;
- (void)onShareVCDismissedNotification:(id)arg1;
- (void)onTopStatusChangeNotification:(id)arg1;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)onSyncLiveUserNotification:(id)arg1;
- (void)onLiveBlockAudienceNotication:(id)arg1;
- (void)onVolumeChangeNotification:(id)arg1;
- (void)onCommentTotalCountNotification:(id)arg1;
- (void)onCommentDeleteNotification:(id)arg1;
- (void)onCommentAddNotification:(id)arg1;
- (void)playAdLearnMoreViewAnimation;
- (void)closeAdOperationGuide:(unsigned long long)arg1;
- (void)showAdOperationGuide;
- (void)playDouPlusEntryGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playWhatsAppShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)showCircularShareGuide;
- (void)playFavoriteGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)checkIfShouldShowShareGuideAnimationWithPlayTimes:(long long)arg1;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willSetPureModeBlock:(_Bool)arg1;
- (id)view;
- (void)updateShoppingCartView;
- (void)updateAvatarMark;
- (void)updateTimeStampLabel;
- (void)updateUnInterestBtn;
- (void)updateDynamicLabel;
- (void)updateTagsView;
- (void)playVideoWithAnimation;
- (_Bool)isVideoPausedByClick;
- (void)dislikeVideoFromShare;
- (void)updateFollowStatus;
- (void)updateShareButton;
- (void)updateDiggCount;
- (void)playDislikeAnimation;
- (void)playLikeAnimation;
- (void)onLongVideoTagClicked:(id)arg1;
- (void)enterInviteUser:(id)arg1;
- (void)_onRelationLabelClicked_IMP:(id)arg1;
- (void)enterDiggedUser:(id)arg1;
- (void)showOSTListWithVC:(id)arg1;
- (void)_onMusicInfoViewClicked_IMP:(id)arg1;
- (void)onOriginalFlagLabelClicked_IMP:(id)arg1;
- (void)onOriginalFlagLabelClicked:(id)arg1;
- (void)enterMusicDetail:(id)arg1;
- (_Bool)onVideoPlayerViewSingleClicked:(id)arg1;
- (void)onVideoPlayerViewDoubleClicked:(id)arg1;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdDescriptionClicked:(id)arg1 url:(id)arg2 range:(struct _NSRange)arg3;
- (void)_onAdOperationViewClicked_IMP:(id)arg1;
- (void)onAdOperationViewClicked:(id)arg1;
- (void)_onLearnMoreViewClicked_IMP:(id)arg1;
- (void)onLearnMoreViewClicked:(id)arg1;
- (void)_onUnInterestBtnClicked_IMP:(id)arg1;
- (void)onUnInterestBtnClicked:(id)arg1;
- (void)_onAuthorLabelClicked_IMP:(id)arg1;
- (void)onGameButtonTapped:(id)arg1;
- (void)onMediumButtonTapped:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onCountryLabelClicked_IMP:(id)arg1;
- (void)onCountryLabelClicked:(id)arg1;
- (void)onVastButtonTapped:(id)arg1;
- (void)onIronManButtonTapped:(id)arg1;
- (void)onLinkAdButtonClicked:(id)arg1;
- (void)onTaskLinkButtonClicked:(id)arg1;
- (void)onStarAtlasLinkButtonClicked:(id)arg1;
- (void)onDouLinkButtonClicked:(id)arg1;
- (void)onPoiCardClicked_IMP:(id)arg1;
- (void)onOpenPlatformLabelClicked_IMP:(id)arg1;
- (void)onGoodsLinkLabelClicked_IMP:(id)arg1;
- (void)onGoodsSeedingButtonClicked_IMP:(id)arg1;
- (void)onTripAdvisorClicked_IMP:(id)arg1;
- (void)onYelpClicked_IMP:(id)arg1;
- (void)onWikipediaLabelClicked_IMP:(id)arg1;
- (void)onPoiLabelClicked_IMP:(id)arg1;
- (void)onStickerLabelClicked:(id)arg1;
- (void)onMvLabelClicked:(id)arg1;
- (void)onPoiCardClicked:(id)arg1;
- (void)onOpenPlatformLabelClicked:(id)arg1;
- (void)onGoodsLinkClicked:(id)arg1;
- (void)onGoodsSeedingButtonClicked:(id)arg1;
- (void)onTripAdvisorClicked:(id)arg1;
- (void)onYelpClicked:(id)arg1;
- (void)onWikipediaLabelClicked:(id)arg1;
- (void)onPoiLabelClicked:(id)arg1;
- (void)onXiguaTaskRedPacketClicked_IMP:(id)arg1;
- (void)onXiguaTaskRedPacketClicked:(id)arg1;
- (void)_onChallengeLabelClicked_IMP:(id)arg1;
- (void)onChallengeLabelClicked:(id)arg1;
- (id)musicOriginalOfflineDescString;
- (_Bool)isCPCAd;
- (void)_onMusicButtonClicked_IMP:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onShareButtonClicked:(id)arg1;
- (void)onCommentButtonClicked:(id)arg1;
- (void)onLikeButtonClicked:(id)arg1;
- (void)onAttractionViewTapped:(id)arg1;
- (void)onAttractionViewShowed;
- (void)_onUserAvatarViewClicked_IMP:(id)arg1;
- (void)onUserAvatarViewClicked:(id)arg1;
- (void)openAdRedPacket;
- (void)_onRedPackedImageClicked_IMP:(id)arg1;
- (void)onRedPackedImageClicked:(id)arg1;
- (void)_onShoppingCartIconClicked_IMP:(id)arg1;
- (void)onShoppingCartIconClicked:(id)arg1;
- (void)p_trackEnterUserPageWithEnterMethod:(id)arg1;
- (void)p_goToPersonalPage:(id)arg1 gestureRecognizer:(id)arg2;
- (void)onUnFollowViewClicked:(id)arg1;
- (void)onFollowViewClicked:(id)arg1;
- (void)lookTiredVideo;
- (void)longPressDislikeVideo;
- (_Bool)alertIfCanNotComment;
- (_Bool)alertIfCanNotShare;
- (_Bool)alertIfNotLogin;
- (_Bool)p_isRepost;
- (void)trackLiveShow;
@property(readonly, nonatomic) long long type;
- (_Bool)isActive;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

