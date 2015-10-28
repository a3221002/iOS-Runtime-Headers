/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAttachmentPreviewImage : ICCloudSyncingObject {
    NSObject<OS_dispatch_queue> *_fileQueue;
    long _fileQueueOnceToken;
    unsigned int _imageID;
}

@property (nonatomic, retain) NSSet *attachments;
@property (nonatomic) double height;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic) double scale;
@property (nonatomic) BOOL scaleWhenDrawing;
@property (nonatomic) short version;
@property (nonatomic) BOOL versionOutOfDate;
@property (nonatomic) double width;

+ (id)allCloudObjects;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)fileQueueGroup;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(float)arg2 width:(float)arg3 height:(float)arg4;
+ (id)imageCache;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4;
+ (id)previewImageDirectoryURL;
+ (void)purgeAllPreviewImages;
+ (id)recordType;
+ (void)waitUntilAllFileWritesAreFinished;

- (void).cxx_destruct;
- (struct UIImage { Class x1; }*)cachedImage;
- (struct UIImage { Class x1; }*)cachedOrientedImage;
- (void)deleteFromLocalDatabase;
- (id)fileQueue;
- (void)fixBrokenReferences;
- (struct UIImage { Class x1; }*)image;
- (BOOL)imageIsValid;
- (struct UIImage { Class x1; }*)imageWithBackground:(int)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (BOOL)isInICloudAccount;
- (BOOL)isSketch;
- (id)loggingDescriptionValues;
- (BOOL)makeSurePreviewImageDirectoryExists:(id*)arg1;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 newPreviewImage:(BOOL)arg2;
- (BOOL)needsInitialFetchFromCloud;
- (BOOL)needsToBeDeletedFromCloud;
- (BOOL)needsToBeFetchedFromCloud;
- (BOOL)needsToBePushedToCloud;
- (id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1;
- (id)oldPreviewImageURL;
- (struct UIImage { Class x1; }*)orientedImage;
- (id)orientedImageID;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })orientedImageTransform;
- (struct UIImage { Class x1; }*)orientedImageWithBackground:(int)arg1;
- (id)orientedPreviewImageURL;
- (id)orientedPreviewImageURLCreateIfNeeded:(BOOL)arg1;
- (void)prepareForDeletion;
- (int)previewImageOrientation;
- (id)previewImageURL;
- (id)recordZoneID;
- (void)resetUniqueIdentifier;
- (BOOL)resolveReference:(id)arg1 forKey:(id)arg2;
- (void)setCachedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setCachedOrientedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setImage:(struct UIImage { Class x1; }*)arg1 withScale:(float)arg2 completion:(id /* block */)arg3;
- (BOOL)shouldSyncToCloud;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)supportsDeletionByTTL;
- (id)temporaryPreviewImageURL;
- (id)threadUnsafeNewlyCreatedRecord;

@end