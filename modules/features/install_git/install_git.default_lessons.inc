<?php
/**
 * @file
 * install_git.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function install_git_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'install_git';
  $lessons->title = 'Install Git';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = 'By the end of this lesson you will have Git installed on your computer and know a few basic commands';
  $lessons->version = '7';
  $lessons->steps = 'Please move this documentation here: 
https://docs.google.com/document/d/18QjFiRCPPpQqsuTfvi0dVfxIPmBUTCly8s88nZHYy2U/edit?hl=en_US

Additional references:
http://drupal.org/node/1010894';
  $lessons->permission = '';
  $export['install_git'] = $lessons;

  return $export;
}
