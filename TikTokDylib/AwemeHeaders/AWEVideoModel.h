//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSArray, NSNumber;

@interface AWEVideoModel : AWEBaseApiModel
{
    _Bool _hasWatermark;
    _Bool _hasEndWatermark;
    _Bool _isH265;
    _Bool _needSetToken;
    _Bool _isCDNURLExpired;
    _Bool _hasHandledPlayURLExpired;
    _Bool _hasHandledBitrateModlesExpired;
    AWEURLModel *_playURL;
    NSArray *_bitrateModels;
    AWEURLModel *_dynamicCover;
    AWEURLModel *_playLowBitURL;
    AWEURLModel *_h264URL;
    AWEURLModel *_downloadURL;
    AWEURLModel *_endWatermarkDownloadURL;
    AWEURLModel *_captionWatermarkDownloadURL;
    AWEURLModel *_coverURL;
    AWEURLModel *_originCover;
    AWEURLModel *_animatedCover;
    NSNumber *_duration;
    NSNumber *_height;
    NSNumber *_width;
    AWEURLModel *_starComposeURL;
    long long _cdnURLExpiredTime;
}

+ (void)setCDNURLExpiredThreshold:(long long)arg1;
+ (id)bitrateModelsJSONTransformer;
+ (id)animatedCoverJSONTransformer;
+ (id)dynamicCoverJSONTransformer;
+ (id)originCoverJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)captionWatermarkDownloadURLJSONTransformer;
+ (id)endWatermarkDownloadURLJSONTransformer;
+ (id)downloadURLJSONTransformer;
+ (id)starComposeURLJSONTransformer;
+ (id)playLowBitURLJSONTransformer;
+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool hasHandledBitrateModlesExpired; // @synthesize hasHandledBitrateModlesExpired=_hasHandledBitrateModlesExpired;
@property(nonatomic) _Bool hasHandledPlayURLExpired; // @synthesize hasHandledPlayURLExpired=_hasHandledPlayURLExpired;
@property(nonatomic) _Bool isCDNURLExpired; // @synthesize isCDNURLExpired=_isCDNURLExpired;
@property(nonatomic) _Bool needSetToken; // @synthesize needSetToken=_needSetToken;
@property(nonatomic) long long cdnURLExpiredTime; // @synthesize cdnURLExpiredTime=_cdnURLExpiredTime;
@property(nonatomic) _Bool isH265; // @synthesize isH265=_isH265;
@property(readonly, nonatomic) AWEURLModel *starComposeURL; // @synthesize starComposeURL=_starComposeURL;
@property(nonatomic) _Bool hasEndWatermark; // @synthesize hasEndWatermark=_hasEndWatermark;
@property(nonatomic) _Bool hasWatermark; // @synthesize hasWatermark=_hasWatermark;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) AWEURLModel *animatedCover; // @synthesize animatedCover=_animatedCover;
@property(readonly, nonatomic) AWEURLModel *originCover; // @synthesize originCover=_originCover;
@property(retain, nonatomic) AWEURLModel *coverURL; // @synthesize coverURL=_coverURL;
@property(readonly, nonatomic) AWEURLModel *captionWatermarkDownloadURL; // @synthesize captionWatermarkDownloadURL=_captionWatermarkDownloadURL;
@property(readonly, nonatomic) AWEURLModel *endWatermarkDownloadURL; // @synthesize endWatermarkDownloadURL=_endWatermarkDownloadURL;
@property(readonly, nonatomic) AWEURLModel *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) AWEURLModel *h264URL; // @synthesize h264URL=_h264URL;
@property(readonly, nonatomic) AWEURLModel *playLowBitURL; // @synthesize playLowBitURL=_playLowBitURL;
@property(readonly, nonatomic) AWEURLModel *dynamicCover; // @synthesize dynamicCover=_dynamicCover;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bitrateModels; // @synthesize bitrateModels=_bitrateModels;
@property(retain, nonatomic) AWEURLModel *playURL; // @synthesize playURL=_playURL;
- (void)setOriginCover:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)addParamsToModel:(id)arg1 withType:(long long)arg2;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)awe_prefetchBSModel;
- (id)awe_prefetchURLModel;
- (id)awe_prefetchURLString;
@property(readonly, nonatomic) AWEURLModel *h264DownloadURL;

@end

