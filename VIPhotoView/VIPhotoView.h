//
//  VIPhotoView.h
//  VIPhotoViewDemo
//
//  Created by Vito on 1/7/15.
//  Copyright (c) 2015 vito. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VIPhotoView;

@protocol VIPhotoViewDelegate <NSObject>

- (void)dismissVIPhotoView:(VIPhotoView*)photoView;

@end

@interface VIPhotoView : UIScrollView

@property (nonatomic, weak) id<VIPhotoViewDelegate> closeDelegate;

- (instancetype)initWithFrame:(CGRect)frame andImage:(UIImage *)image;

@end
