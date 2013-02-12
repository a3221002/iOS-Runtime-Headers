/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPGeniusMix, MPMediaItem, NSMutableArray;

@interface IUGeniusMixPlaybackDataSource : IUMediaQueryPlaybackDataSource <IUGeniusMixQueueFeederDataSource> {
    BOOL _finite;
    MPGeniusMix *_mix;
    NSMutableArray *_playlistQueries;
    MPMediaItem *_requiredInitialMediaItem;
}

@property(readonly) MPMediaItem * initialMediaItem;
@property(readonly) MPGeniusMix * mix;
@property(retain) MPMediaItem * requiredInitialMediaItem;

+ (Class)queueFeederClass;

- (id)_generateNewPlaylistQuery:(id*)arg1 index:(unsigned int)arg2;
- (id)_queryForMediaItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)geniusMixQueueFeeder:(id)arg1 indexOfMediaItem:(id)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 mediaItemAtIndex:(unsigned int)arg2;
- (id)geniusMixQueueFeeder:(id)arg1 queryForMediaItemAtIndex:(unsigned int)arg2;
- (unsigned int)geniusMixQueueFeederMediaItemCount:(id)arg1;
- (id)initWithGeniusMix:(id)arg1 requiredInitialMediaItem:(id)arg2 error:(id*)arg3;
- (id)initialMediaItem;
- (id)mix;
- (id)query;
- (id)requiredInitialMediaItem;
- (void)setRequiredInitialMediaItem:(id)arg1;

@end