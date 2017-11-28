@version = "1.01"
Pod::Spec.new do |s|
  s.name             = 'GhostPlusMedia'
  s.version          = @version
  s.summary          = 'Ghost Plus Media Framework'
  s.description      = 'Ghost Plus Media Framework'
  s.homepage         = 'http://www.ghostplus.com'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.authors          = { 'VANSTUDIO' => 'vanstudio@ghost-corps.com' }
  
  s.platform     = :ios, '7.0'
  s.requires_arc = true
  
  s.vendored_frameworks = ['Frameworks/GhostPlusMedia.framework']
  
  #s.source           = { :http => 'http://developer.ghostplus.com/project/ghostplus_ios/GhostPlus-1.00.tar.gz', :flatten => true }
  s.source       = { :git => "https://github.com/vanstudio/GhostPlusMedia-iOS.git", :tag => @version }
  
  s.source_files = []
  s.resource = 'Frameworks/GhostPlusMedia.framework/Versions/A/Resources/GhostPlusMediaResources.bundle'
  
  s.preserve_paths = []
  s.header_dir = 'GhostPlusMedia'

  s.frameworks = ['GhostPlusMedia']
  #s.libraries = ['stdc++', 'z']
  
  #s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/TestGhostPlus"' }
  
  s.dependency 'GhostPlus'
  s.dependency 'GPUImage', '~> 0.1.7'
end