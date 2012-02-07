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

projects[lesson][type] = module 
projects[lesson][download][type] = git
projects[lesson][download][url] = http://git.drupal.org/project/lesson.git
projects[lesson][subdir] = contrib

projects[ladder][type] = module 
projects[ladder][download][type] = git
projects[ladder][download][url] = http://git.drupal.org/project/ladder.git
projects[ladder][subdir] = contrib

projects[docreference][type] = module 
projects[docreference][download][type] = git
projects[docreference][download][url] = http://git.drupal.org/project/docreference.git
projects[docreference][subdir] = contrib 
