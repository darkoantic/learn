; Learn Drupal 
; -------------

; Core version
; -------------
core = 7.x

; API version
; -----------
api = 2

; Core project
; ------------
projects[] = drupal

; Contrib projects
; ----------------
projects[ctools][subdir] = contrib
projects[diff][subdir] = contrib 
projects[features][subdir] = contrib
projects[strongarm][subdir] = contrib 

projects[lessons][type] = module 
projects[lessons][download][type] = git
projects[lessons][download][url] = http://git.drupal.org/project/lessons.git
projects[lessons][download][branch] = 7.x-1.x
projects[lessons][subdir] = contrib

projects[ladder][type] = module 
projects[ladder][download][type] = git
projects[ladder][download][url] = http://git.drupal.org/project/ladder.git
projects[ladder][download][branch] = 7.x-1.x
projects[ladder][subdir] = contrib

projects[docreferences][type] = module 
projects[docreferences][download][type] = git
projects[docreferences][download][url] = http://git.drupal.org/project/docreferences.git
projects[docreferences][download][branch] = 7.x-1.x
projects[docreferences][subdir] = contrib 
