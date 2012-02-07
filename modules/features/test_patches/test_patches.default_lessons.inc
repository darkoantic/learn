<?php
/**
 * @file
 * test_patches.default_lessons.inc
 */

/**
 * Implements hook_default_lessons().
 */
function test_patches_default_lessons() {
  $export = array();

  $lessons = new stdClass;
  $lessons->disabled = FALSE; /* Edit this to true to make a default lessons disabled initially */
  $lessons->api_version = 1;
  $lessons->name = 'test_patches';
  $lessons->title = 'Test patches';
  $lessons->author = '';
  $lessons->project = 'learn_drupal';
  $lessons->project_type = 'core';
  $lessons->lesson_type = 'configuration';
  $lessons->description = '';
  $lessons->version = '7';
  $lessons->steps = 'Please move these instructions here:
https://docs.google.com/document/d/1JCGnMoHMOrU4LFDnxQ84nWpsR-5PyWsYRspRlXJ2iX8/edit';
  $lessons->permission = '';
  $export['test_patches'] = $lessons;

  return $export;
}
