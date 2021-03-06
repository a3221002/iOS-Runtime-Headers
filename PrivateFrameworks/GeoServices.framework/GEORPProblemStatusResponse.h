/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemStatusResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    } _has;
    NSMutableArray *_problemStatus;
    int _statusCode;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic, retain) NSMutableArray *problemStatus;
@property (nonatomic) int statusCode;

- (void)addProblemStatus:(id)arg1;
- (void)clearProblemStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problemStatus;
- (id)problemStatusAtIndex:(unsigned int)arg1;
- (unsigned int)problemStatusCount;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setProblemStatus:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
