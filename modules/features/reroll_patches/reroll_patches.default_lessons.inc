<?php
/**
 * @file
 * reroll_patches.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function reroll_patches_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'reroll_patches';
  $lessons->title = 'Re-roll patches';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '';
  $lessons->steps = 'Please move these instructions here: 
https://docs.google.com/document/d/1nG8Dtv7zE_-EXxo4pMTi7s59km9YuRseYmQfUFJYPsM/edit?hl=en_US';
  $lessons->permission = '';
  $export['reroll_patches'] = $lessons;

  return $export;
}
