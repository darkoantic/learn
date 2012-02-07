<?php
/**
 * @file
 * write_a_patch.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function write_a_patch_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'write_a_patch';
  $lessons->title = 'Write a patch';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = 'Learn to submit suggested changes to Drupal as patch files';
  $lessons->version = '';
  $lessons->steps = 'Please move these instructions here:
https://docs.google.com/document/d/1b9Trcl9Vdis2hXveO-n3fH0f1hwhgRB5oheC6ZftP74/edit?hl=en_US';
  $lessons->permission = '';
  $export['write_a_patch'] = $lessons;

  return $export;
}
