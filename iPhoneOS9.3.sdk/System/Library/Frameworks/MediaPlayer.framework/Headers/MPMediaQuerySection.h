//
//  MPMediaQuerySection.h
//  MediaPlayer
//
//  Copyright 2010 Apple, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayerDefines.h>

NS_ASSUME_NONNULL_BEGIN

// An MPMediaQuerySection object represents a single section grouping for a query.

MP_EXTERN_CLASS_AVAILABLE(4_2)
__TVOS_PROHIBITED
@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying>

// The localized title of the section grouping.
@property (nonatomic, copy, readonly) NSString *title;

// The range in the query's corresponding collections or items array represented by this section.
@property (nonatomic, assign, readonly) NSRange range;

@end

NS_ASSUME_NONNULL_END
