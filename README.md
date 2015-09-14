# VIPhotoView 

VIPhotoView is a view use to view a photo with simple and basic interactive gesture. Pinch to scale photo, double tap to scale photo, drag to scoll photo. 


## Screenshot
![demo.gif](http://i.imgur.com/7XdCsHb.gif)

## Installation

**Cocoapods**

`pod 'VIPhotoView', '~> 0.1'`

## Usage

Init VIPhotoView with frame and image, than add it to a view.

```Objc
- (void)viewDidLoad {
    [super viewDidLoad];

    UIImage *image = [UIImage imageNamed:@"test.jpg"];
    VIPhotoView *photoView = [[VIPhotoView alloc] initWithFrame:self.view.bounds andImage:image];
    photoView.autoresizingMask = (1 << 6) -1;
    
    [self.view addSubview:photoView];
}
```
注意:如果需要点击imageView后显示此预览界面,需要设置imageView.contentMode,否则可能会出现VIPhotoView计算放大,缩小不正确,不能缩放的问题

```Objc
imageView.contentMode = UIViewContentModeScaleAspectFit;
```

加入了单击关闭的delegate

```Objc
@protocol VIPhotoViewDelegate <NSObject>

- (void)dismissVIPhotoView:(VIPhotoView*)photoView;

@end
```

##License

VIPhotoView is released under the MIT license.