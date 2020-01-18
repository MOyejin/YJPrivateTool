Pod::Spec.new do |s|

    s.name         = "YJPrivateTool"
    s.version      = "0.0.6"
    s.summary      = "YJPrivateTool of iOS"
    s.homepage     = "https://github.com/MOyejin/YJPrivateTool"
    s.license      = "MIT"
    s.author       = { "MOyejin" => "1976779764@qq.com" }
    s.platform     = :ios
    s.source       = { :git => "https://github.com/MOyejin/YJPrivateTool.git", :tag => "#{s.version}" }
    s.source_files = "YJFoundation", "YJFoundation/**/*.{h,m}"
    s.frameworks   = 'UIKit', 'Foundation'
    s.requires_arc = true

#s.dependency "MJRefresh"
#s.dependency "Masonry"

end
