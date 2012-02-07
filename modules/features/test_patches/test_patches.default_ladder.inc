<?php
/**
 * @file
 * test_patches.default_ladder.inc
 */

/**
 * Implements hook_default_ladder().
 */
function test_patches_default_ladder() {
  $export = array();

  $rung = new stdClass;
  $rung->disabled = FALSE; /* Edit this to true to make a default rung disabled initially */
  $rung->api_version = 1;
  $rung->ladder = 'drupal';
  $rung->name = 'test_patches';
  $rung->title = 'Test patches';
  $rung->description = '';
  $rung->lesson = 'test_patches';
  $rung->css_class = 'ladder-in-development';
  $rung->weight = 110;
  $export['test_patches'] = $rung;

  return $export;
}
