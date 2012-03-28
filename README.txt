Learn Warehouse (version 1.0)
-----------------------------

About
---------------------------------------------
Learn is a Drupal-based content management solution for websites to offer
lessons in an achievment-ladder format. It is the Drupal distribution that
powers learndrupal.org, including lessons and exercises to help learn and
contribute to Drupal.


System Requirements
---------------------------------------------
Learn is currently based on Drupal 7. See http://drupal.org/requirements for
Drupal requirements.


Customize and extend Learn
---------------------------------------------


Installation
---------------------------------------------
Learn will be available as full Drupal site in tgz and zip format at:
http://drupal.org/project/learn. Until then, use Drush Make:


Building with Drush Make
---------------------------------------------
Learn can be built using the Drush Make utility, to download and install Drupal
core and Learn's component parts. Drush 5.x+ includes Drush Make. Download it
from http://drupal.org/project/drush and see http://drush.ws/help/5#make for
help.

1. Clone the Learn distribution via git from
http://drupal.org/project/learn/git-instructions
2. From the command-line, run: "drush make --prepare-install build-learn.make
INSTALL_PATH" where INSTALL_PATH is an empty directory where your site will
reside.
3. Install Drupal, specifying "Learn Drupal" as the install profile. See:
https://skitch.com/bryan.hirsch/8gpmb/select-an-installation-profile-drupal


Rebuilding the Distribution (for Developers)
---------------------------------------------
The learn.rebuild.sh bash script is provided pull new changes to the Learn
distribution. Running it will remove from the install profile all contrib
modules and themes, as well as any libraries, and re-download them via drush make.
