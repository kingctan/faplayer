/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRMetadataLayer;

@interface BRMetadataControl : BRControl
{
    BRMetadataLayer *_metadataLayer;
}

- (id)init;
- (void)dealloc;
- (id)layer;
- (void)resetAllFields;
- (void)setTitle:(id)fp8;
- (void)setRating:(id)fp8;
- (void)setSummary:(id)fp8;
- (void)setCopyright:(id)fp8;
- (void)setMetadata:(id)fp8 withLabels:(id)fp12;
- (void)setAlignment:(int)fp8;

@end

